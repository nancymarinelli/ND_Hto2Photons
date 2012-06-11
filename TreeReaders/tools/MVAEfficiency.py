print "Loading Root..."

#import pdb; pdb.set_trace()
from ROOT import *
from math import pow
import array
gROOT.Macro("$HOME/rootlogon.C")
gStyle.SetOptStat(000000)

print "Setting Initial Parameters."
can = TCanvas("Plots","Plots",850,650)
can.SetGrid()
leg = TLegend(0.20, 0.13, 0.53, 0.28)
leg.SetFillColor(0)
leg.SetBorderSize(1)
HistogramNames=["MVAdZNVtx","MVAdZVtxPt","MixdZNVtx","MixdZVtxPt","MixdZEta"]
AxisLabel=["Number of Vertices","Pt (GeV)","Number of Vertices","Pt (GeV)","#eta"]
legendlist=["Run 2012A+B","#gamma+Jet MC"]
#legendlist=["SingleLeg Conversions","DoubleLeg Conversions"]
filenamelist=["Vertex_Data_CiCPF.root","Vertex_PJet_CiCPF.root"]
#filenamelist=["Vertex_Higgs_125GeV52XSL_SimVertex_SingleLeg.root","Vertex_Higgs_125GeV52XSL_SimVertex_DoubleLeg.root"]
pwd = "/data/ndpc2/c/HiggsGammaGamma/PhotonPlusJet/CMSSW_4_2_3/src/ND_Hto2Photons/TreeReaders/"
LowerBin=191
UpperBin=210
graphcolor=[1,2,4,6]
markers=[20,21,22,23]
Min=[0.6,0.6,0.4,0.4,0,0.4,0.6]
Max=[1.01,1.01,1.01,1.01,1.01,1.01,1.01]
doRatio=False

files=[]
for filename in filenamelist:
	files.append(TFile(pwd+filename))

for histname,xlabel,min,max in zip(HistogramNames,AxisLabel,Min,Max):
	multigraph = TMultiGraph()
	EffHistList = []
	for file,legend,color,marstyle in zip(files,legendlist,graphcolor,markers):
		hist=file.Get(histname)
		Denominator=[]
		DenominatorError=[]
		Numerator=[]
		NumeratorError=[]
		for i in range(1,hist.GetNbinsX()+1):
			Error=Double(0.0)
			Denominator.append(hist.IntegralAndError(i,i,0,hist.GetNbinsY()+1,Error,""))
			DenominatorError.append(Error)
			Numerator.append(hist.IntegralAndError(i,i,LowerBin,UpperBin,Error,""))
			NumeratorError.append(Error)
			if Denominator[i-1]==0: print "%0.1f, %0.1f" %(Numerator[i-1],Denominator[i-1])
			else: print "%i, %0.1f, %0.1f, %0.3f" %(i,Numerator[i-1],Denominator[i-1],float(Numerator[i-1])/float(Denominator[i-1])*100.0)
		DenominatorHist=TH1F("DenominatorHist","DenominatorHist",hist.GetNbinsX(),hist.GetXaxis().GetBinLowEdge(1),hist.GetXaxis().GetBinLowEdge(hist.GetNbinsX()+1))
		NumeratorHist=TH1F("NumeratorHist","NumeratorHist",hist.GetNbinsX(),hist.GetXaxis().GetBinLowEdge(1),hist.GetXaxis().GetBinLowEdge(hist.GetNbinsX()+1))
		#DenominatorHist.Sumw2()
		#NumeratorHist.Sumw2()
		for i in range(len(Denominator)):
			DenominatorHist.SetBinContent(i+1,Denominator[i])
			DenominatorHist.SetBinError(i+1,DenominatorError[i])
			NumeratorHist.SetBinContent(i+1,Numerator[i])
			NumeratorHist.SetBinError(i+1,NumeratorError[i])
		EffHist = NumeratorHist
		#EffHist.Sumw2()
		EffHist.Divide(DenominatorHist)
		for i in range(1,EffHist.GetNbinsX()+1):
			if EffHist.GetBinContent(i)==1 or EffHist.GetBinContent(i)==0:
				#print "For Hist %s at bin %i Value: %f Error: %f" %(histname,i,EffHist.GetBinContent(i),0)
				EffHist.SetBinError(i,0)
			else:
				#print "For Hist %s at bin %i Value: %f Error: %f" %(histname,i,EffHist.GetBinContent(i),sqrt(EffHist.GetBinContent(i)*(1-EffHist.GetBinContent(i))/DenominatorHist.GetBinContent(i)))
				EffHist.SetBinError(i,sqrt(EffHist.GetBinContent(i)*(1-EffHist.GetBinContent(i))/DenominatorHist.GetBinContent(i)))
		#graph=TGraphAsymmErrors(NumeratorHist,DenominatorHist,"n")
		graph=TGraphErrors(EffHist)
		graph.SetLineColor(color)
		graph.SetMarkerStyle(marstyle)
		graph.SetMarkerSize(1)
		graph.SetMarkerColor(color)
		graph.SetFillColor(kWhite)
		leg.AddEntry(graph,legend)
		multigraph.Add(graph)
		for i in range(1,EffHist.GetNbinsX()+1): EffHist.SetBinError(i,graph.GetErrorY(i-1))
		EffHistList.append(EffHist)
	multigraph.SetNameTitle("multigraph",";"+xlabel+";Efficiency");
	multigraph.SetMinimum(min)
	multigraph.SetMaximum(max)
	multigraph.Draw('AP')
	multigraph.GetXaxis().SetRangeUser(0,EffHistList[0].GetXaxis().GetBinLowEdge(hist.GetNbinsX()+1))
	leg.Draw()
	can.SaveAs("MVAEff_"+histname+"_CiCPF.png")
	can.Clear()
	leg.Clear()
	if doRatio and len(EffHistList)==2:
		RatioHist=EffHistList[0]
		RatioHist.Divide(EffHistList[1])
		RatioHist.SetNameTitle("Systematic",";"+xlabel+";Data/MC Ratio");
		RatioHist.SetMarkerStyle(20)
		RatioHist.SetMarkerSize(1)
		if histname=="MVAdZNVtx":
			RatioHist.SetMinimum(0)
			RatioHist.SetMaximum(1.8)
		elif histname=="MVAdZVtxPt":
			RatioHist.SetMinimum(0.6)
			RatioHist.SetMaximum(1.05)
		RatioHist.Draw("")
		can.SaveAs(histname+"_EffRatio.png")
	can.Clear()
	multigraph.Delete("*")
	gDirectory.Delete("*")

print "Done"
