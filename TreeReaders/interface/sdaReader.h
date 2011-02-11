//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jul  1 15:30:00 2010 by ROOT version 5.22/00d
// from TTree Analysis/Analysis
// found on file: /data/ndpc1/b/tkolberg/MPAntuples/PhotonJet_Pt170_Spring10-START3X_V26_S09-v1_GEN-SIM-RECO/MultiPhotonAnalyzer.root
//////////////////////////////////////////////////////////

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TClonesArray.h>
#include <iostream>

using namespace std;

class sdaReader {
public :
  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain

  // Declaration of leaf types
  Int_t           event;
  Int_t           run;
  Int_t           process_id;
  Int_t           lumis;
  Int_t           bx;
  Float_t         pthat;
  Float_t         weight;
  Int_t           pho_n;
  Int_t           pho_isEB[100];   //[pho_n]
  Int_t           pho_isEE[100];   //[pho_n]
  Int_t           pho_isEBGap[100];   //[pho_n]
  Int_t           pho_isEEGap[100];   //[pho_n]
  Int_t           pho_isEBEEGap[100];   //[pho_n]
  Float_t         pho_see[100];   //[pho_n]
  Float_t         pho_sieie[100];   //[pho_n]
  Float_t         pho_e1x5[100];   //[pho_n]
  Float_t         pho_e2x5[100];   //[pho_n]
  Float_t         pho_e3x3[100];   //[pho_n]
  Float_t         pho_e5x5[100];   //[pho_n]
  Float_t         pho_emaxxtal[100];   //[pho_n]
  Float_t         pho_genmatcheddr[100];   //[pho_n]
  Float_t         pho_genmatchedptres[100];   //[pho_n]
  Float_t         pho_hoe[100];   //[pho_n]
  Float_t         pho_h1oe[100];   //[pho_n]
  Float_t         pho_h2oe[100];   //[pho_n]
  Float_t         pho_r1x5[100];   //[pho_n]
  Float_t         pho_r2x5[100];   //[pho_n]
  Float_t         pho_r9[100];   //[pho_n]
  Float_t         pho_ecalsumetconedr04[100];   //[pho_n]
  Float_t         pho_hcalsumetconedr04[100];   //[pho_n]
  Float_t         pho_hcal1sumetconedr04[100];   //[pho_n]
  Float_t         pho_hcal2sumetconedr04[100];   //[pho_n]
  Float_t         pho_trksumptsolidconedr04[100];   //[pho_n]
  Float_t         pho_trksumpthollowconedr04[100];   //[pho_n]
  Float_t         pho_ntrksolidconedr04[100];   //[pho_n]
  Float_t         pho_ntrkhollowconedr04[100];   //[pho_n]
  Float_t         pho_ecalsumetconedr03[100];   //[pho_n]
  Float_t         pho_hcalsumetconedr03[100];   //[pho_n]
  Float_t         pho_hcal1sumetconedr03[100];   //[pho_n]
  Float_t         pho_hcal2sumetconedr03[100];   //[pho_n]
  Float_t         pho_trksumptsolidconedr03[100];   //[pho_n]
  Float_t         pho_trksumpthollowconedr03[100];   //[pho_n]
  Float_t         pho_ntrksolidconedr03[100];   //[pho_n]
  Float_t         pho_ntrkhollowconedr03[100];   //[pho_n]
  TClonesArray    *pho_p4;
  TClonesArray    *pho_calopos;
  Int_t           pho_barrel[100];   //[pho_n]
  Int_t           pho_scind[100];   //[pho_n]
  Int_t           pho_haspixseed[100];   //[pho_n]
  Int_t           pho_hasconvtks[100];   //[pho_n]
  Int_t           pho_nconv[100];   //[pho_n]
  Int_t           pho_conv_ntracks[100];   //[pho_n]
  Float_t         pho_conv_pairinvmass[100];   //[pho_n]
  Float_t         pho_conv_paircotthetasep[100];   //[pho_n]
  Float_t         pho_conv_eoverp[100];   //[pho_n]
  Float_t         pho_conv_zofprimvtxfromtrks[100];   //[pho_n]
  Float_t         pho_conv_distofminapproach[100];   //[pho_n]
  Float_t         pho_conv_dphitrksatvtx[100];   //[pho_n]
  Float_t         pho_conv_dphitrksatecal[100];   //[pho_n]
  Float_t         pho_conv_detatrksatecal[100];   //[pho_n]
  Float_t         pho_conv_tk1_d0[100];   //[pho_n]
  Float_t         pho_conv_tk1_pout[100];   //[pho_n]
  Float_t         pho_conv_tk1_pin[100];   //[pho_n]
  Float_t         pho_conv_tk2_d0[100];   //[pho_n]
  Float_t         pho_conv_tk2_pout[100];   //[pho_n]
  Float_t         pho_conv_tk2_pin[100];   //[pho_n]
  Float_t         pho_conv_tk1_dz[100];   //[pho_n]
  Float_t         pho_conv_tk2_dz[100];   //[pho_n]
  Float_t         pho_conv_tk1_dzerr[100];   //[pho_n]
  Float_t         pho_conv_tk2_dzerr[100];   //[pho_n]
  Int_t           pho_conv_tk1_nh[100];   //[pho_n]
  Int_t           pho_conv_tk2_nh[100];   //[pho_n]
  Float_t         pho_conv_chi2[100];   //[pho_n]
  Float_t         pho_conv_chi2_probability[100];   //[pho_n]
  Int_t           pho_conv_ch1ch2[100];   //[pho_n]
  Int_t           pho_conv_validvtx[100];   //[pho_n]
  Int_t           pho_conv_MVALikelihood[100];   //[pho_n]
  TClonesArray    *pho_conv_vtx;
  TClonesArray    *pho_conv_pair_momentum;
  TClonesArray    *pho_conv_refitted_momentum;
  TClonesArray    *pho_conv_vertexcorrected_p4;
  Int_t           ecalhit_n;
  Int_t           ecalhit_type[10000];   //[ecalhit_n]
  Int_t           ecalhit_flag[10000];   //[ecalhit_n]
  Float_t         ecalhit_time[10000];   //[ecalhit_n]
  TClonesArray    *ecalhit_p4;
  Int_t           sc_islbar_n;
  TClonesArray    *sc_islbar_p4;
  TClonesArray    *sc_islbar_xyz;
  Float_t         sc_islbar_raw[100];   //[sc_islbar_n]
  Int_t           sc_islbar_nbc[100];   //[sc_islbar_n]
  Float_t         sc_islbar_seedenergy[100];   //[sc_islbar_n]
  Int_t           sc_islbar_bcseedind[100];   //[sc_islbar_n]
  Int_t           sc_islbar_bcind[100][35];   //[sc_islbar_n]
  Int_t           sc_n;
  Int_t           sc_islend_n;
  Int_t           sc_hybrid_n;
  TClonesArray    *sc_p4;
  TClonesArray    *sc_xyz;
  Float_t         sc_pre[100];   //[sc_n]
  Float_t         sc_raw[100];   //[sc_n]
  Int_t           sc_barrel[100];   //[sc_n]
  Float_t         sc_2xN[100];   //[sc_n]
  Float_t         sc_5xN[100];   //[sc_n]
  Float_t         sc_sieie[100];   //[sc_n]
  Int_t           sc_nbc[100];   //[sc_n]
  Int_t           sc_bcseedind[100];   //[sc_n]
  Int_t           sc_bcind[100][35];   //[sc_n]
  Int_t           bc_n;
  Int_t           bc_islbar_n;
  Int_t           bc_islend_n;
  Int_t           bc_hybrid_n;
  TClonesArray    *bc_p4;
  TClonesArray    *bc_xyz;
  Int_t           bc_nhits[500];   //[bc_n]
  Float_t         bc_s1[500];   //[bc_n]
  Float_t         bc_rook[500];   //[bc_n]
  Float_t         bc_s4[500];   //[bc_n]
  Float_t         bc_s9[500];   //[bc_n]
  Float_t         bc_s25[500];   //[bc_n]
  Float_t         bc_spp[500];   //[bc_n]
  Float_t         bc_see[500];   //[bc_n]
  Float_t         bc_sep[500];   //[bc_n]
  Int_t           bc_type[500];   //[bc_n]
  Float_t         bc_s1x5_0[500];   //[bc_n]
  Float_t         bc_s1x5_1[500];   //[bc_n]
  Float_t         bc_s1x5_2[500];   //[bc_n]
  Float_t         bc_s1x3_0[500];   //[bc_n]
  Float_t         bc_s1x3_1[500];   //[bc_n]
  Float_t         bc_s1x3_2[500];   //[bc_n]
  Float_t         bc_s3x1_0[500];   //[bc_n]
  Float_t         bc_s3x1_1[500];   //[bc_n]
  Float_t         bc_s3x1_2[500];   //[bc_n]
  Float_t         bc_s5x1_0[500];   //[bc_n]
  Float_t         bc_s5x1_1[500];   //[bc_n]
  Float_t         bc_s5x1_2[500];   //[bc_n]
  Float_t         bc_sieie[500];   //[bc_n]
  Int_t           ct_n;
  TClonesArray    *ct_p4;
  Float_t         ct_emEnergy[1000];   //[ct_n]
  Float_t         ct_hadEnergy[1000];   //[ct_n]
  Float_t         ct_outerEnergy[1000];   //[ct_n]
  Int_t           ct_emL1[1000];   //[ct_n]
  Int_t           ct_hadL1[1000];   //[ct_n]
  Int_t           ct_size[1000];   //[ct_n]
  TClonesArray    *hc_p4;
  Int_t           hc_n;
  Int_t           hc_type[3500];   //[hc_n]
  UInt_t          hlt1_bit_1;
  UInt_t          hlt1_bit_2;
  UInt_t          hlt1_bit_3;
  UInt_t          hlt1_bit_4;
  vector<string>  *hlt_path_names_HLT1_1;
  vector<string>  *hlt_path_names_HLT1_2;
  vector<string>  *hlt_path_names_HLT1_3;
  vector<string>  *hlt_path_names_HLT1_4;
  Int_t           hlt_n;
  TClonesArray    *hlt_p4;
  UInt_t          hlt_candpath_1[100];   //[hlt_n]
  UInt_t          hlt_candpath_2[100];   //[hlt_n]
  UInt_t          hlt_candpath_3[100];   //[hlt_n]
  UInt_t          hlt_candpath_4[100];   //[hlt_n]
  Int_t           hlt_id[100];   //[hlt_n]
  Int_t           hlt_el_offlineind[100];   //[hlt_n]
  Int_t           hlt_ph_offlineind[100];   //[hlt_n]
  Int_t           hlt_mu_offlineind[100];   //[hlt_n]
  Int_t           hlt_jet_offlineind[100];   //[hlt_n]
  vector<string>  *hlt_label_names_1;
  vector<string>  *hlt_label_names_2;
  vector<string>  *hlt_label_names_3;
  vector<string>  *hlt_label_names_4;
  Int_t           vtx_std_n;
  TClonesArray    *vtx_std_xyz;
  TClonesArray    *vtx_std_dxdydz;
  TClonesArray    *vtx_std_vectorp3;
  Float_t         vtx_std_x2dof[100];   //[vtx_std_n]
  Float_t         vtx_std_ndof[100];   //[vtx_std_n]
  Float_t         vtx_std_scalarpt[100];   //[vtx_std_n]
  Int_t           vtx_std_ntks[100];   //[vtx_std_n]
  Int_t           vtx_std_tkind[100][200];   //[vtx_std_n]
  Float_t         vtx_std_tkweight[100][200];   //[vtx_std_n]
  Int_t           vtx_pix_n;
  TClonesArray    *vtx_pix_xyz;
  TClonesArray    *vtx_pix_dxdydz;
  TClonesArray    *vtx_pix_vectorp3;
  Float_t         vtx_pix_x2dof[100];   //[vtx_pix_n]
  Float_t         vtx_pix_ndof[100];   //[vtx_pix_n]
  Float_t         vtx_pix_scalarpt[100];   //[vtx_pix_n]
  Int_t           vtx_pix_ntks[100];   //[vtx_pix_n]
  Int_t           vtx_pix_tkind[100][200];   //[vtx_pix_n]
  Float_t         vtx_pix_tkweight[100][200];   //[vtx_pix_n]
  Int_t           vtxcomp_n;
  Int_t           vtxcomp_lepn[376];   //[vtxcomp_n]
  Int_t           vtxcomp_pdgid[376][4];   //[vtxcomp_n]
  Int_t           vtxcomp_lepind[376][4];   //[vtxcomp_n]
  Bool_t          vtxcomp_klmn_isvalid[376];   //[vtxcomp_n]
  Float_t         vtxcomp_klmn_x2dof[376];   //[vtxcomp_n]
  Int_t           vtxcomp_klmn_ndof[376];   //[vtxcomp_n]
  Float_t         vtxcomp_klmn_x2prob[376];   //[vtxcomp_n]
  Float_t         vtxcomp_klmn_tk_chi2[376][4];   //[vtxcomp_n]
  Float_t         met_met;
  Float_t         met_phi;
  Float_t         met_met_nocalo;
  Float_t         met_phi_nocalo;
  Float_t         met_met_crossed;
  Float_t         met_phi_crossed;
  Float_t         met_met_s9;
  Float_t         met_phi_s9;
  Float_t         met_met_mip;
  Float_t         met_phi_mip;
  Float_t         met_met_jet;
  Float_t         met_phi_jet;
  Float_t         met_tcmet;
  Float_t         met_phi_tcmet;
  Float_t         met_pfmet;
  Float_t         met_phi_pfmet;
  Int_t           simtrk_n;
  TClonesArray    *simtrk_p4;
  TClonesArray    *simtrk_vtx;
  Int_t           simtrk_pdgid[1];   //[simtrk_n]
  Int_t           simtrk_trkid[1];   //[simtrk_n]
  Int_t           simtrk_mothertrkid[1];   //[simtrk_n]
  TClonesArray    *simvtx;
  Int_t           tk_n;
  TClonesArray    *tk_p4;
  TClonesArray    *tk_vtx_pos;
  Int_t           tk_nhits[1500];   //[tk_n]
  Int_t           tk_charge[1500];   //[tk_n]
  Int_t           tk_nlosthit[1500];   //[tk_n]
  Int_t           tk_tpind[1500];   //[tk_n]
  Float_t         tk_chi2[1500];   //[tk_n]
  Float_t         tk_dof[1500];   //[tk_n]
  Float_t         tk_d0[1500];   //[tk_n]
  Float_t         tk_dz[1500];   //[tk_n]
  Float_t         tk_qoverperr[1500];   //[tk_n]
  Float_t         tk_pterr[1500];   //[tk_n]
  Float_t         tk_etaerr[1500];   //[tk_n]
  Float_t         tk_phierr[1500];   //[tk_n]
  Float_t         tk_d0err[1500];   //[tk_n]
  Float_t         tk_dzerr[1500];   //[tk_n]
  Int_t           tk_hp_nvalid[1500];   //[tk_n]
  Int_t           tk_hp_nlost[1500];   //[tk_n]
  Int_t           tk_hp_nvalidpix[1500];   //[tk_n]
  Int_t           tk_hp_expin[1500];   //[tk_n]
  Int_t           tk_hp_expout[1500];   //[tk_n]
  Int_t           tk_quality[1500];   //[tk_n]
  Int_t           tk_algo[1500];   //[tk_n]
  Int_t           gsf_tk_n;
  TClonesArray    *gsf_tk_p4;
  TClonesArray    *gsf_tk_vtx_pos;
  Int_t           gsf_tk_nhits[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_charge[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_nlosthit[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_tpind[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_chi2[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_dof[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_d0[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_dz[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_qoverpinerr[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_qoverpouterr[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_pterr[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_etaerr[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_phierr[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_d0err[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_dzerr[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_hp_nvalid[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_hp_nlost[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_hp_nvalidpix[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_hp_expin[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_hp_expout[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_pin[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_pout[1500];   //[gsf_tk_n]
  Float_t         gsf_tk_fbrem[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_quality[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_algo[1500];   //[gsf_tk_n]
  Int_t           gsf_tk_tkind[1500];   //[gsf_tk_n]
  Int_t           el_std_n;
  TClonesArray    *el_std_sc;
  TClonesArray    *el_std_p4;
  TClonesArray    *el_std_momvtx;
  TClonesArray    *el_std_momvtxconst;
  TClonesArray    *el_std_momcalo;
  TClonesArray    *el_std_posvtx;
  TClonesArray    *el_std_poscalo;
  Int_t           el_std_crack[100];   //[el_std_n]
  Float_t         el_std_eopin[100];   //[el_std_n]
  Float_t         el_std_eseedopout[100];   //[el_std_n]
  Float_t         el_std_pout[100];   //[el_std_n]
  Float_t         el_std_pin[100];   //[el_std_n]
  Float_t         el_std_e1x5[100];   //[el_std_n]
  Float_t         el_std_e5x5[100];   //[el_std_n]
  Float_t         el_std_e2x5[100];   //[el_std_n]
  Float_t         el_std_spp[100];   //[el_std_n]
  Float_t         el_std_see[100];   //[el_std_n]
  Float_t         el_std_sieie[100];   //[el_std_n]
  Float_t         el_std_sieiesc[100];   //[el_std_n]
  Float_t         el_std_eseed[100];   //[el_std_n]
  Float_t         el_std_enearbcopin[100];   //[el_std_n]
  Float_t         el_std_eseedopin[100];   //[el_std_n]
  Float_t         el_std_fbrem[100];   //[el_std_n]
  Int_t           el_std_nbrem[100];   //[el_std_n]
  Float_t         el_std_hoe[100];   //[el_std_n]
  Float_t         el_std_hoed1[100];   //[el_std_n]
  Float_t         el_std_hoed2[100];   //[el_std_n]
  Float_t         el_std_detain[100];   //[el_std_n]
  Float_t         el_std_dphiin[100];   //[el_std_n]
  Float_t         el_std_detaout[100];   //[el_std_n]
  Float_t         el_std_dphiout[100];   //[el_std_n]
  Int_t           el_std_class[100];   //[el_std_n]
  Int_t           el_std_nambtk[100];   //[el_std_n]
  Int_t           el_std_scind[100];   //[el_std_n]
  Float_t         el_std_z0[100];   //[el_std_n]
  Float_t         el_std_d0[100];   //[el_std_n]
  Float_t         el_std_qoverperr[100];   //[el_std_n]
  Float_t         el_std_pterr[100];   //[el_std_n]
  Float_t         el_std_etaerr[100];   //[el_std_n]
  Float_t         el_std_phierr[100];   //[el_std_n]
  Float_t         el_std_z0err[100];   //[el_std_n]
  Float_t         el_std_d0err[100];   //[el_std_n]
  Float_t         el_std_chi2[100];   //[el_std_n]
  Float_t         el_std_dof[100];   //[el_std_n]
  Float_t         el_std_mva[100];   //[el_std_n]
  Int_t           el_std_ch_gsf[100];   //[el_std_n]
  Int_t           el_std_ch_scpix[100];   //[el_std_n]
  Int_t           el_std_charge[100];   //[el_std_n]
  Int_t           el_std_losthits[100];   //[el_std_n]
  Int_t           el_std_validhits[100];   //[el_std_n]
  Int_t           el_std_hp_expin[100];   //[el_std_n]
  Int_t           el_std_hp_expout[100];   //[el_std_n]
  Int_t           el_std_rohighe[100];   //[el_std_n]
  Int_t           el_std_roloose[100];   //[el_std_n]
  Int_t           el_std_rotight[100];   //[el_std_n]
  Int_t           el_std_loose[100];   //[el_std_n]
  Int_t           el_std_tight[100];   //[el_std_n]
  Int_t           el_std_tkind[100];   //[el_std_n]
  Float_t         el_std_hcaliso03[100];   //[el_std_n]
  Float_t         el_std_ecaliso03[100];   //[el_std_n]
  Float_t         el_std_tkiso03[100];   //[el_std_n]
  Float_t         el_std_hcaliso04[100];   //[el_std_n]
  Float_t         el_std_ecaliso04[100];   //[el_std_n]
  Float_t         el_std_tkiso04[100];   //[el_std_n]
  Bool_t          el_std_3dip_valid[100];   //[el_std_n]
  Bool_t          el_std_tkdrv[100];   //[el_std_n]
  Bool_t          el_std_ecaldrv[100];   //[el_std_n]
  Float_t         el_std_ip_ctf[100];   //[el_std_n]
  Float_t         el_std_ip_gsf[100];   //[el_std_n]
  Int_t           mu_glo_n;
  TClonesArray    *mu_glo_p4;
  TClonesArray    *mu_glo_momvtx;
  TClonesArray    *mu_glo_posvtx;
  TClonesArray    *mu_glo_posecal;
  TClonesArray    *mu_glo_poshcal;
  Int_t           mu_glo_nmatches[100];   //[mu_glo_n]
  Float_t         mu_glo_em[100];   //[mu_glo_n]
  Float_t         mu_glo_had[100];   //[mu_glo_n]
  Float_t         mu_glo_ho[100];   //[mu_glo_n]
  Float_t         mu_glo_emS9[100];   //[mu_glo_n]
  Float_t         mu_glo_hadS9[100];   //[mu_glo_n]
  Float_t         mu_glo_hoS9[100];   //[mu_glo_n]
  Float_t         mu_glo_chi2[100];   //[mu_glo_n]
  Float_t         mu_glo_dof[100];   //[mu_glo_n]
  Int_t           mu_glo_tkind[100];   //[mu_glo_n]
  Int_t           mu_glo_staind[100];   //[mu_glo_n]
  Float_t         mu_glo_z0[100];   //[mu_glo_n]
  Float_t         mu_glo_d0[100];   //[mu_glo_n]
  Float_t         mu_glo_z0err[100];   //[mu_glo_n]
  Float_t         mu_glo_d0err[100];   //[mu_glo_n]
  Int_t           mu_glo_charge[100];   //[mu_glo_n]
  Int_t           mu_glo_losthits[100];   //[mu_glo_n]
  Int_t           mu_glo_validhits[100];   //[mu_glo_n]
  Int_t           mu_glo_type[100];   //[mu_glo_n]
  Float_t         mu_glo_iso[100];   //[mu_glo_n]
  Bool_t          mu_glo_3dip_valid[100];   //[mu_glo_n]
  Int_t           jet_it5_n;
  TClonesArray    *jet_it5_p4;
  Float_t         jet_it5_emfrac[150];   //[jet_it5_n]
  Float_t         jet_it5_hadfrac[150];   //[jet_it5_n]
  Int_t           jet_it5_ntk[150];   //[jet_it5_n]
  Int_t           jet_it5_tkind[150][100];   //[jet_it5_n]
  Int_t           jet_it5_ncalotw[150];   //[jet_it5_n]
  Int_t           jet_it5_calotwind[150][100];   //[jet_it5_n]
  Int_t           jet_it7_n;
  TClonesArray    *jet_it7_p4;
  Float_t         jet_it7_emfrac[150];   //[jet_it7_n]
  Float_t         jet_it7_hadfrac[150];   //[jet_it7_n]
  Int_t           jet_it7_ntk[150];   //[jet_it7_n]
  Int_t           jet_it7_tkind[150][100];   //[jet_it7_n]
  Int_t           jet_it7_ncalotw[150];   //[jet_it7_n]
  Int_t           jet_it7_calotwind[150][100];   //[jet_it7_n]
  Int_t           jet_mid_n;
  TClonesArray    *jet_mid_p4;
  Float_t         jet_mid_emfrac[150];   //[jet_mid_n]
  Float_t         jet_mid_hadfrac[150];   //[jet_mid_n]
  Int_t           jet_mid_ntk[150];   //[jet_mid_n]
  Int_t           jet_mid_tkind[150][100];   //[jet_mid_n]
  Int_t           jet_mid_ncalotw[150];   //[jet_mid_n]
  Int_t           jet_mid_calotwind[150][100];   //[jet_mid_n]
  Int_t           jet_it5pf_n;
  TClonesArray    *jet_it5pf_p4;
  Float_t         jet_it5pf_emfrac[100];   //[jet_it5pf_n]
  Float_t         jet_it5pf_hadfrac[100];   //[jet_it5pf_n]
  Int_t           jet_it5pf_ntk[100];   //[jet_it5pf_n]
  Int_t           jet_it5pf_tkind[100][100];   //[jet_it5pf_n]
  Int_t           jet_it5pf_ncalotw[100];   //[jet_it5pf_n]
  Int_t           jet_it5pf_calotwind[100][100];   //[jet_it5pf_n]
  Int_t           jet_sis5pf_n;
  TClonesArray    *jet_sis5pf_p4;
  Float_t         jet_sis5pf_emfrac[100];   //[jet_sis5pf_n]
  Float_t         jet_sis5pf_hadfrac[100];   //[jet_sis5pf_n]
  Int_t           jet_sis5pf_ntk[100];   //[jet_sis5pf_n]
  Int_t           jet_sis5pf_tkind[100][100];   //[jet_sis5pf_n]
  Int_t           jet_sis5pf_ncalotw[100];   //[jet_sis5pf_n]
  Int_t           jet_sis5pf_calotwind[100][100];   //[jet_sis5pf_n]
  Int_t           jet_kt4pf_n;
  TClonesArray    *jet_kt4pf_p4;
  Float_t         jet_kt4pf_emfrac[100];   //[jet_kt4pf_n]
  Float_t         jet_kt4pf_hadfrac[100];   //[jet_kt4pf_n]
  Int_t           jet_kt4pf_ntk[100];   //[jet_kt4pf_n]
  Int_t           jet_kt4pf_tkind[100][100];   //[jet_kt4pf_n]
  Int_t           jet_kt4pf_ncalotw[100];   //[jet_kt4pf_n]
  Int_t           jet_kt4pf_calotwind[100][100];   //[jet_kt4pf_n]
  Int_t           gp_n;
  TClonesArray    *gp_p4;
  TClonesArray    *gp_vtx;
  Int_t           gp_status[10000];   //[gp_n]
  Int_t           gp_pdgid[10000];   //[gp_n]
  Int_t           gp_mother[10000];   //[gp_n]
  Int_t           genjet_it5_n;
  TClonesArray    *genjet_it5_p4;
  Float_t         genjet_it5_em[150];   //[genjet_it5_n]
  Float_t         genjet_it5_had[150];   //[genjet_it5_n]
  Float_t         genjet_it5_inv[150];   //[genjet_it5_n]
  Float_t         genjet_it5_aux[150];   //[genjet_it5_n]
  Int_t           genjet_it7_n;
  TClonesArray    *genjet_it7_p4;
  Float_t         genjet_it7_em[150];   //[genjet_it7_n]
  Float_t         genjet_it7_had[150];   //[genjet_it7_n]
  Float_t         genjet_it7_inv[150];   //[genjet_it7_n]
  Float_t         genjet_it7_aux[150];   //[genjet_it7_n]
  Int_t           genjet_mid_n;
  TClonesArray    *genjet_mid_p4;
  Float_t         genjet_mid_em[150];   //[genjet_mid_n]
  Float_t         genjet_mid_had[150];   //[genjet_mid_n]
  Float_t         genjet_mid_inv[150];   //[genjet_mid_n]
  Float_t         genjet_mid_aux[150];   //[genjet_mid_n]
  Int_t           lpt_n;
  Int_t           lpt_emu_n;
  Int_t           lpt_mu_n;
  Int_t           lpt_el_n;
  Int_t           lpt_pho_n;
  Int_t           lpt_pdgid[300];   //[lpt_n]
  Int_t           lpt_ind[300];   //[lpt_n]
  Int_t           lpt_duplicate[300];   //[lpt_n]
  TClonesArray    *lpt_p4;
  Int_t           lpt_indgen[300];   //[lpt_n]
  Float_t         lpt_drmatch[300];   //[lpt_n]
  Float_t         ht_25;
  Float_t         ht_35;
  Float_t         ht_50;
  Float_t         ht_nomet25;
  Float_t         ht_nomet35;
  Float_t         ht_nomet50;
  Float_t         ht_trk;
  TVector3        *ht_trkvec;
  Int_t           ht_2lpt_n;
  Int_t           ht_2lpt_inds[400][2];   //[ht_2lpt_n]
  Int_t           ht_4lpt_n;
  Int_t           ht_4lpt_inds[1000][4];   //[ht_4lpt_n]
  Float_t         ht_2lpt25[400];   //[ht_2lpt_n]
  Float_t         ht_2lpt35[400];   //[ht_2lpt_n]
  Float_t         ht_2lpt50[400];   //[ht_2lpt_n]
  Float_t         ht_4lpt25[1000];   //[ht_4lpt_n]
  Float_t         ht_4lpt35[1000];   //[ht_4lpt_n]
  Float_t         ht_4lpt50[1000];   //[ht_4lpt_n]
  Int_t           lptgeninfo_n;
  Int_t           lptgen_n;
  TClonesArray    *lptgeninfo_p4;
  TClonesArray    *lptgen_p4;
  TClonesArray    *lptgen_befrad_p4;
  Int_t           lptgeninfo_status[100];   //[lptgeninfo_n]
  Int_t           lptgeninfo_pdgid[100];   //[lptgeninfo_n]
  Int_t           lptgeninfo_mother[100];   //[lptgeninfo_n]
  Int_t           lptgen_status[100];   //[lptgen_n]
  Int_t           lptgen_pdgid[100];   //[lptgen_n]
  Int_t           lptgen_mother[100];   //[lptgen_n]
  Int_t           lptgen_motherpdgid[100];   //[lptgen_n]
  Int_t           lptgen_indrec[100];   //[lptgen_n]
  Int_t           lptgen_indrecel[100];   //[lptgen_n]
  Int_t           lptgen_indrecph[100];   //[lptgen_n]
  Int_t           lptgen_indrecmu[100];   //[lptgen_n]
  Float_t         lptgen_drmatch[100];   //[lptgen_n]
  Float_t         lptgen_drmatchel[100];   //[lptgen_n]
  Float_t         lptgen_drmatchmu[100];   //[lptgen_n]
  Float_t         lptgen_drmatchph[100];   //[lptgen_n]
  Int_t           lptgen_indinfo[100];   //[lptgen_n]
  Int_t           lptgen_historycode[100];   //[lptgen_n]
  Int_t           selector_bits;
  
  // List of branches
  TBranch        *b_event;   //!
  TBranch        *b_run;   //!
  TBranch        *b_process_id;   //!
  TBranch        *b_lumis;   //!
  TBranch        *b_bx;   //!
  TBranch        *b_pthat;   //!
  TBranch        *b_weight;   //!
  TBranch        *b_pho_n;   //!
  TBranch        *b_pho_isEB;   //!
  TBranch        *b_pho_isEE;   //!
  TBranch        *b_pho_isEBGap;   //!
  TBranch        *b_pho_isEEGap;   //!
  TBranch        *b_pho_isEBEEGap;   //!
  TBranch        *b_pho_see;   //!
  TBranch        *b_pho_sieie;   //!
  TBranch        *b_pho_e1x5;   //!
  TBranch        *b_pho_e2x5;   //!
  TBranch        *b_pho_e3x3;   //!
  TBranch        *b_pho_e5x5;   //!
  TBranch        *b_pho_emaxxtal;   //!
  TBranch        *b_pho_genmatcheddr;   //!
  TBranch        *b_pho_genmatchedptres;   //!
  TBranch        *b_pho_hoe;   //!
  TBranch        *b_pho_h1oe;   //!
  TBranch        *b_pho_h2oe;   //!
  TBranch        *b_pho_r1x5;   //!
  TBranch        *b_pho_r2x5;   //!
  TBranch        *b_pho_r9;   //!
  TBranch        *b_pho_ecalsumetconedr04;   //!
  TBranch        *b_pho_hcalsumetconedr04;   //!
  TBranch        *b_pho_hcal1sumetconedr04;   //!
  TBranch        *b_pho_hcal2sumetconedr04;   //!
  TBranch        *b_pho_trksumptsolidconedr04;   //!
  TBranch        *b_pho_trksumpthollowconedr04;   //!
  TBranch        *b_pho_ntrksolidconedr04;   //!
  TBranch        *b_pho_ntrkhollowconedr04;   //!
  TBranch        *b_pho_ecalsumetconedr03;   //!
  TBranch        *b_pho_hcalsumetconedr03;   //!
  TBranch        *b_pho_hcal1sumetconedr03;   //!
  TBranch        *b_pho_hcal2sumetconedr03;   //!
  TBranch        *b_pho_trksumptsolidconedr03;   //!
  TBranch        *b_pho_trksumpthollowconedr03;   //!
  TBranch        *b_pho_ntrksolidconedr03;   //!
  TBranch        *b_pho_ntrkhollowconedr03;   //!
  TBranch        *b_pho_p4;   //!
  TBranch        *b_pho_calopos;   //!
  TBranch        *b_pho_barrel;   //!
  TBranch        *b_pho_scind;   //!
  TBranch        *b_pho_haspixseed;   //!
  TBranch        *b_pho_hasconvtks;   //!
  TBranch        *b_pho_nconv;   //!
  TBranch        *b_pho_conv_ntracks;   //!
  TBranch        *b_pho_conv_pairinvmass;   //!
  TBranch        *b_pho_conv_paircotthetasep;   //!
  TBranch        *b_pho_conv_eoverp;   //!
  TBranch        *b_pho_conv_zofprimvtxfromtrks;   //!
  TBranch        *b_pho_conv_distofminapproach;   //!
  TBranch        *b_pho_conv_dphitrksatvtx;   //!
  TBranch        *b_pho_conv_dphitrksatecal;   //!
  TBranch        *b_pho_conv_detatrksatecal;   //!
  TBranch        *b_pho_conv_tk1_d0;   //!
  TBranch        *b_pho_conv_tk1_pout;   //!
  TBranch        *b_pho_conv_tk1_pin;   //!
  TBranch        *b_pho_conv_tk2_d0;   //!
  TBranch        *b_pho_conv_tk2_pout;   //!
  TBranch        *b_pho_conv_tk2_pin;   //!
  TBranch        *b_pho_conv_tk1_dz;   //!
  TBranch        *b_pho_conv_tk2_dz;   //!
  TBranch        *b_pho_conv_tk1_dzerr;   //!
  TBranch        *b_pho_conv_tk2_dzerr;   //!
  TBranch        *b_pho_conv_tk1_nh;   //!
  TBranch        *b_pho_conv_tk2_nh;   //!
  TBranch        *b_pho_conv_chi2;   //!
  TBranch        *b_pho_conv_chi2_probability;   //!
  TBranch        *b_pho_conv_ch1ch2;   //!
  TBranch        *b_pho_conv_validvtx;   //!
  TBranch        *b_pho_conv_MVALikelihood;   //!
  TBranch        *b_pho_conv_vtx;   //!
  TBranch        *b_pho_conv_pair_momentum;   //!
  TBranch        *b_pho_conv_refitted_momentum;   //!
  TBranch        *b_pho_conv_vertexcorrected_p4;   //!
  TBranch        *b_ecalhit_n;   //!
  TBranch        *b_ecalhit_type;   //!
  TBranch        *b_ecalhit_flag;   //!
  TBranch        *b_ecalhit_time;   //!
  TBranch        *b_ecalhit_p4;   //!
  TBranch        *b_sc_islbar_n;   //!
  TBranch        *b_sc_islbar_p4;   //!
  TBranch        *b_sc_islbar_xyz;   //!
  TBranch        *b_sc_islbar_raw;   //!
  TBranch        *b_sc_islbar_nbc;   //!
  TBranch        *b_sc_islbar_seedenergy;   //!
  TBranch        *b_sc_islbar_bcseedind;   //!
  TBranch        *b_sc_islbar_bcind;   //!
  TBranch        *b_sc_n;   //!
  TBranch        *b_sc_islend_n;   //!
  TBranch        *b_sc_hybrid_n;   //!
  TBranch        *b_sc_p4;   //!
  TBranch        *b_sc_xyz;   //!
  TBranch        *b_sc_pre;   //!
  TBranch        *b_sc_raw;   //!
  TBranch        *b_sc_barrel;   //!
  TBranch        *b_sc_2xN;   //!
  TBranch        *b_sc_5xN;   //!
  TBranch        *b_sc_sieie;   //!
  TBranch        *b_sc_nbc;   //!
  TBranch        *b_sc_bcseedind;   //!
  TBranch        *b_sc_bcind;   //!
  TBranch        *b_bc_n;   //!
  TBranch        *b_bc_islbar_n;   //!
  TBranch        *b_bc_islend_n;   //!
  TBranch        *b_bc_hybrid_n;   //!
  TBranch        *b_bc_p4;   //!
  TBranch        *b_bc_xyz;   //!
  TBranch        *b_bc_nhits;   //!
  TBranch        *b_bc_s1;   //!
  TBranch        *b_bc_rook;   //!
  TBranch        *b_bc_s4;   //!
  TBranch        *b_bc_s9;   //!
  TBranch        *b_bc_s25;   //!
  TBranch        *b_bc_spp;   //!
  TBranch        *b_bc_see;   //!
  TBranch        *b_bc_sep;   //!
  TBranch        *b_bc_type;   //!
  TBranch        *b_bc_s1x5_0;   //!
  TBranch        *b_bc_s1x5_1;   //!
  TBranch        *b_bc_s1x5_2;   //!
  TBranch        *b_bc_s1x3_0;   //!
  TBranch        *b_bc_s1x3_1;   //!
  TBranch        *b_bc_s1x3_2;   //!
  TBranch        *b_bc_s3x1_0;   //!
  TBranch        *b_bc_s3x1_1;   //!
  TBranch        *b_bc_s3x1_2;   //!
  TBranch        *b_bc_s5x1_0;   //!
  TBranch        *b_bc_s5x1_1;   //!
  TBranch        *b_bc_s5x1_2;   //!
  TBranch        *b_bc_sieie;   //!
  TBranch        *b_ct_n;   //!
  TBranch        *b_ct_p4;   //!
  TBranch        *b_ct_emEnergy;   //!
  TBranch        *b_ct_hadEnergy;   //!
  TBranch        *b_ct_outerEnergy;   //!
  TBranch        *b_ct_emL1;   //!
  TBranch        *b_ct_hadL1;   //!
  TBranch        *b_ct_size;   //!
  TBranch        *b_hc_p4;   //!
  TBranch        *b_hc_n;   //!
  TBranch        *b_hc_type;   //!
  TBranch        *b_hlt1_bit_1;   //!
  TBranch        *b_hlt1_bit_2;   //!
  TBranch        *b_hlt1_bit_3;   //!
  TBranch        *b_hlt1_bit_4;   //!
  TBranch        *b_hlt_path_names_HLT1_1;   //!
  TBranch        *b_hlt_path_names_HLT1_2;   //!
  TBranch        *b_hlt_path_names_HLT1_3;   //!
  TBranch        *b_hlt_path_names_HLT1_4;   //!
  TBranch        *b_hlt_n;   //!
  TBranch        *b_hlt_p4;   //!
  TBranch        *b_hlt_candpath_1;   //!
  TBranch        *b_hlt_candpath_2;   //!
  TBranch        *b_hlt_candpath_3;   //!
  TBranch        *b_hlt_candpath_4;   //!
  TBranch        *b_hlt_id;   //!
  TBranch        *b_hlt_el_offlineind;   //!
  TBranch        *b_hlt_ph_offlineind;   //!
  TBranch        *b_hlt_mu_offlineind;   //!
  TBranch        *b_hlt_jet_offlineind;   //!
  TBranch        *b_hlt_label_names_1;   //!
  TBranch        *b_hlt_label_names_2;   //!
  TBranch        *b_hlt_label_names_3;   //!
  TBranch        *b_hlt_label_names_4;   //!
  TBranch        *b_vtx_std_n;   //!
  TBranch        *b_vtx_std_xyz;   //!
  TBranch        *b_vtx_std_dxdydz;   //!
  TBranch        *b_vtx_std_vectorp3;   //!
  TBranch        *b_vtx_std_x2dof;   //!
  TBranch        *b_vtx_std_ndof;   //!
  TBranch        *b_vtx_std_scalarpt;   //!
  TBranch        *b_vtx_std_ntks;   //!
  TBranch        *b_vtx_std_tkind;   //!
  TBranch        *b_vtx_std_tkweight;   //!
  TBranch        *b_vtx_pix_n;   //!
  TBranch        *b_vtx_pix_xyz;   //!
  TBranch        *b_vtx_pix_dxdydz;   //!
  TBranch        *b_vtx_pix_vectorp3;   //!
  TBranch        *b_vtx_pix_x2dof;   //!
  TBranch        *b_vtx_pix_ndof;   //!
  TBranch        *b_vtx_pix_scalarpt;   //!
  TBranch        *b_vtx_pix_ntks;   //!
  TBranch        *b_vtx_pix_tkind;   //!
  TBranch        *b_vtx_pix_tkweight;   //!
  TBranch        *b_vtxcomp_n;   //!
  TBranch        *b_vtxcomp_lepn;   //!
  TBranch        *b_vtxcomp_pdgid;   //!
  TBranch        *b_vtxcomp_lepind;   //!
  TBranch        *b_vtxcomp_klmn_isvalid;   //!
  TBranch        *b_vtxcomp_klmn_x2dof;   //!
  TBranch        *b_vtxcomp_klmn_ndof;   //!
  TBranch        *b_vtxcomp_klmn_x2prob;   //!
  TBranch        *b_vtxcomp_klmn_tk_chi2;   //!
  TBranch        *b_met_met;   //!
  TBranch        *b_met_phi;   //!
  TBranch        *b_met_met_nocalo;   //!
  TBranch        *b_met_phi_nocalo;   //!
  TBranch        *b_met_met_crossed;   //!
  TBranch        *b_met_phi_crossed;   //!
  TBranch        *b_met_met_s9;   //!
  TBranch        *b_met_phi_s9;   //!
  TBranch        *b_met_met_mip;   //!
  TBranch        *b_met_phi_mip;   //!
  TBranch        *b_met_met_jet;   //!
  TBranch        *b_met_phi_jet;   //!
  TBranch        *b_met_tcmet;   //!
  TBranch        *b_met_phi_tcmet;   //!
  TBranch        *b_met_pfmet;   //!
  TBranch        *b_met_phi_pfmet;   //!
  TBranch        *b_simtrk_n;   //!
  TBranch        *b_simtrk_p4;   //!
  TBranch        *b_simtrk_vtx;   //!
  TBranch        *b_simtrk_pdgid;   //!
  TBranch        *b_simtrk_trkid;   //!
  TBranch        *b_simtrk_mothertrkid;   //!
  TBranch        *b_simvtx;   //!
  TBranch        *b_tk_n;   //!
  TBranch        *b_tk_p4;   //!
  TBranch        *b_tk_vtx_pos;   //!
  TBranch        *b_tk_nhits;   //!
  TBranch        *b_tk_charge;   //!
  TBranch        *b_tk_nlosthit;   //!
  TBranch        *b_tk_tpind;   //!
  TBranch        *b_tk_chi2;   //!
  TBranch        *b_tk_dof;   //!
  TBranch        *b_tk_d0;   //!
  TBranch        *b_tk_dz;   //!
  TBranch        *b_tk_qoverperr;   //!
  TBranch        *b_tk_pterr;   //!
  TBranch        *b_tk_etaerr;   //!
  TBranch        *b_tk_phierr;   //!
  TBranch        *b_tk_d0err;   //!
  TBranch        *b_tk_dzerr;   //!
  TBranch        *b_tk_hp_nvalid;   //!
  TBranch        *b_tk_hp_nlost;   //!
  TBranch        *b_tk_hp_nvalidpix;   //!
  TBranch        *b_tk_hp_expin;   //!
  TBranch        *b_tk_hp_expout;   //!
  TBranch        *b_tk_quality;   //!
  TBranch        *b_tk_algo;   //!
  TBranch        *b_gsf_tk_n;   //!
  TBranch        *b_gsf_tk_p4;   //!
  TBranch        *b_gsf_tk_vtx_pos;   //!
  TBranch        *b_gsf_tk_nhits;   //!
  TBranch        *b_gsf_tk_charge;   //!
  TBranch        *b_gsf_tk_nlosthit;   //!
  TBranch        *b_gsf_tk_tpind;   //!
  TBranch        *b_gsf_tk_chi2;   //!
  TBranch        *b_gsf_tk_dof;   //!
  TBranch        *b_gsf_tk_d0;   //!
  TBranch        *b_gsf_tk_dz;   //!
  TBranch        *b_gsf_tk_qoverpinerr;   //!
  TBranch        *b_gsf_tk_qoverpouterr;   //!
  TBranch        *b_gsf_tk_pterr;   //!
  TBranch        *b_gsf_tk_etaerr;   //!
  TBranch        *b_gsf_tk_phierr;   //!
  TBranch        *b_gsf_tk_d0err;   //!
  TBranch        *b_gsf_tk_dzerr;   //!
  TBranch        *b_gsf_tk_hp_nvalid;   //!
  TBranch        *b_gsf_tk_hp_nlost;   //!
  TBranch        *b_gsf_tk_hp_nvalidpix;   //!
  TBranch        *b_gsf_tk_hp_expin;   //!
  TBranch        *b_gsf_tk_hp_expout;   //!
  TBranch        *b_gsf_tk_pin;   //!
  TBranch        *b_gsf_tk_pout;   //!
  TBranch        *b_gsf_tk_fbrem;   //!
  TBranch        *b_gsf_tk_quality;   //!
  TBranch        *b_gsf_tk_algo;   //!
  TBranch        *b_gsf_tk_tkind;   //!
  TBranch        *b_el_std_n;   //!
  TBranch        *b_el_std_sc;   //!
  TBranch        *b_el_std_p4;   //!
  TBranch        *b_el_std_momvtx;   //!
  TBranch        *b_el_std_momvtxconst;   //!
  TBranch        *b_el_std_momcalo;   //!
  TBranch        *b_el_std_posvtx;   //!
  TBranch        *b_el_std_poscalo;   //!
  TBranch        *b_el_std_crack;   //!
  TBranch        *b_el_std_eopin;   //!
  TBranch        *b_el_std_eseedopout;   //!
  TBranch        *b_el_std_pout;   //!
  TBranch        *b_el_std_pin;   //!
  TBranch        *b_el_std_e1x5;   //!
  TBranch        *b_el_std_e5x5;   //!
  TBranch        *b_el_std_e2x5;   //!
  TBranch        *b_el_std_spp;   //!
  TBranch        *b_el_std_see;   //!
  TBranch        *b_el_std_sieie;   //!
  TBranch        *b_el_std_sieiesc;   //!
  TBranch        *b_el_std_eseed;   //!
  TBranch        *b_el_std_enearbcopin;   //!
  TBranch        *b_el_std_eseedopin;   //!
  TBranch        *b_el_std_fbrem;   //!
  TBranch        *b_el_std_nbrem;   //!
  TBranch        *b_el_std_hoe;   //!
  TBranch        *b_el_std_hoed1;   //!
  TBranch        *b_el_std_hoed2;   //!
  TBranch        *b_el_std_detain;   //!
  TBranch        *b_el_std_dphiin;   //!
  TBranch        *b_el_std_detaout;   //!
  TBranch        *b_el_std_dphiout;   //!
  TBranch        *b_el_std_class;   //!
  TBranch        *b_el_std_nambtk;   //!
  TBranch        *b_el_std_scind;   //!
  TBranch        *b_el_std_z0;   //!
  TBranch        *b_el_std_d0;   //!
  TBranch        *b_el_std_qoverperr;   //!
  TBranch        *b_el_std_pterr;   //!
  TBranch        *b_el_std_etaerr;   //!
  TBranch        *b_el_std_phierr;   //!
  TBranch        *b_el_std_z0err;   //!
  TBranch        *b_el_std_d0err;   //!
  TBranch        *b_el_std_chi2;   //!
  TBranch        *b_el_std_dof;   //!
  TBranch        *b_el_std_mva;   //!
  TBranch        *b_el_std_ch_gsf;   //!
  TBranch        *b_el_std_ch_scpix;   //!
  TBranch        *b_el_std_charge;   //!
  TBranch        *b_el_std_losthits;   //!
  TBranch        *b_el_std_validhits;   //!
  TBranch        *b_el_std_hp_expin;   //!
  TBranch        *b_el_std_hp_expout;   //!
  TBranch        *b_el_std_rohighe;   //!
  TBranch        *b_el_std_roloose;   //!
  TBranch        *b_el_std_rotight;   //!
  TBranch        *b_el_std_loose;   //!
  TBranch        *b_el_std_tight;   //!
  TBranch        *b_el_std_tkind;   //!
  TBranch        *b_el_std_hcaliso03;   //!
  TBranch        *b_el_std_ecaliso03;   //!
  TBranch        *b_el_std_tkiso03;   //!
  TBranch        *b_el_std_hcaliso04;   //!
  TBranch        *b_el_std_ecaliso04;   //!
  TBranch        *b_el_std_tkiso04;   //!
  TBranch        *b_el_std_3dip_valid;   //!
  TBranch        *b_el_std_tkdrv;   //!
  TBranch        *b_el_std_ecaldrv;   //!
  TBranch        *b_el_std_ip_ctf;   //!
  TBranch        *b_el_std_ip_gsf;   //!
  TBranch        *b_mu_glo_n;   //!
  TBranch        *b_mu_glo_p4;   //!
  TBranch        *b_mu_glo_momvtx;   //!
  TBranch        *b_mu_glo_posvtx;   //!
  TBranch        *b_mu_glo_posecal;   //!
  TBranch        *b_mu_glo_poshcal;   //!
  TBranch        *b_mu_glo_nmatches;   //!
  TBranch        *b_mu_glo_em;   //!
  TBranch        *b_mu_glo_had;   //!
  TBranch        *b_mu_glo_ho;   //!
  TBranch        *b_mu_glo_emS9;   //!
  TBranch        *b_mu_glo_hadS9;   //!
  TBranch        *b_mu_glo_hoS9;   //!
  TBranch        *b_mu_glo_chi2;   //!
  TBranch        *b_mu_glo_dof;   //!
  TBranch        *b_mu_glo_tkind;   //!
  TBranch        *b_mu_glo_staind;   //!
  TBranch        *b_mu_glo_z0;   //!
  TBranch        *b_mu_glo_d0;   //!
  TBranch        *b_mu_glo_z0err;   //!
  TBranch        *b_mu_glo_d0err;   //!
  TBranch        *b_mu_glo_charge;   //!
  TBranch        *b_mu_glo_losthits;   //!
  TBranch        *b_mu_glo_validhits;   //!
  TBranch        *b_mu_glo_type;   //!
  TBranch        *b_mu_glo_iso;   //!
  TBranch        *b_mu_glo_3dip_valid;   //!
  TBranch        *b_jet_it5_n;   //!
  TBranch        *b_jet_it5_p4;   //!
  TBranch        *b_jet_it5_emfrac;   //!
  TBranch        *b_jet_it5_hadfrac;   //!
  TBranch        *b_jet_it5_ntk;   //!
  TBranch        *b_jet_it5_tkind;   //!
  TBranch        *b_jet_it5_ncalotw;   //!
  TBranch        *b_jet_it5_calotwind;   //!
  TBranch        *b_jet_it7_n;   //!
  TBranch        *b_jet_it7_p4;   //!
  TBranch        *b_jet_it7_emfrac;   //!
  TBranch        *b_jet_it7_hadfrac;   //!
  TBranch        *b_jet_it7_ntk;   //!
  TBranch        *b_jet_it7_tkind;   //!
  TBranch        *b_jet_it7_ncalotw;   //!
  TBranch        *b_jet_it7_calotwind;   //!
  TBranch        *b_jet_mid_n;   //!
  TBranch        *b_jet_mid_p4;   //!
  TBranch        *b_jet_mid_emfrac;   //!
  TBranch        *b_jet_mid_hadfrac;   //!
  TBranch        *b_jet_mid_ntk;   //!
  TBranch        *b_jet_mid_tkind;   //!
  TBranch        *b_jet_mid_ncalotw;   //!
  TBranch        *b_jet_mid_calotwind;   //!
  TBranch        *b_jet_it5pf_n;   //!
  TBranch        *b_jet_it5pf_p4;   //!
  TBranch        *b_jet_it5pf_emfrac;   //!
  TBranch        *b_jet_it5pf_hadfrac;   //!
  TBranch        *b_jet_it5pf_ntk;   //!
  TBranch        *b_jet_it5pf_tkind;   //!
  TBranch        *b_jet_it5pf_ncalotw;   //!
  TBranch        *b_jet_it5pf_calotwind;   //!
  TBranch        *b_jet_sis5pf_n;   //!
  TBranch        *b_jet_sis5pf_p4;   //!
  TBranch        *b_jet_sis5pf_emfrac;   //!
  TBranch        *b_jet_sis5pf_hadfrac;   //!
  TBranch        *b_jet_sis5pf_ntk;   //!
  TBranch        *b_jet_sis5pf_tkind;   //!
  TBranch        *b_jet_sis5pf_ncalotw;   //!
  TBranch        *b_jet_sis5pf_calotwind;   //!
  TBranch        *b_jet_kt4pf_n;   //!
  TBranch        *b_jet_kt4pf_p4;   //!
  TBranch        *b_jet_kt4pf_emfrac;   //!
  TBranch        *b_jet_kt4pf_hadfrac;   //!
  TBranch        *b_jet_kt4pf_ntk;   //!
  TBranch        *b_jet_kt4pf_tkind;   //!
  TBranch        *b_jet_kt4pf_ncalotw;   //!
  TBranch        *b_jet_kt4pf_calotwind;   //!
  TBranch        *b_gp_n;   //!
  TBranch        *b_gp_p4;   //!
  TBranch        *b_gp_vtx;   //!
  TBranch        *b_gp_status;   //!
  TBranch        *b_gp_pdgid;   //!
  TBranch        *b_gp_mother;   //!
  TBranch        *b_genjet_it5_n;   //!
  TBranch        *b_genjet_it5_p4;   //!
  TBranch        *b_genjet_it5_em;   //!
  TBranch        *b_genjet_it5_had;   //!
  TBranch        *b_genjet_it5_inv;   //!
  TBranch        *b_genjet_it5_aux;   //!
  TBranch        *b_genjet_it7_n;   //!
  TBranch        *b_genjet_it7_p4;   //!
  TBranch        *b_genjet_it7_em;   //!
  TBranch        *b_genjet_it7_had;   //!
  TBranch        *b_genjet_it7_inv;   //!
  TBranch        *b_genjet_it7_aux;   //!
  TBranch        *b_genjet_mid_n;   //!
  TBranch        *b_genjet_mid_p4;   //!
  TBranch        *b_genjet_mid_em;   //!
  TBranch        *b_genjet_mid_had;   //!
  TBranch        *b_genjet_mid_inv;   //!
  TBranch        *b_genjet_mid_aux;   //!
  TBranch        *b_lpt_n;   //!
  TBranch        *b_lpt_emu_n;   //!
  TBranch        *b_lpt_mu_n;   //!
  TBranch        *b_lpt_el_n;   //!
  TBranch        *b_lpt_pho_n;   //!
  TBranch        *b_lpt_pdgid;   //!
  TBranch        *b_lpt_ind;   //!
  TBranch        *b_lpt_duplicate;   //!
  TBranch        *b_lpt_p4;   //!
  TBranch        *b_lpt_indgen;   //!
  TBranch        *b_lpt_drmatch;   //!
  TBranch        *b_ht_25;   //!
  TBranch        *b_ht_35;   //!
  TBranch        *b_ht_50;   //!
  TBranch        *b_ht_nomet25;   //!
  TBranch        *b_ht_nomet35;   //!
  TBranch        *b_ht_nomet50;   //!
  TBranch        *b_ht_trk;   //!
  TBranch        *b_ht_trkvec;   //!
  TBranch        *b_ht_2lpt_n;   //!
  TBranch        *b_ht_2lpt_inds;   //!
  TBranch        *b_ht_4lpt_n;   //!
  TBranch        *b_ht_4lpt_inds;   //!
  TBranch        *b_ht_2lpt25;   //!
  TBranch        *b_ht_2lpt35;   //!
  TBranch        *b_ht_2lpt50;   //!
  TBranch        *b_ht_4lpt25;   //!
  TBranch        *b_ht_4lpt35;   //!
  TBranch        *b_ht_4lpt50;   //!
  TBranch        *b_lptgeninfo_n;   //!
  TBranch        *b_lptgen_n;   //!
  TBranch        *b_lptgeninfo_p4;   //!
  TBranch        *b_lptgen_p4;   //!
  TBranch        *b_lptgen_befrad_p4;   //!
  TBranch        *b_lptgeninfo_status;   //!
  TBranch        *b_lptgeninfo_pdgid;   //!
  TBranch        *b_lptgeninfo_mother;   //!
  TBranch        *b_lptgen_status;   //!
  TBranch        *b_lptgen_pdgid;   //!
  TBranch        *b_lptgen_mother;   //!
  TBranch        *b_lptgen_motherpdgid;   //!
  TBranch        *b_lptgen_indrec;   //!
  TBranch        *b_lptgen_indrecel;   //!
  TBranch        *b_lptgen_indrecph;   //!
  TBranch        *b_lptgen_indrecmu;   //!
  TBranch        *b_lptgen_drmatch;   //!
  TBranch        *b_lptgen_drmatchel;   //!
  TBranch        *b_lptgen_drmatchmu;   //!
  TBranch        *b_lptgen_drmatchph;   //!
  TBranch        *b_lptgen_indinfo;   //!
  TBranch        *b_lptgen_historycode;   //!
  TBranch        *b_selector_bits;   //!
  
  sdaReader(TFile *currentFile=0);
  virtual ~sdaReader();
  virtual Int_t    GetEntry(Long64_t entry);
  virtual void     Init(TFile *currentFile);
  virtual Bool_t   Notify();
};

sdaReader::sdaReader(TFile *currentFile)
{
  if (currentFile == 0) cout << "Warning!!!!! Analysis tree is emtpy!!!!!" << endl;
  Init(currentFile);
}

sdaReader::~sdaReader()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t sdaReader::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}

void sdaReader::Init(TFile *currentFile)
{
  currentFile->cd();
  TTree * tree = (TTree *) currentFile->Get("event");
  
  // Set object pointer
  pho_p4 = 0;
  pho_calopos = 0;
  pho_conv_vtx = 0;
  pho_conv_pair_momentum = 0;
  pho_conv_refitted_momentum = 0;
  pho_conv_vertexcorrected_p4 = 0;
  ecalhit_p4 = 0;
  sc_islbar_p4 = 0;
  sc_islbar_xyz = 0;
  sc_p4 = 0;
  sc_xyz = 0;
  bc_p4 = 0;
  bc_xyz = 0;
  ct_p4 = 0;
  hc_p4 = 0;
  hlt_path_names_HLT1_1 = 0;
  hlt_path_names_HLT1_2 = 0;
  hlt_path_names_HLT1_3 = 0;
  hlt_path_names_HLT1_4 = 0;
  hlt_p4 = 0;
  hlt_label_names_1 = 0;
  hlt_label_names_2 = 0;
  hlt_label_names_3 = 0;
  hlt_label_names_4 = 0;
  vtx_std_xyz = 0;
  vtx_std_dxdydz = 0;
  vtx_std_vectorp3 = 0;
  vtx_pix_xyz = 0;
  vtx_pix_dxdydz = 0;
  vtx_pix_vectorp3 = 0;
  simtrk_p4 = 0;
  simtrk_vtx = 0;
  simvtx = 0;
  tk_p4 = 0;
  tk_vtx_pos = 0;
  gsf_tk_p4 = 0;
  gsf_tk_vtx_pos = 0;
  el_std_sc = 0;
  el_std_p4 = 0;
  el_std_momvtx = 0;
  el_std_momvtxconst = 0;
  el_std_momcalo = 0;
  el_std_posvtx = 0;
  el_std_poscalo = 0;
  mu_glo_p4 = 0;
  mu_glo_momvtx = 0;
  mu_glo_posvtx = 0;
  mu_glo_posecal = 0;
  mu_glo_poshcal = 0;
  jet_it5_p4 = 0;
  jet_it7_p4 = 0;
  jet_mid_p4 = 0;
  jet_it5pf_p4 = 0;
  jet_sis5pf_p4 = 0;
  jet_kt4pf_p4 = 0;
  gp_p4 = 0;
  gp_vtx = 0;
  genjet_it5_p4 = 0;
  genjet_it7_p4 = 0;
  genjet_mid_p4 = 0;
  lpt_p4 = 0;
  ht_trkvec = 0;
  lptgeninfo_p4 = 0;
  lptgen_p4 = 0;
  lptgen_befrad_p4 = 0;

  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

  fChain->SetBranchAddress("event", &event, &b_event);
  fChain->SetBranchAddress("run", &run, &b_run);
  fChain->SetBranchAddress("process_id", &process_id, &b_process_id);
  fChain->SetBranchAddress("lumis", &lumis, &b_lumis);
  fChain->SetBranchAddress("bx", &bx, &b_bx);
  fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
  fChain->SetBranchAddress("weight", &weight, &b_weight);
  fChain->SetBranchAddress("pho_n", &pho_n, &b_pho_n);
  fChain->SetBranchAddress("pho_isEB", pho_isEB, &b_pho_isEB);
  fChain->SetBranchAddress("pho_isEE", pho_isEE, &b_pho_isEE);
  fChain->SetBranchAddress("pho_isEBGap", pho_isEBGap, &b_pho_isEBGap);
  fChain->SetBranchAddress("pho_isEEGap", pho_isEEGap, &b_pho_isEEGap);
  fChain->SetBranchAddress("pho_isEBEEGap", pho_isEBEEGap, &b_pho_isEBEEGap);
  fChain->SetBranchAddress("pho_see", pho_see, &b_pho_see);
  fChain->SetBranchAddress("pho_sieie", pho_sieie, &b_pho_sieie);
  fChain->SetBranchAddress("pho_e1x5", pho_e1x5, &b_pho_e1x5);
  fChain->SetBranchAddress("pho_e2x5", pho_e2x5, &b_pho_e2x5);
  fChain->SetBranchAddress("pho_e3x3", pho_e3x3, &b_pho_e3x3);
  fChain->SetBranchAddress("pho_e5x5", pho_e5x5, &b_pho_e5x5);
  fChain->SetBranchAddress("pho_emaxxtal", pho_emaxxtal, &b_pho_emaxxtal);
  fChain->SetBranchAddress("pho_genmatcheddr", pho_genmatcheddr, &b_pho_genmatchedptres);
  fChain->SetBranchAddress("pho_genmatchedptres", pho_genmatchedptres, &b_pho_genmatchedptres);
  fChain->SetBranchAddress("pho_hoe", pho_hoe, &b_pho_hoe);
  fChain->SetBranchAddress("pho_h1oe", pho_h1oe, &b_pho_h1oe);
  fChain->SetBranchAddress("pho_h2oe", pho_h2oe, &b_pho_h2oe);
  fChain->SetBranchAddress("pho_r1x5", pho_r1x5, &b_pho_r1x5);
  fChain->SetBranchAddress("pho_r2x5", pho_r2x5, &b_pho_r2x5);
  fChain->SetBranchAddress("pho_r9", pho_r9, &b_pho_r9);
  fChain->SetBranchAddress("pho_ecalsumetconedr04", pho_ecalsumetconedr04, &b_pho_ecalsumetconedr04);
  fChain->SetBranchAddress("pho_hcalsumetconedr04", pho_hcalsumetconedr04, &b_pho_hcalsumetconedr04);
  fChain->SetBranchAddress("pho_hcal1sumetconedr04", pho_hcal1sumetconedr04, &b_pho_hcal1sumetconedr04);
  fChain->SetBranchAddress("pho_hcal2sumetconedr04", pho_hcal2sumetconedr04, &b_pho_hcal2sumetconedr04);
  fChain->SetBranchAddress("pho_trksumptsolidconedr04", pho_trksumptsolidconedr04, &b_pho_trksumptsolidconedr04);
  fChain->SetBranchAddress("pho_trksumpthollowconedr04", pho_trksumpthollowconedr04, &b_pho_trksumpthollowconedr04);
  fChain->SetBranchAddress("pho_ntrksolidconedr04", pho_ntrksolidconedr04, &b_pho_ntrksolidconedr04);
  fChain->SetBranchAddress("pho_ntrkhollowconedr04", pho_ntrkhollowconedr04, &b_pho_ntrkhollowconedr04);
  fChain->SetBranchAddress("pho_ecalsumetconedr03", pho_ecalsumetconedr03, &b_pho_ecalsumetconedr03);
  fChain->SetBranchAddress("pho_hcalsumetconedr03", pho_hcalsumetconedr03, &b_pho_hcalsumetconedr03);
  fChain->SetBranchAddress("pho_hcal1sumetconedr03", pho_hcal1sumetconedr03, &b_pho_hcal1sumetconedr03);
  fChain->SetBranchAddress("pho_hcal2sumetconedr03", pho_hcal2sumetconedr03, &b_pho_hcal2sumetconedr03);
  fChain->SetBranchAddress("pho_trksumptsolidconedr03", pho_trksumptsolidconedr03, &b_pho_trksumptsolidconedr03);
  fChain->SetBranchAddress("pho_trksumpthollowconedr03", pho_trksumpthollowconedr03, &b_pho_trksumpthollowconedr03);
  fChain->SetBranchAddress("pho_ntrksolidconedr03", pho_ntrksolidconedr03, &b_pho_ntrksolidconedr03);
  fChain->SetBranchAddress("pho_ntrkhollowconedr03", pho_ntrkhollowconedr03, &b_pho_ntrkhollowconedr03);
  fChain->SetBranchAddress("pho_p4", &pho_p4, &b_pho_p4);
  fChain->SetBranchAddress("pho_calopos", &pho_calopos, &b_pho_calopos);
  fChain->SetBranchAddress("pho_barrel", pho_barrel, &b_pho_barrel);
  fChain->SetBranchAddress("pho_scind", pho_scind, &b_pho_scind);
  fChain->SetBranchAddress("pho_haspixseed", pho_haspixseed, &b_pho_haspixseed);
  fChain->SetBranchAddress("pho_hasconvtks", pho_hasconvtks, &b_pho_hasconvtks);
  fChain->SetBranchAddress("pho_nconv", pho_nconv, &b_pho_nconv);
  fChain->SetBranchAddress("pho_conv_ntracks", pho_conv_ntracks, &b_pho_conv_ntracks);
  fChain->SetBranchAddress("pho_conv_pairinvmass", pho_conv_pairinvmass, &b_pho_conv_pairinvmass);
  fChain->SetBranchAddress("pho_conv_paircotthetasep", pho_conv_paircotthetasep, &b_pho_conv_paircotthetasep);
  fChain->SetBranchAddress("pho_conv_eoverp", pho_conv_eoverp, &b_pho_conv_eoverp);
  fChain->SetBranchAddress("pho_conv_zofprimvtxfromtrks", pho_conv_zofprimvtxfromtrks, &b_pho_conv_zofprimvtxfromtrks);
  fChain->SetBranchAddress("pho_conv_distofminapproach", pho_conv_distofminapproach, &b_pho_conv_distofminapproach);
  fChain->SetBranchAddress("pho_conv_dphitrksatvtx", pho_conv_dphitrksatvtx, &b_pho_conv_dphitrksatvtx);
  fChain->SetBranchAddress("pho_conv_dphitrksatecal", pho_conv_dphitrksatecal, &b_pho_conv_dphitrksatecal);
  fChain->SetBranchAddress("pho_conv_detatrksatecal", pho_conv_detatrksatecal, &b_pho_conv_detatrksatecal);
  fChain->SetBranchAddress("pho_conv_tk1_d0", pho_conv_tk1_d0, &b_pho_conv_tk1_d0);
  fChain->SetBranchAddress("pho_conv_tk1_pout", pho_conv_tk1_pout, &b_pho_conv_tk1_pout);
  fChain->SetBranchAddress("pho_conv_tk1_pin", pho_conv_tk1_pin, &b_pho_conv_tk1_pin);
  fChain->SetBranchAddress("pho_conv_tk2_d0", pho_conv_tk2_d0, &b_pho_conv_tk2_d0);
  fChain->SetBranchAddress("pho_conv_tk2_pout", pho_conv_tk2_pout, &b_pho_conv_tk2_pout);
  fChain->SetBranchAddress("pho_conv_tk2_pin", pho_conv_tk2_pin, &b_pho_conv_tk2_pin);
  fChain->SetBranchAddress("pho_conv_tk1_dz", pho_conv_tk1_dz, &b_pho_conv_tk1_dz);
  fChain->SetBranchAddress("pho_conv_tk2_dz", pho_conv_tk2_dz, &b_pho_conv_tk2_dz);
  fChain->SetBranchAddress("pho_conv_tk1_dzerr", pho_conv_tk1_dzerr, &b_pho_conv_tk1_dzerr);
  fChain->SetBranchAddress("pho_conv_tk2_dzerr", pho_conv_tk2_dzerr, &b_pho_conv_tk2_dzerr);
  fChain->SetBranchAddress("pho_conv_tk1_nh", pho_conv_tk1_nh, &b_pho_conv_tk1_nh);
  fChain->SetBranchAddress("pho_conv_tk2_nh", pho_conv_tk2_nh, &b_pho_conv_tk2_nh);
  fChain->SetBranchAddress("pho_conv_chi2", pho_conv_chi2, &b_pho_conv_chi2);
  fChain->SetBranchAddress("pho_conv_chi2_probability", pho_conv_chi2_probability, &b_pho_conv_chi2_probability);
  fChain->SetBranchAddress("pho_conv_ch1ch2", pho_conv_ch1ch2, &b_pho_conv_ch1ch2);
  fChain->SetBranchAddress("pho_conv_validvtx", pho_conv_validvtx, &b_pho_conv_validvtx);
  fChain->SetBranchAddress("pho_conv_MVALikelihood", pho_conv_MVALikelihood, &b_pho_conv_MVALikelihood);
  fChain->SetBranchAddress("pho_conv_vtx", &pho_conv_vtx, &b_pho_conv_vtx);
  fChain->SetBranchAddress("pho_conv_pair_momentum", &pho_conv_pair_momentum, &b_pho_conv_pair_momentum);
  fChain->SetBranchAddress("pho_conv_refitted_momentum", &pho_conv_refitted_momentum, &b_pho_conv_refitted_momentum);
  fChain->SetBranchAddress("pho_conv_vertexcorrected_p4", &pho_conv_vertexcorrected_p4, &b_pho_conv_vertexcorrected_p4);
  fChain->SetBranchAddress("ecalhit_n", &ecalhit_n, &b_ecalhit_n);
  fChain->SetBranchAddress("ecalhit_type", ecalhit_type, &b_ecalhit_type);
  fChain->SetBranchAddress("ecalhit_flag", ecalhit_flag, &b_ecalhit_flag);
  fChain->SetBranchAddress("ecalhit_time", ecalhit_time, &b_ecalhit_time);
  fChain->SetBranchAddress("ecalhit_p4", &ecalhit_p4, &b_ecalhit_p4);
  fChain->SetBranchAddress("sc_islbar_n", &sc_islbar_n, &b_sc_islbar_n);
  fChain->SetBranchAddress("sc_islbar_p4", &sc_islbar_p4, &b_sc_islbar_p4);
  fChain->SetBranchAddress("sc_islbar_xyz", &sc_islbar_xyz, &b_sc_islbar_xyz);
  fChain->SetBranchAddress("sc_islbar_raw", &sc_islbar_raw, &b_sc_islbar_raw);
  fChain->SetBranchAddress("sc_islbar_nbc", &sc_islbar_nbc, &b_sc_islbar_nbc);
  fChain->SetBranchAddress("sc_islbar_seedenergy", &sc_islbar_seedenergy, &b_sc_islbar_seedenergy);
  fChain->SetBranchAddress("sc_islbar_bcseedind", &sc_islbar_bcseedind, &b_sc_islbar_bcseedind);
  fChain->SetBranchAddress("sc_islbar_bcind", &sc_islbar_bcind, &b_sc_islbar_bcind);
  fChain->SetBranchAddress("sc_n", &sc_n, &b_sc_n);
  fChain->SetBranchAddress("sc_islend_n", &sc_islend_n, &b_sc_islend_n);
  fChain->SetBranchAddress("sc_hybrid_n", &sc_hybrid_n, &b_sc_hybrid_n);
  fChain->SetBranchAddress("sc_p4", &sc_p4, &b_sc_p4);
  fChain->SetBranchAddress("sc_xyz", &sc_xyz, &b_sc_xyz);
  fChain->SetBranchAddress("sc_pre", sc_pre, &b_sc_pre);
  fChain->SetBranchAddress("sc_raw", sc_raw, &b_sc_raw);
  fChain->SetBranchAddress("sc_barrel", sc_barrel, &b_sc_barrel);
  fChain->SetBranchAddress("sc_2xN", sc_2xN, &b_sc_2xN);
  fChain->SetBranchAddress("sc_5xN", sc_5xN, &b_sc_5xN);
  fChain->SetBranchAddress("sc_sieie", sc_sieie, &b_sc_sieie);
  fChain->SetBranchAddress("sc_nbc", sc_nbc, &b_sc_nbc);
  fChain->SetBranchAddress("sc_bcseedind", sc_bcseedind, &b_sc_bcseedind);
  fChain->SetBranchAddress("sc_bcind", sc_bcind, &b_sc_bcind);
  fChain->SetBranchAddress("bc_n", &bc_n, &b_bc_n);
  fChain->SetBranchAddress("bc_islbar_n", &bc_islbar_n, &b_bc_islbar_n);
  fChain->SetBranchAddress("bc_islend_n", &bc_islend_n, &b_bc_islend_n);
  fChain->SetBranchAddress("bc_hybrid_n", &bc_hybrid_n, &b_bc_hybrid_n);
  fChain->SetBranchAddress("bc_p4", &bc_p4, &b_bc_p4);
  fChain->SetBranchAddress("bc_xyz", &bc_xyz, &b_bc_xyz);
  fChain->SetBranchAddress("bc_nhits", bc_nhits, &b_bc_nhits);
  fChain->SetBranchAddress("bc_s1", bc_s1, &b_bc_s1);
  fChain->SetBranchAddress("bc_rook", bc_rook, &b_bc_rook);
  fChain->SetBranchAddress("bc_s4", bc_s4, &b_bc_s4);
  fChain->SetBranchAddress("bc_s9", bc_s9, &b_bc_s9);
  fChain->SetBranchAddress("bc_s25", bc_s25, &b_bc_s25);
  fChain->SetBranchAddress("bc_spp", bc_spp, &b_bc_spp);
  fChain->SetBranchAddress("bc_see", bc_see, &b_bc_see);
  fChain->SetBranchAddress("bc_sep", bc_sep, &b_bc_sep);
  fChain->SetBranchAddress("bc_type", bc_type, &b_bc_type);
  fChain->SetBranchAddress("bc_s1x5_0", bc_s1x5_0, &b_bc_s1x5_0);
  fChain->SetBranchAddress("bc_s1x5_1", bc_s1x5_1, &b_bc_s1x5_1);
  fChain->SetBranchAddress("bc_s1x5_2", bc_s1x5_2, &b_bc_s1x5_2);
  fChain->SetBranchAddress("bc_s1x3_0", bc_s1x3_0, &b_bc_s1x3_0);
  fChain->SetBranchAddress("bc_s1x3_1", bc_s1x3_1, &b_bc_s1x3_1);
  fChain->SetBranchAddress("bc_s1x3_2", bc_s1x3_2, &b_bc_s1x3_2);
  fChain->SetBranchAddress("bc_s3x1_0", bc_s3x1_0, &b_bc_s3x1_0);
  fChain->SetBranchAddress("bc_s3x1_1", bc_s3x1_1, &b_bc_s3x1_1);
  fChain->SetBranchAddress("bc_s3x1_2", bc_s3x1_2, &b_bc_s3x1_2);
  fChain->SetBranchAddress("bc_s5x1_0", bc_s5x1_0, &b_bc_s5x1_0);
  fChain->SetBranchAddress("bc_s5x1_1", bc_s5x1_1, &b_bc_s5x1_1);
  fChain->SetBranchAddress("bc_s5x1_2", bc_s5x1_2, &b_bc_s5x1_2);
  fChain->SetBranchAddress("bc_sieie", bc_sieie, &b_bc_sieie);
  fChain->SetBranchAddress("ct_n", &ct_n, &b_ct_n);
  fChain->SetBranchAddress("ct_p4", &ct_p4, &b_ct_p4);
  fChain->SetBranchAddress("ct_emEnergy", ct_emEnergy, &b_ct_emEnergy);
  fChain->SetBranchAddress("ct_hadEnergy", ct_hadEnergy, &b_ct_hadEnergy);
  fChain->SetBranchAddress("ct_outerEnergy", ct_outerEnergy, &b_ct_outerEnergy);
  fChain->SetBranchAddress("ct_emL1", ct_emL1, &b_ct_emL1);
  fChain->SetBranchAddress("ct_hadL1", ct_hadL1, &b_ct_hadL1);
  fChain->SetBranchAddress("ct_size", ct_size, &b_ct_size);
  fChain->SetBranchAddress("hc_p4", &hc_p4, &b_hc_p4);
  fChain->SetBranchAddress("hc_n", &hc_n, &b_hc_n);
  fChain->SetBranchAddress("hc_type", hc_type, &b_hc_type);
  fChain->SetBranchAddress("hlt1_bit_1", &hlt1_bit_1, &b_hlt1_bit_1);
  fChain->SetBranchAddress("hlt1_bit_2", &hlt1_bit_2, &b_hlt1_bit_2);
  fChain->SetBranchAddress("hlt1_bit_3", &hlt1_bit_3, &b_hlt1_bit_3);
  fChain->SetBranchAddress("hlt1_bit_4", &hlt1_bit_4, &b_hlt1_bit_4);
  fChain->SetBranchAddress("hlt_path_names_HLT1_1", &hlt_path_names_HLT1_1, &b_hlt_path_names_HLT1_1);
  fChain->SetBranchAddress("hlt_path_names_HLT1_2", &hlt_path_names_HLT1_2, &b_hlt_path_names_HLT1_2);
  fChain->SetBranchAddress("hlt_path_names_HLT1_3", &hlt_path_names_HLT1_3, &b_hlt_path_names_HLT1_3);
  fChain->SetBranchAddress("hlt_path_names_HLT1_4", &hlt_path_names_HLT1_4, &b_hlt_path_names_HLT1_4);
  fChain->SetBranchAddress("hlt_n", &hlt_n, &b_hlt_n);
  fChain->SetBranchAddress("hlt_p4", &hlt_p4, &b_hlt_p4);
  fChain->SetBranchAddress("hlt_candpath_1", hlt_candpath_1, &b_hlt_candpath_1);
  fChain->SetBranchAddress("hlt_candpath_2", hlt_candpath_2, &b_hlt_candpath_2);
  fChain->SetBranchAddress("hlt_candpath_3", hlt_candpath_3, &b_hlt_candpath_3);
  fChain->SetBranchAddress("hlt_candpath_4", hlt_candpath_4, &b_hlt_candpath_4);
  fChain->SetBranchAddress("hlt_id", hlt_id, &b_hlt_id);
  fChain->SetBranchAddress("hlt_el_offlineind", hlt_el_offlineind, &b_hlt_el_offlineind);
  fChain->SetBranchAddress("hlt_ph_offlineind", hlt_ph_offlineind, &b_hlt_ph_offlineind);
  fChain->SetBranchAddress("hlt_mu_offlineind", hlt_mu_offlineind, &b_hlt_mu_offlineind);
  fChain->SetBranchAddress("hlt_jet_offlineind", hlt_jet_offlineind, &b_hlt_jet_offlineind);
  fChain->SetBranchAddress("hlt_label_names_1", &hlt_label_names_1, &b_hlt_label_names_1);
  fChain->SetBranchAddress("hlt_label_names_2", &hlt_label_names_2, &b_hlt_label_names_2);
  fChain->SetBranchAddress("hlt_label_names_3", &hlt_label_names_3, &b_hlt_label_names_3);
  fChain->SetBranchAddress("hlt_label_names_4", &hlt_label_names_4, &b_hlt_label_names_4);
  fChain->SetBranchAddress("vtx_std_n", &vtx_std_n, &b_vtx_std_n);
  fChain->SetBranchAddress("vtx_std_xyz", &vtx_std_xyz, &b_vtx_std_xyz);
  fChain->SetBranchAddress("vtx_std_dxdydz", &vtx_std_dxdydz, &b_vtx_std_dxdydz);
  fChain->SetBranchAddress("vtx_std_vectorp3", &vtx_std_vectorp3, &b_vtx_std_vectorp3);
  fChain->SetBranchAddress("vtx_std_x2dof", vtx_std_x2dof, &b_vtx_std_x2dof);
  fChain->SetBranchAddress("vtx_std_ndof", vtx_std_ndof, &b_vtx_std_ndof);
  fChain->SetBranchAddress("vtx_std_scalarpt", vtx_std_scalarpt, &b_vtx_std_scalarpt);
  fChain->SetBranchAddress("vtx_std_ntks", vtx_std_ntks, &b_vtx_std_ntks);
  fChain->SetBranchAddress("vtx_std_tkind", vtx_std_tkind, &b_vtx_std_tkind);
  fChain->SetBranchAddress("vtx_std_tkweight", vtx_std_tkweight, &b_vtx_std_tkweight);
  fChain->SetBranchAddress("vtx_pix_n", &vtx_pix_n, &b_vtx_pix_n);
  fChain->SetBranchAddress("vtx_pix_xyz", &vtx_pix_xyz, &b_vtx_pix_xyz);
  fChain->SetBranchAddress("vtx_pix_dxdydz", &vtx_pix_dxdydz, &b_vtx_pix_dxdydz);
  fChain->SetBranchAddress("vtx_pix_vectorp3", &vtx_pix_vectorp3, &b_vtx_pix_vectorp3);
  fChain->SetBranchAddress("vtx_pix_x2dof", vtx_pix_x2dof, &b_vtx_pix_x2dof);
  fChain->SetBranchAddress("vtx_pix_ndof", vtx_pix_ndof, &b_vtx_pix_ndof);
  fChain->SetBranchAddress("vtx_pix_scalarpt", vtx_pix_scalarpt, &b_vtx_pix_scalarpt);
  fChain->SetBranchAddress("vtx_pix_ntks", vtx_pix_ntks, &b_vtx_pix_ntks);
  fChain->SetBranchAddress("vtx_pix_tkind", vtx_pix_tkind, &b_vtx_pix_tkind);
  fChain->SetBranchAddress("vtx_pix_tkweight", vtx_pix_tkweight, &b_vtx_pix_tkweight);
  fChain->SetBranchAddress("vtxcomp_n", &vtxcomp_n, &b_vtxcomp_n);
  fChain->SetBranchAddress("vtxcomp_lepn", vtxcomp_lepn, &b_vtxcomp_lepn);
  fChain->SetBranchAddress("vtxcomp_pdgid", vtxcomp_pdgid, &b_vtxcomp_pdgid);
  fChain->SetBranchAddress("vtxcomp_lepind", vtxcomp_lepind, &b_vtxcomp_lepind);
  fChain->SetBranchAddress("vtxcomp_klmn_isvalid", vtxcomp_klmn_isvalid, &b_vtxcomp_klmn_isvalid);
  fChain->SetBranchAddress("vtxcomp_klmn_x2dof", vtxcomp_klmn_x2dof, &b_vtxcomp_klmn_x2dof);
  fChain->SetBranchAddress("vtxcomp_klmn_ndof", vtxcomp_klmn_ndof, &b_vtxcomp_klmn_ndof);
  fChain->SetBranchAddress("vtxcomp_klmn_x2prob", vtxcomp_klmn_x2prob, &b_vtxcomp_klmn_x2prob);
  fChain->SetBranchAddress("vtxcomp_klmn_tk_chi2", vtxcomp_klmn_tk_chi2, &b_vtxcomp_klmn_tk_chi2);
  fChain->SetBranchAddress("met_met", &met_met, &b_met_met);
  fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
  fChain->SetBranchAddress("met_met_nocalo", &met_met_nocalo, &b_met_met_nocalo);
  fChain->SetBranchAddress("met_phi_nocalo", &met_phi_nocalo, &b_met_phi_nocalo);
  fChain->SetBranchAddress("met_met_crossed", &met_met_crossed, &b_met_met_crossed);
  fChain->SetBranchAddress("met_phi_crossed", &met_phi_crossed, &b_met_phi_crossed);
  fChain->SetBranchAddress("met_met_s9", &met_met_s9, &b_met_met_s9);
  fChain->SetBranchAddress("met_phi_s9", &met_phi_s9, &b_met_phi_s9);
  fChain->SetBranchAddress("met_met_mip", &met_met_mip, &b_met_met_mip);
  fChain->SetBranchAddress("met_phi_mip", &met_phi_mip, &b_met_phi_mip);
  fChain->SetBranchAddress("met_met_jet", &met_met_jet, &b_met_met_jet);
  fChain->SetBranchAddress("met_phi_jet", &met_phi_jet, &b_met_phi_jet);
  fChain->SetBranchAddress("met_tcmet", &met_tcmet, &b_met_tcmet);
  fChain->SetBranchAddress("met_phi_tcmet", &met_phi_tcmet, &b_met_phi_tcmet);
  fChain->SetBranchAddress("met_pfmet", &met_pfmet, &b_met_pfmet);
  fChain->SetBranchAddress("met_phi_pfmet", &met_phi_pfmet, &b_met_phi_pfmet);
  fChain->SetBranchAddress("simtrk_n", &simtrk_n, &b_simtrk_n);
  fChain->SetBranchAddress("simtrk_p4", &simtrk_p4, &b_simtrk_p4);
  fChain->SetBranchAddress("simtrk_vtx", &simtrk_vtx, &b_simtrk_vtx);
  fChain->SetBranchAddress("simtrk_pdgid", simtrk_pdgid, &b_simtrk_pdgid);
  fChain->SetBranchAddress("simtrk_trkid", simtrk_trkid, &b_simtrk_trkid);
  fChain->SetBranchAddress("simtrk_mothertrkid", simtrk_mothertrkid, &b_simtrk_mothertrkid);
  fChain->SetBranchAddress("simvtx", &simvtx, &b_simvtx);
  fChain->SetBranchAddress("tk_n", &tk_n, &b_tk_n);
  fChain->SetBranchAddress("tk_p4", &tk_p4, &b_tk_p4);
  fChain->SetBranchAddress("tk_vtx_pos", &tk_vtx_pos, &b_tk_vtx_pos);
  fChain->SetBranchAddress("tk_nhits", tk_nhits, &b_tk_nhits);
  fChain->SetBranchAddress("tk_charge", tk_charge, &b_tk_charge);
  fChain->SetBranchAddress("tk_nlosthit", tk_nlosthit, &b_tk_nlosthit);
  fChain->SetBranchAddress("tk_tpind", tk_tpind, &b_tk_tpind);
  fChain->SetBranchAddress("tk_chi2", tk_chi2, &b_tk_chi2);
  fChain->SetBranchAddress("tk_dof", tk_dof, &b_tk_dof);
  fChain->SetBranchAddress("tk_d0", tk_d0, &b_tk_d0);
  fChain->SetBranchAddress("tk_dz", tk_dz, &b_tk_dz);
  fChain->SetBranchAddress("tk_qoverperr", tk_qoverperr, &b_tk_qoverperr);
  fChain->SetBranchAddress("tk_pterr", tk_pterr, &b_tk_pterr);
  fChain->SetBranchAddress("tk_etaerr", tk_etaerr, &b_tk_etaerr);
  fChain->SetBranchAddress("tk_phierr", tk_phierr, &b_tk_phierr);
  fChain->SetBranchAddress("tk_d0err", tk_d0err, &b_tk_d0err);
  fChain->SetBranchAddress("tk_dzerr", tk_dzerr, &b_tk_dzerr);
  fChain->SetBranchAddress("tk_hp_nvalid", tk_hp_nvalid, &b_tk_hp_nvalid);
  fChain->SetBranchAddress("tk_hp_nlost", tk_hp_nlost, &b_tk_hp_nlost);
  fChain->SetBranchAddress("tk_hp_nvalidpix", tk_hp_nvalidpix, &b_tk_hp_nvalidpix);
  fChain->SetBranchAddress("tk_hp_expin", tk_hp_expin, &b_tk_hp_expin);
  fChain->SetBranchAddress("tk_hp_expout", tk_hp_expout, &b_tk_hp_expout);
  fChain->SetBranchAddress("tk_quality", tk_quality, &b_tk_quality);
  fChain->SetBranchAddress("tk_algo", tk_algo, &b_tk_algo);
  fChain->SetBranchAddress("gsf_tk_n", &gsf_tk_n, &b_gsf_tk_n);
  fChain->SetBranchAddress("gsf_tk_p4", &gsf_tk_p4, &b_gsf_tk_p4);
  fChain->SetBranchAddress("gsf_tk_vtx_pos", &gsf_tk_vtx_pos, &b_gsf_tk_vtx_pos);
  fChain->SetBranchAddress("gsf_tk_nhits", gsf_tk_nhits, &b_gsf_tk_nhits);
  fChain->SetBranchAddress("gsf_tk_charge", gsf_tk_charge, &b_gsf_tk_charge);
  fChain->SetBranchAddress("gsf_tk_nlosthit", gsf_tk_nlosthit, &b_gsf_tk_nlosthit);
  fChain->SetBranchAddress("gsf_tk_tpind", gsf_tk_tpind, &b_gsf_tk_tpind);
  fChain->SetBranchAddress("gsf_tk_chi2", gsf_tk_chi2, &b_gsf_tk_chi2);
  fChain->SetBranchAddress("gsf_tk_dof", gsf_tk_dof, &b_gsf_tk_dof);
  fChain->SetBranchAddress("gsf_tk_d0", gsf_tk_d0, &b_gsf_tk_d0);
  fChain->SetBranchAddress("gsf_tk_dz", gsf_tk_dz, &b_gsf_tk_dz);
  fChain->SetBranchAddress("gsf_tk_qoverpinerr", gsf_tk_qoverpinerr, &b_gsf_tk_qoverpinerr);
  fChain->SetBranchAddress("gsf_tk_qoverpouterr", gsf_tk_qoverpouterr, &b_gsf_tk_qoverpouterr);
  fChain->SetBranchAddress("gsf_tk_pterr", gsf_tk_pterr, &b_gsf_tk_pterr);
  fChain->SetBranchAddress("gsf_tk_etaerr", gsf_tk_etaerr, &b_gsf_tk_etaerr);
  fChain->SetBranchAddress("gsf_tk_phierr", gsf_tk_phierr, &b_gsf_tk_phierr);
  fChain->SetBranchAddress("gsf_tk_d0err", gsf_tk_d0err, &b_gsf_tk_d0err);
  fChain->SetBranchAddress("gsf_tk_dzerr", gsf_tk_dzerr, &b_gsf_tk_dzerr);
  fChain->SetBranchAddress("gsf_tk_hp_nvalid", gsf_tk_hp_nvalid, &b_gsf_tk_hp_nvalid);
  fChain->SetBranchAddress("gsf_tk_hp_nlost", gsf_tk_hp_nlost, &b_gsf_tk_hp_nlost);
  fChain->SetBranchAddress("gsf_tk_hp_nvalidpix", gsf_tk_hp_nvalidpix, &b_gsf_tk_hp_nvalidpix);
  fChain->SetBranchAddress("gsf_tk_hp_expin", gsf_tk_hp_expin, &b_gsf_tk_hp_expin);
  fChain->SetBranchAddress("gsf_tk_hp_expout", gsf_tk_hp_expout, &b_gsf_tk_hp_expout);
  fChain->SetBranchAddress("gsf_tk_pin", gsf_tk_pin, &b_gsf_tk_pin);
  fChain->SetBranchAddress("gsf_tk_pout", gsf_tk_pout, &b_gsf_tk_pout);
  fChain->SetBranchAddress("gsf_tk_fbrem", gsf_tk_fbrem, &b_gsf_tk_fbrem);
  fChain->SetBranchAddress("gsf_tk_quality", gsf_tk_quality, &b_gsf_tk_quality);
  fChain->SetBranchAddress("gsf_tk_algo", gsf_tk_algo, &b_gsf_tk_algo);
  fChain->SetBranchAddress("gsf_tk_tkind", gsf_tk_tkind, &b_gsf_tk_tkind);
  fChain->SetBranchAddress("el_std_n", &el_std_n, &b_el_std_n);
  fChain->SetBranchAddress("el_std_sc", &el_std_sc, &b_el_std_sc);
  fChain->SetBranchAddress("el_std_p4", &el_std_p4, &b_el_std_p4);
  fChain->SetBranchAddress("el_std_momvtx", &el_std_momvtx, &b_el_std_momvtx);
  fChain->SetBranchAddress("el_std_momvtxconst", &el_std_momvtxconst, &b_el_std_momvtxconst);
  fChain->SetBranchAddress("el_std_momcalo", &el_std_momcalo, &b_el_std_momcalo);
  fChain->SetBranchAddress("el_std_posvtx", &el_std_posvtx, &b_el_std_posvtx);
  fChain->SetBranchAddress("el_std_poscalo", &el_std_poscalo, &b_el_std_poscalo);
  fChain->SetBranchAddress("el_std_crack", el_std_crack, &b_el_std_crack);
  fChain->SetBranchAddress("el_std_eopin", el_std_eopin, &b_el_std_eopin);
  fChain->SetBranchAddress("el_std_eseedopout", el_std_eseedopout, &b_el_std_eseedopout);
  fChain->SetBranchAddress("el_std_pout", el_std_pout, &b_el_std_pout);
  fChain->SetBranchAddress("el_std_pin", el_std_pin, &b_el_std_pin);
  fChain->SetBranchAddress("el_std_e1x5", el_std_e1x5, &b_el_std_e1x5);
  fChain->SetBranchAddress("el_std_e5x5", el_std_e5x5, &b_el_std_e5x5);
  fChain->SetBranchAddress("el_std_e2x5", el_std_e2x5, &b_el_std_e2x5);
  fChain->SetBranchAddress("el_std_spp", el_std_spp, &b_el_std_spp);
  fChain->SetBranchAddress("el_std_see", el_std_see, &b_el_std_see);
  fChain->SetBranchAddress("el_std_sieie", el_std_sieie, &b_el_std_sieie);
  fChain->SetBranchAddress("el_std_sieiesc", el_std_sieiesc, &b_el_std_sieiesc);
  fChain->SetBranchAddress("el_std_eseed", el_std_eseed, &b_el_std_eseed);
  fChain->SetBranchAddress("el_std_enearbcopin", el_std_enearbcopin, &b_el_std_enearbcopin);
  fChain->SetBranchAddress("el_std_eseedopin", el_std_eseedopin, &b_el_std_eseedopin);
  fChain->SetBranchAddress("el_std_fbrem", el_std_fbrem, &b_el_std_fbrem);
  fChain->SetBranchAddress("el_std_nbrem", el_std_nbrem, &b_el_std_nbrem);
  fChain->SetBranchAddress("el_std_hoe", el_std_hoe, &b_el_std_hoe);
  fChain->SetBranchAddress("el_std_hoed1", el_std_hoed1, &b_el_std_hoed1);
  fChain->SetBranchAddress("el_std_hoed2", el_std_hoed2, &b_el_std_hoed2);
  fChain->SetBranchAddress("el_std_detain", el_std_detain, &b_el_std_detain);
  fChain->SetBranchAddress("el_std_dphiin", el_std_dphiin, &b_el_std_dphiin);
  fChain->SetBranchAddress("el_std_detaout", el_std_detaout, &b_el_std_detaout);
  fChain->SetBranchAddress("el_std_dphiout", el_std_dphiout, &b_el_std_dphiout);
  fChain->SetBranchAddress("el_std_class", el_std_class, &b_el_std_class);
  fChain->SetBranchAddress("el_std_nambtk", el_std_nambtk, &b_el_std_nambtk);
  fChain->SetBranchAddress("el_std_scind", el_std_scind, &b_el_std_scind);
  fChain->SetBranchAddress("el_std_z0", el_std_z0, &b_el_std_z0);
  fChain->SetBranchAddress("el_std_d0", el_std_d0, &b_el_std_d0);
  fChain->SetBranchAddress("el_std_qoverperr", el_std_qoverperr, &b_el_std_qoverperr);
  fChain->SetBranchAddress("el_std_pterr", el_std_pterr, &b_el_std_pterr);
  fChain->SetBranchAddress("el_std_etaerr", el_std_etaerr, &b_el_std_etaerr);
  fChain->SetBranchAddress("el_std_phierr", el_std_phierr, &b_el_std_phierr);
  fChain->SetBranchAddress("el_std_z0err", el_std_z0err, &b_el_std_z0err);
  fChain->SetBranchAddress("el_std_d0err", el_std_d0err, &b_el_std_d0err);
  fChain->SetBranchAddress("el_std_chi2", el_std_chi2, &b_el_std_chi2);
  fChain->SetBranchAddress("el_std_dof", el_std_dof, &b_el_std_dof);
  fChain->SetBranchAddress("el_std_mva", el_std_mva, &b_el_std_mva);
  fChain->SetBranchAddress("el_std_ch_gsf", el_std_ch_gsf, &b_el_std_ch_gsf);
  fChain->SetBranchAddress("el_std_ch_scpix", el_std_ch_scpix, &b_el_std_ch_scpix);
  fChain->SetBranchAddress("el_std_charge", el_std_charge, &b_el_std_charge);
  fChain->SetBranchAddress("el_std_losthits", el_std_losthits, &b_el_std_losthits);
  fChain->SetBranchAddress("el_std_validhits", el_std_validhits, &b_el_std_validhits);
  fChain->SetBranchAddress("el_std_hp_expin", el_std_hp_expin, &b_el_std_hp_expin);
  fChain->SetBranchAddress("el_std_hp_expout", el_std_hp_expout, &b_el_std_hp_expout);
  fChain->SetBranchAddress("el_std_rohighe", el_std_rohighe, &b_el_std_rohighe);
  fChain->SetBranchAddress("el_std_roloose", el_std_roloose, &b_el_std_roloose);
  fChain->SetBranchAddress("el_std_rotight", el_std_rotight, &b_el_std_rotight);
  fChain->SetBranchAddress("el_std_loose", el_std_loose, &b_el_std_loose);
  fChain->SetBranchAddress("el_std_tight", el_std_tight, &b_el_std_tight);
  fChain->SetBranchAddress("el_std_tkind", el_std_tkind, &b_el_std_tkind);
  fChain->SetBranchAddress("el_std_hcaliso03", el_std_hcaliso03, &b_el_std_hcaliso03);
  fChain->SetBranchAddress("el_std_ecaliso03", el_std_ecaliso03, &b_el_std_ecaliso03);
  fChain->SetBranchAddress("el_std_tkiso03", el_std_tkiso03, &b_el_std_tkiso03);
  fChain->SetBranchAddress("el_std_hcaliso04", el_std_hcaliso04, &b_el_std_hcaliso04);
  fChain->SetBranchAddress("el_std_ecaliso04", el_std_ecaliso04, &b_el_std_ecaliso04);
  fChain->SetBranchAddress("el_std_tkiso04", el_std_tkiso04, &b_el_std_tkiso04);
  fChain->SetBranchAddress("el_std_3dip_valid", el_std_3dip_valid, &b_el_std_3dip_valid);
  fChain->SetBranchAddress("el_std_tkdrv", el_std_tkdrv, &b_el_std_tkdrv);
  fChain->SetBranchAddress("el_std_ecaldrv", el_std_ecaldrv, &b_el_std_ecaldrv);
  fChain->SetBranchAddress("el_std_ip_ctf", el_std_ip_ctf, &b_el_std_ip_ctf);
  fChain->SetBranchAddress("el_std_ip_gsf", el_std_ip_gsf, &b_el_std_ip_gsf);
  fChain->SetBranchAddress("mu_glo_n", &mu_glo_n, &b_mu_glo_n);
  fChain->SetBranchAddress("mu_glo_p4", &mu_glo_p4, &b_mu_glo_p4);
  fChain->SetBranchAddress("mu_glo_momvtx", &mu_glo_momvtx, &b_mu_glo_momvtx);
  fChain->SetBranchAddress("mu_glo_posvtx", &mu_glo_posvtx, &b_mu_glo_posvtx);
  fChain->SetBranchAddress("mu_glo_posecal", &mu_glo_posecal, &b_mu_glo_posecal);
  fChain->SetBranchAddress("mu_glo_poshcal", &mu_glo_poshcal, &b_mu_glo_poshcal);
  fChain->SetBranchAddress("mu_glo_nmatches", mu_glo_nmatches, &b_mu_glo_nmatches);
  fChain->SetBranchAddress("mu_glo_em", mu_glo_em, &b_mu_glo_em);
  fChain->SetBranchAddress("mu_glo_had", mu_glo_had, &b_mu_glo_had);
  fChain->SetBranchAddress("mu_glo_ho", mu_glo_ho, &b_mu_glo_ho);
  fChain->SetBranchAddress("mu_glo_emS9", mu_glo_emS9, &b_mu_glo_emS9);
  fChain->SetBranchAddress("mu_glo_hadS9", mu_glo_hadS9, &b_mu_glo_hadS9);
  fChain->SetBranchAddress("mu_glo_hoS9", mu_glo_hoS9, &b_mu_glo_hoS9);
  fChain->SetBranchAddress("mu_glo_chi2", mu_glo_chi2, &b_mu_glo_chi2);
  fChain->SetBranchAddress("mu_glo_dof", mu_glo_dof, &b_mu_glo_dof);
  fChain->SetBranchAddress("mu_glo_tkind", mu_glo_tkind, &b_mu_glo_tkind);
  fChain->SetBranchAddress("mu_glo_staind", mu_glo_staind, &b_mu_glo_staind);
  fChain->SetBranchAddress("mu_glo_z0", mu_glo_z0, &b_mu_glo_z0);
  fChain->SetBranchAddress("mu_glo_d0", mu_glo_d0, &b_mu_glo_d0);
  fChain->SetBranchAddress("mu_glo_z0err", mu_glo_z0err, &b_mu_glo_z0err);
  fChain->SetBranchAddress("mu_glo_d0err", mu_glo_d0err, &b_mu_glo_d0err);
  fChain->SetBranchAddress("mu_glo_charge", mu_glo_charge, &b_mu_glo_charge);
  fChain->SetBranchAddress("mu_glo_losthits", mu_glo_losthits, &b_mu_glo_losthits);
  fChain->SetBranchAddress("mu_glo_validhits", mu_glo_validhits, &b_mu_glo_validhits);
  fChain->SetBranchAddress("mu_glo_type", mu_glo_type, &b_mu_glo_type);
  fChain->SetBranchAddress("mu_glo_iso", mu_glo_iso, &b_mu_glo_iso);
  fChain->SetBranchAddress("mu_glo_3dip_valid", mu_glo_3dip_valid, &b_mu_glo_3dip_valid);
  fChain->SetBranchAddress("jet_it5_n", &jet_it5_n, &b_jet_it5_n);
  fChain->SetBranchAddress("jet_it5_p4", &jet_it5_p4, &b_jet_it5_p4);
  fChain->SetBranchAddress("jet_it5_emfrac", jet_it5_emfrac, &b_jet_it5_emfrac);
  fChain->SetBranchAddress("jet_it5_hadfrac", jet_it5_hadfrac, &b_jet_it5_hadfrac);
  fChain->SetBranchAddress("jet_it5_ntk", jet_it5_ntk, &b_jet_it5_ntk);
  fChain->SetBranchAddress("jet_it5_tkind", jet_it5_tkind, &b_jet_it5_tkind);
  fChain->SetBranchAddress("jet_it5_ncalotw", jet_it5_ncalotw, &b_jet_it5_ncalotw);
  fChain->SetBranchAddress("jet_it5_calotwind", jet_it5_calotwind, &b_jet_it5_calotwind);
  fChain->SetBranchAddress("jet_it7_n", &jet_it7_n, &b_jet_it7_n);
  fChain->SetBranchAddress("jet_it7_p4", &jet_it7_p4, &b_jet_it7_p4);
  fChain->SetBranchAddress("jet_it7_emfrac", jet_it7_emfrac, &b_jet_it7_emfrac);
  fChain->SetBranchAddress("jet_it7_hadfrac", jet_it7_hadfrac, &b_jet_it7_hadfrac);
  fChain->SetBranchAddress("jet_it7_ntk", jet_it7_ntk, &b_jet_it7_ntk);
  fChain->SetBranchAddress("jet_it7_tkind", jet_it7_tkind, &b_jet_it7_tkind);
  fChain->SetBranchAddress("jet_it7_ncalotw", jet_it7_ncalotw, &b_jet_it7_ncalotw);
  fChain->SetBranchAddress("jet_it7_calotwind", jet_it7_calotwind, &b_jet_it7_calotwind);
  fChain->SetBranchAddress("jet_mid_n", &jet_mid_n, &b_jet_mid_n);
  fChain->SetBranchAddress("jet_mid_p4", &jet_mid_p4, &b_jet_mid_p4);
  fChain->SetBranchAddress("jet_mid_emfrac", jet_mid_emfrac, &b_jet_mid_emfrac);
  fChain->SetBranchAddress("jet_mid_hadfrac", jet_mid_hadfrac, &b_jet_mid_hadfrac);
  fChain->SetBranchAddress("jet_mid_ntk", jet_mid_ntk, &b_jet_mid_ntk);
  fChain->SetBranchAddress("jet_mid_tkind", jet_mid_tkind, &b_jet_mid_tkind);
  fChain->SetBranchAddress("jet_mid_ncalotw", jet_mid_ncalotw, &b_jet_mid_ncalotw);
  fChain->SetBranchAddress("jet_mid_calotwind", jet_mid_calotwind, &b_jet_mid_calotwind);
  fChain->SetBranchAddress("jet_it5pf_n", &jet_it5pf_n, &b_jet_it5pf_n);
  fChain->SetBranchAddress("jet_it5pf_p4", &jet_it5pf_p4, &b_jet_it5pf_p4);
  fChain->SetBranchAddress("jet_it5pf_emfrac", jet_it5pf_emfrac, &b_jet_it5pf_emfrac);
  fChain->SetBranchAddress("jet_it5pf_hadfrac", jet_it5pf_hadfrac, &b_jet_it5pf_hadfrac);
  fChain->SetBranchAddress("jet_it5pf_ntk", jet_it5pf_ntk, &b_jet_it5pf_ntk);
  fChain->SetBranchAddress("jet_it5pf_tkind", jet_it5pf_tkind, &b_jet_it5pf_tkind);
  fChain->SetBranchAddress("jet_it5pf_ncalotw", jet_it5pf_ncalotw, &b_jet_it5pf_ncalotw);
  fChain->SetBranchAddress("jet_it5pf_calotwind", jet_it5pf_calotwind, &b_jet_it5pf_calotwind);
  fChain->SetBranchAddress("jet_sis5pf_n", &jet_sis5pf_n, &b_jet_sis5pf_n);
  fChain->SetBranchAddress("jet_sis5pf_p4", &jet_sis5pf_p4, &b_jet_sis5pf_p4);
  fChain->SetBranchAddress("jet_sis5pf_emfrac", jet_sis5pf_emfrac, &b_jet_sis5pf_emfrac);
  fChain->SetBranchAddress("jet_sis5pf_hadfrac", jet_sis5pf_hadfrac, &b_jet_sis5pf_hadfrac);
  fChain->SetBranchAddress("jet_sis5pf_ntk", jet_sis5pf_ntk, &b_jet_sis5pf_ntk);
  fChain->SetBranchAddress("jet_sis5pf_tkind", jet_sis5pf_tkind, &b_jet_sis5pf_tkind);
  fChain->SetBranchAddress("jet_sis5pf_ncalotw", jet_sis5pf_ncalotw, &b_jet_sis5pf_ncalotw);
  fChain->SetBranchAddress("jet_sis5pf_calotwind", jet_sis5pf_calotwind, &b_jet_sis5pf_calotwind);
  fChain->SetBranchAddress("jet_kt4pf_n", &jet_kt4pf_n, &b_jet_kt4pf_n);
  fChain->SetBranchAddress("jet_kt4pf_p4", &jet_kt4pf_p4, &b_jet_kt4pf_p4);
  fChain->SetBranchAddress("jet_kt4pf_emfrac", jet_kt4pf_emfrac, &b_jet_kt4pf_emfrac);
  fChain->SetBranchAddress("jet_kt4pf_hadfrac", jet_kt4pf_hadfrac, &b_jet_kt4pf_hadfrac);
  fChain->SetBranchAddress("jet_kt4pf_ntk", jet_kt4pf_ntk, &b_jet_kt4pf_ntk);
  fChain->SetBranchAddress("jet_kt4pf_tkind", jet_kt4pf_tkind, &b_jet_kt4pf_tkind);
  fChain->SetBranchAddress("jet_kt4pf_ncalotw", jet_kt4pf_ncalotw, &b_jet_kt4pf_ncalotw);
  fChain->SetBranchAddress("jet_kt4pf_calotwind", jet_kt4pf_calotwind, &b_jet_kt4pf_calotwind);
  fChain->SetBranchAddress("gp_n", &gp_n, &b_gp_n);
  fChain->SetBranchAddress("gp_p4", &gp_p4, &b_gp_p4);
  fChain->SetBranchAddress("gp_vtx", &gp_vtx, &b_gp_vtx);
  fChain->SetBranchAddress("gp_status", gp_status, &b_gp_status);
  fChain->SetBranchAddress("gp_pdgid", gp_pdgid, &b_gp_pdgid);
  fChain->SetBranchAddress("gp_mother", gp_mother, &b_gp_mother);
  fChain->SetBranchAddress("genjet_it5_n", &genjet_it5_n, &b_genjet_it5_n);
  fChain->SetBranchAddress("genjet_it5_p4", &genjet_it5_p4, &b_genjet_it5_p4);
  fChain->SetBranchAddress("genjet_it5_em", genjet_it5_em, &b_genjet_it5_em);
  fChain->SetBranchAddress("genjet_it5_had", genjet_it5_had, &b_genjet_it5_had);
  fChain->SetBranchAddress("genjet_it5_inv", genjet_it5_inv, &b_genjet_it5_inv);
  fChain->SetBranchAddress("genjet_it5_aux", genjet_it5_aux, &b_genjet_it5_aux);
  fChain->SetBranchAddress("genjet_it7_n", &genjet_it7_n, &b_genjet_it7_n);
  fChain->SetBranchAddress("genjet_it7_p4", &genjet_it7_p4, &b_genjet_it7_p4);
  fChain->SetBranchAddress("genjet_it7_em", genjet_it7_em, &b_genjet_it7_em);
  fChain->SetBranchAddress("genjet_it7_had", genjet_it7_had, &b_genjet_it7_had);
  fChain->SetBranchAddress("genjet_it7_inv", genjet_it7_inv, &b_genjet_it7_inv);
  fChain->SetBranchAddress("genjet_it7_aux", genjet_it7_aux, &b_genjet_it7_aux);
  fChain->SetBranchAddress("genjet_mid_n", &genjet_mid_n, &b_genjet_mid_n);
  fChain->SetBranchAddress("genjet_mid_p4", &genjet_mid_p4, &b_genjet_mid_p4);
  fChain->SetBranchAddress("genjet_mid_em", genjet_mid_em, &b_genjet_mid_em);
  fChain->SetBranchAddress("genjet_mid_had", genjet_mid_had, &b_genjet_mid_had);
  fChain->SetBranchAddress("genjet_mid_inv", genjet_mid_inv, &b_genjet_mid_inv);
  fChain->SetBranchAddress("genjet_mid_aux", genjet_mid_aux, &b_genjet_mid_aux);
  fChain->SetBranchAddress("lpt_n", &lpt_n, &b_lpt_n);
  fChain->SetBranchAddress("lpt_emu_n", &lpt_emu_n, &b_lpt_emu_n);
  fChain->SetBranchAddress("lpt_mu_n", &lpt_mu_n, &b_lpt_mu_n);
  fChain->SetBranchAddress("lpt_el_n", &lpt_el_n, &b_lpt_el_n);
  fChain->SetBranchAddress("lpt_pho_n", &lpt_pho_n, &b_lpt_pho_n);
  fChain->SetBranchAddress("lpt_pdgid", lpt_pdgid, &b_lpt_pdgid);
  fChain->SetBranchAddress("lpt_ind", lpt_ind, &b_lpt_ind);
  fChain->SetBranchAddress("lpt_duplicate", lpt_duplicate, &b_lpt_duplicate);
  fChain->SetBranchAddress("lpt_p4", &lpt_p4, &b_lpt_p4);
  fChain->SetBranchAddress("lpt_indgen", lpt_indgen, &b_lpt_indgen);
  fChain->SetBranchAddress("lpt_drmatch", lpt_drmatch, &b_lpt_drmatch);
  fChain->SetBranchAddress("ht_25", &ht_25, &b_ht_25);
  fChain->SetBranchAddress("ht_35", &ht_35, &b_ht_35);
  fChain->SetBranchAddress("ht_50", &ht_50, &b_ht_50);
  fChain->SetBranchAddress("ht_nomet25", &ht_nomet25, &b_ht_nomet25);
  fChain->SetBranchAddress("ht_nomet35", &ht_nomet35, &b_ht_nomet35);
  fChain->SetBranchAddress("ht_nomet50", &ht_nomet50, &b_ht_nomet50);
  fChain->SetBranchAddress("ht_trk", &ht_trk, &b_ht_trk);
  fChain->SetBranchAddress("ht_trkvec", &ht_trkvec, &b_ht_trkvec);
  fChain->SetBranchAddress("ht_2lpt_n", &ht_2lpt_n, &b_ht_2lpt_n);
  fChain->SetBranchAddress("ht_2lpt_inds", ht_2lpt_inds, &b_ht_2lpt_inds);
  fChain->SetBranchAddress("ht_4lpt_n", &ht_4lpt_n, &b_ht_4lpt_n);
  fChain->SetBranchAddress("ht_4lpt_inds", ht_4lpt_inds, &b_ht_4lpt_inds);
  fChain->SetBranchAddress("ht_2lpt25", ht_2lpt25, &b_ht_2lpt25);
  fChain->SetBranchAddress("ht_2lpt35", ht_2lpt35, &b_ht_2lpt35);
  fChain->SetBranchAddress("ht_2lpt50", ht_2lpt50, &b_ht_2lpt50);
  fChain->SetBranchAddress("ht_4lpt25", ht_4lpt25, &b_ht_4lpt25);
  fChain->SetBranchAddress("ht_4lpt35", ht_4lpt35, &b_ht_4lpt35);
  fChain->SetBranchAddress("ht_4lpt50", ht_4lpt50, &b_ht_4lpt50);
  fChain->SetBranchAddress("lptgeninfo_n", &lptgeninfo_n, &b_lptgeninfo_n);
  fChain->SetBranchAddress("lptgen_n", &lptgen_n, &b_lptgen_n);
  fChain->SetBranchAddress("lptgeninfo_p4", &lptgeninfo_p4, &b_lptgeninfo_p4);
  fChain->SetBranchAddress("lptgen_p4", &lptgen_p4, &b_lptgen_p4);
  fChain->SetBranchAddress("lptgen_befrad_p4", &lptgen_befrad_p4, &b_lptgen_befrad_p4);
  fChain->SetBranchAddress("lptgeninfo_status", lptgeninfo_status, &b_lptgeninfo_status);
  fChain->SetBranchAddress("lptgeninfo_pdgid", lptgeninfo_pdgid, &b_lptgeninfo_pdgid);
  fChain->SetBranchAddress("lptgeninfo_mother", lptgeninfo_mother, &b_lptgeninfo_mother);
  fChain->SetBranchAddress("lptgen_status", lptgen_status, &b_lptgen_status);
  fChain->SetBranchAddress("lptgen_pdgid", lptgen_pdgid, &b_lptgen_pdgid);
  fChain->SetBranchAddress("lptgen_mother", lptgen_mother, &b_lptgen_mother);
  fChain->SetBranchAddress("lptgen_motherpdgid", lptgen_motherpdgid, &b_lptgen_motherpdgid);
  fChain->SetBranchAddress("lptgen_indrec", lptgen_indrec, &b_lptgen_indrec);
  fChain->SetBranchAddress("lptgen_indrecel", lptgen_indrecel, &b_lptgen_indrecel);
  fChain->SetBranchAddress("lptgen_indrecph", lptgen_indrecph, &b_lptgen_indrecph);
  fChain->SetBranchAddress("lptgen_indrecmu", lptgen_indrecmu, &b_lptgen_indrecmu);
  fChain->SetBranchAddress("lptgen_drmatch", lptgen_drmatch, &b_lptgen_drmatch);
  fChain->SetBranchAddress("lptgen_drmatchel", lptgen_drmatchel, &b_lptgen_drmatchel);
  fChain->SetBranchAddress("lptgen_drmatchmu", lptgen_drmatchmu, &b_lptgen_drmatchmu);
  fChain->SetBranchAddress("lptgen_drmatchph", lptgen_drmatchph, &b_lptgen_drmatchph);
  fChain->SetBranchAddress("lptgen_indinfo", lptgen_indinfo, &b_lptgen_indinfo);
  fChain->SetBranchAddress("lptgen_historycode", lptgen_historycode, &b_lptgen_historycode);
  fChain->SetBranchAddress("selector_bits", &selector_bits, &b_selector_bits);
  Notify();
}

Bool_t sdaReader::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.
  return kTRUE;
}
