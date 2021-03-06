///////////////////////////////////////////////////////////
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
  Int_t           lumis;
  Int_t           run;
  Int_t           bx;
  Int_t           jet_algoPF1_n;
  TClonesArray    *jet_algoPF1_p4;
  TClonesArray    *sc_p4;
  TClonesArray    *sc_xyz;
  Int_t           pho_n;
  Float_t         pho_feta[100][5];   //[pho_n]
  Float_t         pho_crackcorr[100];   //[pho_n]
  Float_t         pho_localcorr[100];   //[pho_n]
  Int_t           pho_isEB[100];   //[pho_n]
  Int_t           pho_isEE[100];   //[pho_n]
  Float_t         pho_see[100];   //[pho_n]
  Float_t         pho_sieie[100];   //[pho_n]
  Float_t         pho_sipip[100];   //[pho_n]
  Float_t         pho_sieip[100];   //[pho_n]
  Float_t         pho_e1x5[100];   //[pho_n]
  Float_t         pho_e2x5[100];   //[pho_n]
  Float_t         pho_e3x3[100];   //[pho_n]
  Float_t         pho_e5x5[100];   //[pho_n]
  Float_t         pho_emaxxtal[100];   //[pho_n]
  Float_t         pho_hoe[100];   //[pho_n]
  Float_t         pho_r1x5[100];   //[pho_n]
  Float_t         pho_r2x5[100];   //[pho_n]
  Float_t         pho_r9[100];   //[pho_n]
  Int_t           pho_isEBGap[100];   //[pho_n]
  Int_t           pho_isEEGap[100];   //[pho_n]
  Int_t           pho_isEBEEGap[100];   //[pho_n]
  Float_t         pho_zernike20[100];   //[pho_n]
  Float_t         pho_zernike42[100];   //[pho_n]
  Float_t         pho_e2nd[100];   //[pho_n]
  Float_t         pho_e2x5right[100];   //[pho_n]
  Float_t         pho_e2x5left[100];   //[pho_n]
  Float_t         pho_e2x5Top[100];   //[pho_n]
  Float_t         pho_e2x5bottom[100];   //[pho_n]
  Float_t         pho_eright[100];   //[pho_n]
  Float_t         pho_eleft[100];   //[pho_n]
  Float_t         pho_etop[100];   //[pho_n]
  Float_t         pho_ebottom[100];   //[pho_n]
  Float_t         pho_seed_time[100];   //[pho_n]
  Float_t         pho_seed_outoftimechi2[100];   //[pho_n]
  Float_t         pho_seed_chi2[100];   //[pho_n]
  Float_t         pho_seed_recoflag[100];   //[pho_n]
  Float_t         pho_seed_severity[100];   //[pho_n]
  Float_t         pho_ecalsumetconedr04[100];   //[pho_n]
  Float_t         pho_hcalsumetconedr04[100];   //[pho_n]
  Float_t         pho_trksumptsolidconedr04[100];   //[pho_n]
  Float_t         pho_trksumpthollowconedr04[100];   //[pho_n]
  Float_t         pho_ntrksolidconedr04[100];   //[pho_n]
  Float_t         pho_ntrkhollowconedr04[100];   //[pho_n]
  Float_t         pho_ecalsumetconedr03[100];   //[pho_n]
  Float_t         pho_hcalsumetconedr03[100];   //[pho_n]
  Float_t         pho_trksumptsolidconedr03[100];   //[pho_n]
  Float_t         pho_trksumpthollowconedr03[100];   //[pho_n]
  Float_t         pho_ntrksolidconedr03[100];   //[pho_n]
  Float_t         pho_ntrkhollowconedr03[100];   //[pho_n]
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
  Float_t         pho_conv_tk1_dzerr[100];   //[pho_n]
  Int_t           pho_conv_tk1_nh[100];   //[pho_n]
  Float_t         pho_conv_tk2_dz[100];   //[pho_n]
  Float_t         pho_conv_tk2_dzerr[100];   //[pho_n]
  Int_t           pho_conv_tk2_nh[100];   //[pho_n]
  Int_t           pho_conv_ch1ch2[100];   //[pho_n]
  Float_t         pho_conv_chi2[100];   //[pho_n]
  Float_t         pho_conv_chi2_probability[100];   //[pho_n]
  Int_t           pho_conv_validvtx[100];   //[pho_n]
  Int_t           pho_conv_MVALikelihood[100];   //[pho_n]
  TClonesArray    *pho_p4;
  TClonesArray    *pho_calopos;
  TClonesArray    *pho_conv_vtx;
  TClonesArray    *pho_conv_pair_momentum;
  TClonesArray    *pho_conv_refitted_momentum;
  TClonesArray    *pho_conv_vertexcorrected_p4;
  Int_t           conv_n;
  TClonesArray    *conv_p4;
  Int_t           conv_ntracks[2000];   //[conv_n]
  Float_t         conv_pairinvmass[2000];   //[conv_n]
  Float_t         conv_paircotthetasep[2000];   //[conv_n]
  Float_t         conv_eoverp[2000];   //[conv_n]
  Float_t         conv_distofminapproach[2000];   //[conv_n]
  Float_t         conv_dphitrksatvtx[2000];   //[conv_n]
  Float_t         conv_dphitrksatecal[2000];   //[conv_n]
  Float_t         conv_detatrksatecal[2000];   //[conv_n]
  Float_t         conv_dxy[2000];   //[conv_n]
  Float_t         conv_dz[2000];   //[conv_n]
  Float_t         conv_lxy[2000];   //[conv_n]
  Float_t         conv_lz[2000];   //[conv_n]
  Float_t         conv_zofprimvtxfromtrks[2000];   //[conv_n]
  vector<vector<unsigned short> > *conv_nHitsBeforeVtx;
  Int_t           conv_nSharedHits[2000];   //[conv_n]
  Int_t           conv_validvtx[2000];   //[conv_n]
  Int_t           conv_MVALikelihood[2000];   //[conv_n]
  Float_t         conv_chi2[2000];   //[conv_n]
  Float_t         conv_chi2_probability[2000];   //[conv_n]
  Float_t         conv_vtx_xErr[2000];   //[conv_n]
  Float_t         conv_vtx_yErr[2000];   //[conv_n]
  Float_t         conv_vtx_zErr[2000];   //[conv_n]
  Float_t         conv_tk1_dz[2000];   //[conv_n]
  Float_t         conv_tk2_dz[2000];   //[conv_n]
  Float_t         conv_tk1_dzerr[2000];   //[conv_n]
  Float_t         conv_tk2_dzerr[2000];   //[conv_n]
  Int_t           conv_tk1_nh[2000];   //[conv_n]
  Int_t           conv_tk2_nh[2000];   //[conv_n]
  Int_t           conv_ch1ch2[2000];   //[conv_n]
  Float_t         conv_tk1_d0[2000];   //[conv_n]
  Float_t         conv_tk1_pout[2000];   //[conv_n]
  Float_t         conv_tk1_pin[2000];   //[conv_n]
  Float_t         conv_tk2_d0[2000];   //[conv_n]
  Float_t         conv_tk2_pout[2000];   //[conv_n]
  Float_t         conv_tk2_pin[2000];   //[conv_n]
  TClonesArray    *conv_vtx;
  TClonesArray    *conv_pair_momentum;
  TClonesArray    *conv_refitted_momentum;
  Int_t           process_id;
  Float_t         weight;
  Float_t         pthat;
  Int_t           gp_n;
  TClonesArray    *gp_p4;
  TClonesArray    *gp_vtx;
  Short_t         gp_status[10000];   //[gp_n]
  Short_t         gp_pdgid[10000];   //[gp_n]
  Short_t         gp_mother[10000];   //[gp_n]
  Int_t           gv_n;
  TClonesArray    *gv_pos;
  Int_t           pu_n;
  vector<float>   *pu_zpos;
  vector<float>   *pu_sumpt_lowpt;
  vector<float>   *pu_sumpt_highpt;
  vector<int>     *pu_ntrks_lowpt;
  vector<int>     *pu_ntrks_highpt;
  Int_t           vtx_std_n;
  Int_t           vtx_std_ntks[50];   //[vtx_std_n]
  Float_t         vtx_std_x2dof[50];   //[vtx_std_n]
  TClonesArray    *vtx_std_xyz;
  TClonesArray    *vtx_std_dxdydz;
  Float_t         vtx_std_ndof[50];   //[vtx_std_n]
  Float_t         rho;
  TClonesArray    *bs_xyz;
  Float_t         bs_sigmaZ;
  Float_t         bs_x0Error;
  Float_t         bs_y0Error;
  Float_t         bs_z0Error;
  Float_t         bs_sigmaZ0Error;
  Float_t         met_tcmet;
  Float_t         met_phi_tcmet;
  vector<unsigned short> *hlt1_bit;
  Int_t           hlt_n;
  vector<vector<unsigned short> > *hlt_candpath;
  vector<string>  *hlt_path_names_HLT1;
  TClonesArray    *hlt_p4;
  Int_t           l1emiso_n;
  Float_t         l1emiso_et[10];   //[l1emiso_n]
  Float_t         l1emiso_eta[10];   //[l1emiso_n]
  Float_t         l1emiso_phi[10];   //[l1emiso_n]
  Int_t           l1emnoniso_n;
  Float_t         l1emnoniso_et[10];   //[l1emnoniso_n]
  Float_t         l1emnoniso_eta[10];   //[l1emnoniso_n]
  Float_t         l1emnoniso_phi[10];   //[l1emnoniso_n]
  vector<int>     *l1bits_phy;
  Int_t           l1_labels_;
  string          l1_labels_first[100];
  Int_t           l1_labels_second[100];   //[l1_labels_]
  vector<float>   *vtx_std_diphopt;
  vector<float>   *vtx_std_nch;
  vector<float>   *vtx_std_ptmax;
  vector<float>   *vtx_std_sumpt;
  vector<float>   *vtx_std_ptvtx;
  vector<float>   *vtx_std_acosA;
  vector<float>   *vtx_std_ptasym;
  vector<float>   *vtx_std_ptbal;
  vector<float>   *vtx_std_nchthr;
  vector<float>   *vtx_std_ptmax3;
  vector<float>   *vtx_std_thrust;
  vector<float>   *vtx_std_sumweight;
  vector<float>   *vtx_std_sumpt2;
  vector<float>   *vtx_std_ptratio;
  vector<float>   *vtx_std_pzasym;
  vector<float>   *vtx_std_spher;
  vector<float>   *vtx_std_aplan;
  vector<float>   *vtx_std_sumpr;
  vector<float>   *vtx_std_sumawy;
  vector<float>   *vtx_std_sumtrv;
  vector<float>   *vtx_std_sumtwd;
  vector<float>   *vtx_std_awytwdasym;
  Int_t           vtx_std_pho1;
  Int_t           vtx_std_pho2;
  vector<int>     *pho_matchingConv;
  vector<int>     *vtx_std_ranked_list;
  Int_t           vtx_std_sel;
  vector<vector<float> > *pho_tkiso_recvtx_030_002_0000_10_01;
  Float_t         pho_tkiso_badvtx_040_002_0000_10_01[100];   //[pho_n]
  Float_t         pho_drtotk_25_99[100];   //[pho_n]
  vector<short>   *pho_cic6cutlevel_lead;
  vector<vector<unsigned int> > *pho_cic6passcuts_lead;
  vector<short>   *pho_cic6cutlevel_sublead;
  vector<vector<unsigned int> > *pho_cic6passcuts_sublead;
  vector<short>   *pho_cic4cutlevel_lead;
  vector<vector<unsigned int> > *pho_cic4passcuts_lead;
  vector<short>   *pho_cic4cutlevel_sublead;
  vector<vector<unsigned int> > *pho_cic4passcuts_sublead;

  // List of branches
  TBranch        *b_event;   //!
  TBranch        *b_lumis;   //!
  TBranch        *b_run;   //!
  TBranch        *b_bx;   //!
  TBranch        *b_jet_algoPF1_n;   //!
  TBranch        *b_jet_algoPF1_p4;   //!
  TBranch        *b_sc_p4;   //!
  TBranch        *b_sc_xyz;   //!
  TBranch        *b_pho_n;   //!
  TBranch        *b_pho_feta;   //!
  TBranch        *b_pho_crackcorr;   //!
  TBranch        *b_pho_localcorr;   //!
  TBranch        *b_pho_isEB;   //!
  TBranch        *b_pho_isEE;   //!
  TBranch        *b_pho_see;   //!
  TBranch        *b_pho_sieie;   //!
  TBranch        *b_pho_sipip;   //!
  TBranch        *b_pho_sieip;   //!
  TBranch        *b_pho_e1x5;   //!
  TBranch        *b_pho_e2x5;   //!
  TBranch        *b_pho_e3x3;   //!
  TBranch        *b_pho_e5x5;   //!
  TBranch        *b_pho_emaxxtal;   //!
  TBranch        *b_pho_hoe;   //!
  TBranch        *b_pho_r1x5;   //!
  TBranch        *b_pho_r2x5;   //!
  TBranch        *b_pho_r9;   //!
  TBranch        *b_pho_isEBGap;   //!
  TBranch        *b_pho_isEEGap;   //!
  TBranch        *b_pho_isEBEEGap;   //!
  TBranch        *b_pho_zernike20;   //!
  TBranch        *b_pho_zernike42;   //!
  TBranch        *b_pho_e2nd;   //!
  TBranch        *b_pho_e2x5right;   //!
  TBranch        *b_pho_e2x5left;   //!
  TBranch        *b_pho_e2x5Top;   //!
  TBranch        *b_pho_e2x5bottom;   //!
  TBranch        *b_pho_eright;   //!
  TBranch        *b_pho_eleft;   //!
  TBranch        *b_pho_etop;   //!
  TBranch        *b_pho_ebottom;   //!
  TBranch        *b_pho_seed_time;   //!
  TBranch        *b_pho_seed_outoftimechi2;   //!
  TBranch        *b_pho_seed_chi2;   //!
  TBranch        *b_pho_seed_recoflag;   //!
  TBranch        *b_pho_seed_severity;   //!
  TBranch        *b_pho_ecalsumetconedr04;   //!
  TBranch        *b_pho_hcalsumetconedr04;   //!
  TBranch        *b_pho_trksumptsolidconedr04;   //!
  TBranch        *b_pho_trksumpthollowconedr04;   //!
  TBranch        *b_pho_ntrksolidconedr04;   //!
  TBranch        *b_pho_ntrkhollowconedr04;   //!
  TBranch        *b_pho_ecalsumetconedr03;   //!
  TBranch        *b_pho_hcalsumetconedr03;   //!
  TBranch        *b_pho_trksumptsolidconedr03;   //!
  TBranch        *b_pho_trksumpthollowconedr03;   //!
  TBranch        *b_pho_ntrksolidconedr03;   //!
  TBranch        *b_pho_ntrkhollowconedr03;   //!
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
  TBranch        *b_pho_conv_tk1_dzerr;   //!
  TBranch        *b_pho_conv_tk1_nh;   //!
  TBranch        *b_pho_conv_tk2_dz;   //!
  TBranch        *b_pho_conv_tk2_dzerr;   //!
  TBranch        *b_pho_conv_tk2_nh;   //!
  TBranch        *b_pho_conv_ch1ch2;   //!
  TBranch        *b_pho_conv_chi2;   //!
  TBranch        *b_pho_conv_chi2_probability;   //!
  TBranch        *b_pho_conv_validvtx;   //!
  TBranch        *b_pho_conv_MVALikelihood;   //!
  TBranch        *b_pho_p4;   //!
  TBranch        *b_pho_calopos;   //!
  TBranch        *b_pho_conv_vtx;   //!
  TBranch        *b_pho_conv_pair_momentum;   //!
  TBranch        *b_pho_conv_refitted_momentum;   //!
  TBranch        *b_pho_conv_vertexcorrected_p4;   //!
  TBranch        *b_conv_n;   //!
  TBranch        *b_conv_p4;   //!
  TBranch        *b_conv_ntracks;   //!
  TBranch        *b_conv_pairinvmass;   //!
  TBranch        *b_conv_paircotthetasep;   //!
  TBranch        *b_conv_eoverp;   //!
  TBranch        *b_conv_distofminapproach;   //!
  TBranch        *b_conv_dphitrksatvtx;   //!
  TBranch        *b_conv_dphitrksatecal;   //!
  TBranch        *b_conv_detatrksatecal;   //!
  TBranch        *b_conv_dxy;   //!
  TBranch        *b_conv_dz;   //!
  TBranch        *b_conv_lxy;   //!
  TBranch        *b_conv_lz;   //!
  TBranch        *b_conv_zofprimvtxfromtrks;   //!
  TBranch        *b_conv_nHitsBeforeVtx;   //!
  TBranch        *b_conv_nSharedHits;   //!
  TBranch        *b_conv_validvtx;   //!
  TBranch        *b_conv_MVALikelihood;   //!
  TBranch        *b_conv_chi2;   //!
  TBranch        *b_conv_chi2_probability;   //!
  TBranch        *b_conv_vtx_xErr;   //!
  TBranch        *b_conv_vtx_yErr;   //!
  TBranch        *b_conv_vtx_zErr;   //!
  TBranch        *b_conv_tk1_dz;   //!
  TBranch        *b_conv_tk2_dz;   //!
  TBranch        *b_conv_tk1_dzerr;   //!
  TBranch        *b_conv_tk2_dzerr;   //!
  TBranch        *b_conv_tk1_nh;   //!
  TBranch        *b_conv_tk2_nh;   //!
  TBranch        *b_conv_ch1ch2;   //!
  TBranch        *b_conv_tk1_d0;   //!
  TBranch        *b_conv_tk1_pout;   //!
  TBranch        *b_conv_tk1_pin;   //!
  TBranch        *b_conv_tk2_d0;   //!
  TBranch        *b_conv_tk2_pout;   //!
  TBranch        *b_conv_tk2_pin;   //!
  TBranch        *b_conv_vtx;   //!
  TBranch        *b_conv_pair_momentum;   //!
  TBranch        *b_conv_refitted_momentum;   //!
  TBranch        *b_process_id;   //!
  TBranch        *b_weight;   //!
  TBranch        *b_pthat;   //!
  TBranch        *b_gp_n;   //!
  TBranch        *b_gp_p4;   //!
  TBranch        *b_gp_vtx;   //!
  TBranch        *b_gp_status;   //!
  TBranch        *b_gp_pdgid;   //!
  TBranch        *b_gp_mother;   //!
  TBranch        *b_gv_n;   //!
  TBranch        *b_gv_pos;   //!
  TBranch        *b_pu_n;   //!
  TBranch        *b_pu_zpos;   //!
  TBranch        *b_pu_sumpt_lowpt;   //!
  TBranch        *b_pu_sumpt_highpt;   //!
  TBranch        *b_pu_ntrks_lowpt;   //!
  TBranch        *b_pu_ntrks_highpt;   //!
  TBranch        *b_vtx_std_n;   //!
  TBranch        *b_vtx_std_ntks;   //!
  TBranch        *b_vtx_std_x2dof;   //!
  TBranch        *b_vtx_std_xyz;   //!
  TBranch        *b_vtx_std_dxdydz;   //!
  TBranch        *b_vtx_std_ndof;   //!
  TBranch        *b_rho;   //!
  TBranch        *b_bs_xyz;   //!
  TBranch        *b_bs_sigmaZ;   //!
  TBranch        *b_bs_x0Error;   //!
  TBranch        *b_bs_y0Error;   //!
  TBranch        *b_bs_z0Error;   //!
  TBranch        *b_bs_sigmaZ0Error;   //!
  TBranch        *b_met_tcmet;   //!
  TBranch        *b_met_phi_tcmet;   //!
  TBranch        *b_hlt1_bit;   //!
  TBranch        *b_hlt_n;   //!
  TBranch        *b_hlt_candpath;   //!
  TBranch        *b_hlt_path_names_HLT1;   //!
  TBranch        *b_hlt_p4;   //!
  TBranch        *b_l1emiso_n;   //!
  TBranch        *b_l1emiso_et;   //!
  TBranch        *b_l1emiso_eta;   //!
  TBranch        *b_l1emiso_phi;   //!
  TBranch        *b_l1emnoniso_n;   //!
  TBranch        *b_l1emnoniso_et;   //!
  TBranch        *b_l1emnoniso_eta;   //!
  TBranch        *b_l1emnoniso_phi;   //!
  TBranch        *b_l1bits_phy;   //!
  TBranch        *b_l1_labels_;   //!
  TBranch        *b_l1_labels_first;   //!
  TBranch        *b_l1_labels_second;   //!
  TBranch        *b_vtx_std_diphopt;   //!
  TBranch        *b_vtx_std_nch;   //!
  TBranch        *b_vtx_std_ptmax;   //!
  TBranch        *b_vtx_std_sumpt;   //!
  TBranch        *b_vtx_std_ptvtx;   //!
  TBranch        *b_vtx_std_acosA;   //!
  TBranch        *b_vtx_std_ptasym;   //!
  TBranch        *b_vtx_std_ptbal;   //!
  TBranch        *b_vtx_std_nchthr;   //!
  TBranch        *b_vtx_std_ptmax3;   //!
  TBranch        *b_vtx_std_thrust;   //!
  TBranch        *b_vtx_std_sumweight;   //!
  TBranch        *b_vtx_std_sumpt2;   //!
  TBranch        *b_vtx_std_ptratio;   //!
  TBranch        *b_vtx_std_pzasym;   //!
  TBranch        *b_vtx_std_spher;   //!
  TBranch        *b_vtx_std_aplan;   //!
  TBranch        *b_vtx_std_sumpr;   //!
  TBranch        *b_vtx_std_sumawy;   //!
  TBranch        *b_vtx_std_sumtrv;   //!
  TBranch        *b_vtx_std_sumtwd;   //!
  TBranch        *b_vtx_std_awytwdasym;   //!
  TBranch        *b_vtx_std_pho1;   //!
  TBranch        *b_vtx_std_pho2;   //!
  TBranch        *b_pho_matchingConv;   //!
  TBranch        *b_vtx_std_ranked_list;   //!
  TBranch        *b_vtx_std_sel;   //!
  TBranch        *b_pho_tkiso_recvtx_030_002_0000_10_01;   //!
  TBranch        *b_pho_tkiso_badvtx_040_002_0000_10_01;   //!
  TBranch        *b_pho_drtotk_25_99;   //!
  TBranch        *b_pho_cic6cutlevel_lead;   //!
  TBranch        *b_pho_cic6passcuts_lead;   //!
  TBranch        *b_pho_cic6cutlevel_sublead;   //!
  TBranch        *b_pho_cic6passcuts_sublead;   //!
  TBranch        *b_pho_cic4cutlevel_lead;   //!
  TBranch        *b_pho_cic4passcuts_lead;   //!
  TBranch        *b_pho_cic4cutlevel_sublead;   //!
  TBranch        *b_pho_cic4passcuts_sublead;   //!
  
  sdaReader(TFile *currentFile=0);
  virtual ~sdaReader();
  virtual Int_t    GetEntry(Long64_t entry);
  virtual void     Init(TFile *currentFile);
  virtual Bool_t   Notify();
  virtual Bool_t   FindLeaf(const char* leafname);
  virtual Bool_t   FindBranch(const char* leafname);
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
  jet_algoPF1_p4 = 0;
  sc_p4 = 0;
  sc_xyz = 0;
  pho_p4 = 0;
  pho_calopos = 0;
  pho_conv_vtx = 0;
  pho_conv_pair_momentum = 0;
  pho_conv_refitted_momentum = 0;
  pho_conv_vertexcorrected_p4 = 0;
  conv_p4 = 0;
  conv_nHitsBeforeVtx = 0;
  conv_vtx = 0;
  conv_pair_momentum = 0;
  conv_refitted_momentum = 0;
  gp_p4 = 0;
  gp_vtx = 0;
  gv_pos = 0;
  pu_zpos = 0;
  pu_sumpt_lowpt = 0;
  pu_sumpt_highpt = 0;
  pu_ntrks_lowpt = 0;
  pu_ntrks_highpt = 0;
  vtx_std_xyz = 0;
  vtx_std_dxdydz = 0;
  bs_xyz = 0;
  hlt1_bit = 0;
  hlt_candpath = 0;
  hlt_path_names_HLT1 = 0;
  hlt_p4 = 0;
  l1bits_phy = 0;
  vtx_std_diphopt = 0;
  vtx_std_nch = 0;
  vtx_std_ptmax = 0;
  vtx_std_sumpt = 0;
  vtx_std_ptvtx = 0;
  vtx_std_acosA = 0;
  vtx_std_ptasym = 0;
  vtx_std_ptbal = 0;
  vtx_std_nchthr = 0;
  vtx_std_ptmax3 = 0;
  vtx_std_thrust = 0;
  vtx_std_sumweight = 0;
  vtx_std_sumpt2 = 0;
  vtx_std_ptratio = 0;
  vtx_std_pzasym = 0;
  vtx_std_spher = 0;
  vtx_std_aplan = 0;
  vtx_std_sumpr = 0;
  vtx_std_sumawy = 0;
  vtx_std_sumtrv = 0;
  vtx_std_sumtwd = 0;
  vtx_std_awytwdasym = 0;
  pho_matchingConv = 0;
  vtx_std_ranked_list = 0;
  pho_tkiso_recvtx_030_002_0000_10_01 = 0;
  pho_cic6cutlevel_lead = 0;
  pho_cic6passcuts_lead = 0;
  pho_cic6cutlevel_sublead = 0;
  pho_cic6passcuts_sublead = 0;
  pho_cic4cutlevel_lead = 0;
  pho_cic4passcuts_lead = 0;
  pho_cic4cutlevel_sublead = 0;
  pho_cic4passcuts_sublead = 0;
  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

  fChain->SetBranchAddress("event", &event, &b_event);
  fChain->SetBranchAddress("lumis", &lumis, &b_lumis);
  fChain->SetBranchAddress("run", &run, &b_run);
  fChain->SetBranchAddress("bx", &bx, &b_bx);
  if (fChain->FindLeaf("jet_algoPF1_n")!=NULL) fChain->SetBranchAddress("jet_algoPF1_n", &jet_algoPF1_n, &b_jet_algoPF1_n);
  if (fChain->FindLeaf("jet_algoPF1_p4")!=NULL) fChain->SetBranchAddress("jet_algoPF1_p4", &jet_algoPF1_p4, &b_jet_algoPF1_p4);
  fChain->SetBranchAddress("sc_p4", &sc_p4, &b_sc_p4);
  fChain->SetBranchAddress("sc_xyz", &sc_xyz, &b_sc_xyz);
  fChain->SetBranchAddress("pho_n", &pho_n, &b_pho_n);
  fChain->SetBranchAddress("pho_feta", pho_feta, &b_pho_feta);
  fChain->SetBranchAddress("pho_crackcorr", pho_crackcorr, &b_pho_crackcorr);
  fChain->SetBranchAddress("pho_localcorr", pho_localcorr, &b_pho_localcorr);
  fChain->SetBranchAddress("pho_isEB", pho_isEB, &b_pho_isEB);
  fChain->SetBranchAddress("pho_isEE", pho_isEE, &b_pho_isEE);
  fChain->SetBranchAddress("pho_see", pho_see, &b_pho_see);
  fChain->SetBranchAddress("pho_sieie", pho_sieie, &b_pho_sieie);
  fChain->SetBranchAddress("pho_sipip", pho_sipip, &b_pho_sipip);
  fChain->SetBranchAddress("pho_sieip", pho_sieip, &b_pho_sieip);
  fChain->SetBranchAddress("pho_e1x5", pho_e1x5, &b_pho_e1x5);
  fChain->SetBranchAddress("pho_e2x5", pho_e2x5, &b_pho_e2x5);
  fChain->SetBranchAddress("pho_e3x3", pho_e3x3, &b_pho_e3x3);
  fChain->SetBranchAddress("pho_e5x5", pho_e5x5, &b_pho_e5x5);
  fChain->SetBranchAddress("pho_emaxxtal", pho_emaxxtal, &b_pho_emaxxtal);
  fChain->SetBranchAddress("pho_hoe", pho_hoe, &b_pho_hoe);
  fChain->SetBranchAddress("pho_r1x5", pho_r1x5, &b_pho_r1x5);
  fChain->SetBranchAddress("pho_r2x5", pho_r2x5, &b_pho_r2x5);
  fChain->SetBranchAddress("pho_r9", pho_r9, &b_pho_r9);
  fChain->SetBranchAddress("pho_isEBGap", pho_isEBGap, &b_pho_isEBGap);
  fChain->SetBranchAddress("pho_isEEGap", pho_isEEGap, &b_pho_isEEGap);
  fChain->SetBranchAddress("pho_isEBEEGap", pho_isEBEEGap, &b_pho_isEBEEGap);
  fChain->SetBranchAddress("pho_zernike20", pho_zernike20, &b_pho_zernike20);
  fChain->SetBranchAddress("pho_zernike42", pho_zernike42, &b_pho_zernike42);
  fChain->SetBranchAddress("pho_e2nd", pho_e2nd, &b_pho_e2nd);
  fChain->SetBranchAddress("pho_e2x5right", pho_e2x5right, &b_pho_e2x5right);
  fChain->SetBranchAddress("pho_e2x5left", pho_e2x5left, &b_pho_e2x5left);
  fChain->SetBranchAddress("pho_e2x5Top", pho_e2x5Top, &b_pho_e2x5Top);
  fChain->SetBranchAddress("pho_e2x5bottom", pho_e2x5bottom, &b_pho_e2x5bottom);
  fChain->SetBranchAddress("pho_eright", pho_eright, &b_pho_eright);
  fChain->SetBranchAddress("pho_eleft", pho_eleft, &b_pho_eleft);
  fChain->SetBranchAddress("pho_etop", pho_etop, &b_pho_etop);
  fChain->SetBranchAddress("pho_ebottom", pho_ebottom, &b_pho_ebottom);
  fChain->SetBranchAddress("pho_seed_time", pho_seed_time, &b_pho_seed_time);
  fChain->SetBranchAddress("pho_seed_outoftimechi2", pho_seed_outoftimechi2, &b_pho_seed_outoftimechi2);
  fChain->SetBranchAddress("pho_seed_chi2", pho_seed_chi2, &b_pho_seed_chi2);
  fChain->SetBranchAddress("pho_seed_recoflag", pho_seed_recoflag, &b_pho_seed_recoflag);
  fChain->SetBranchAddress("pho_seed_severity", pho_seed_severity, &b_pho_seed_severity);
  fChain->SetBranchAddress("pho_ecalsumetconedr04", pho_ecalsumetconedr04, &b_pho_ecalsumetconedr04);
  fChain->SetBranchAddress("pho_hcalsumetconedr04", pho_hcalsumetconedr04, &b_pho_hcalsumetconedr04);
  fChain->SetBranchAddress("pho_trksumptsolidconedr04", pho_trksumptsolidconedr04, &b_pho_trksumptsolidconedr04);
  fChain->SetBranchAddress("pho_trksumpthollowconedr04", pho_trksumpthollowconedr04, &b_pho_trksumpthollowconedr04);
  fChain->SetBranchAddress("pho_ntrksolidconedr04", pho_ntrksolidconedr04, &b_pho_ntrksolidconedr04);
  fChain->SetBranchAddress("pho_ntrkhollowconedr04", pho_ntrkhollowconedr04, &b_pho_ntrkhollowconedr04);
  fChain->SetBranchAddress("pho_ecalsumetconedr03", pho_ecalsumetconedr03, &b_pho_ecalsumetconedr03);
  fChain->SetBranchAddress("pho_hcalsumetconedr03", pho_hcalsumetconedr03, &b_pho_hcalsumetconedr03);
  fChain->SetBranchAddress("pho_trksumptsolidconedr03", pho_trksumptsolidconedr03, &b_pho_trksumptsolidconedr03);
  fChain->SetBranchAddress("pho_trksumpthollowconedr03", pho_trksumpthollowconedr03, &b_pho_trksumpthollowconedr03);
  fChain->SetBranchAddress("pho_ntrksolidconedr03", pho_ntrksolidconedr03, &b_pho_ntrksolidconedr03);
  fChain->SetBranchAddress("pho_ntrkhollowconedr03", pho_ntrkhollowconedr03, &b_pho_ntrkhollowconedr03);
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
  fChain->SetBranchAddress("pho_conv_tk1_dzerr", pho_conv_tk1_dzerr, &b_pho_conv_tk1_dzerr);
  fChain->SetBranchAddress("pho_conv_tk1_nh", pho_conv_tk1_nh, &b_pho_conv_tk1_nh);
  fChain->SetBranchAddress("pho_conv_tk2_dz", pho_conv_tk2_dz, &b_pho_conv_tk2_dz);
  fChain->SetBranchAddress("pho_conv_tk2_dzerr", pho_conv_tk2_dzerr, &b_pho_conv_tk2_dzerr);
  fChain->SetBranchAddress("pho_conv_tk2_nh", pho_conv_tk2_nh, &b_pho_conv_tk2_nh);
  fChain->SetBranchAddress("pho_conv_ch1ch2", pho_conv_ch1ch2, &b_pho_conv_ch1ch2);
  fChain->SetBranchAddress("pho_conv_chi2", pho_conv_chi2, &b_pho_conv_chi2);
  fChain->SetBranchAddress("pho_conv_chi2_probability", pho_conv_chi2_probability, &b_pho_conv_chi2_probability);
  fChain->SetBranchAddress("pho_conv_validvtx", pho_conv_validvtx, &b_pho_conv_validvtx);
  fChain->SetBranchAddress("pho_conv_MVALikelihood", pho_conv_MVALikelihood, &b_pho_conv_MVALikelihood);
  fChain->SetBranchAddress("pho_p4", &pho_p4, &b_pho_p4);
  fChain->SetBranchAddress("pho_calopos", &pho_calopos, &b_pho_calopos);
  fChain->SetBranchAddress("pho_conv_vtx", &pho_conv_vtx, &b_pho_conv_vtx);
  fChain->SetBranchAddress("pho_conv_pair_momentum", &pho_conv_pair_momentum, &b_pho_conv_pair_momentum);
  fChain->SetBranchAddress("pho_conv_refitted_momentum", &pho_conv_refitted_momentum, &b_pho_conv_refitted_momentum);
  fChain->SetBranchAddress("pho_conv_vertexcorrected_p4", &pho_conv_vertexcorrected_p4, &b_pho_conv_vertexcorrected_p4);
  fChain->SetBranchAddress("conv_n", &conv_n, &b_conv_n);
  fChain->SetBranchAddress("conv_p4", &conv_p4, &b_conv_p4);
  fChain->SetBranchAddress("conv_ntracks", conv_ntracks, &b_conv_ntracks);
  fChain->SetBranchAddress("conv_pairinvmass", conv_pairinvmass, &b_conv_pairinvmass);
  fChain->SetBranchAddress("conv_paircotthetasep", conv_paircotthetasep, &b_conv_paircotthetasep);
  fChain->SetBranchAddress("conv_eoverp", conv_eoverp, &b_conv_eoverp);
  fChain->SetBranchAddress("conv_distofminapproach", conv_distofminapproach, &b_conv_distofminapproach);
  fChain->SetBranchAddress("conv_dphitrksatvtx", conv_dphitrksatvtx, &b_conv_dphitrksatvtx);
  fChain->SetBranchAddress("conv_dphitrksatecal", conv_dphitrksatecal, &b_conv_dphitrksatecal);
  fChain->SetBranchAddress("conv_detatrksatecal", conv_detatrksatecal, &b_conv_detatrksatecal);
  fChain->SetBranchAddress("conv_dxy", conv_dxy, &b_conv_dxy);
  fChain->SetBranchAddress("conv_dz", conv_dz, &b_conv_dz);
  fChain->SetBranchAddress("conv_lxy", conv_lxy, &b_conv_lxy);
  fChain->SetBranchAddress("conv_lz", conv_lz, &b_conv_lz);
  fChain->SetBranchAddress("conv_zofprimvtxfromtrks", conv_zofprimvtxfromtrks, &b_conv_zofprimvtxfromtrks);
  fChain->SetBranchAddress("conv_nHitsBeforeVtx", &conv_nHitsBeforeVtx, &b_conv_nHitsBeforeVtx);
  fChain->SetBranchAddress("conv_nSharedHits", conv_nSharedHits, &b_conv_nSharedHits);
  fChain->SetBranchAddress("conv_validvtx", conv_validvtx, &b_conv_validvtx);
  fChain->SetBranchAddress("conv_MVALikelihood", conv_MVALikelihood, &b_conv_MVALikelihood);
  fChain->SetBranchAddress("conv_chi2", conv_chi2, &b_conv_chi2);
  fChain->SetBranchAddress("conv_chi2_probability", conv_chi2_probability, &b_conv_chi2_probability);
  fChain->SetBranchAddress("conv_vtx_xErr", conv_vtx_xErr, &b_conv_vtx_xErr);
  fChain->SetBranchAddress("conv_vtx_yErr", conv_vtx_yErr, &b_conv_vtx_yErr);
  fChain->SetBranchAddress("conv_vtx_zErr", conv_vtx_zErr, &b_conv_vtx_zErr);
  fChain->SetBranchAddress("conv_tk1_dz", conv_tk1_dz, &b_conv_tk1_dz);
  fChain->SetBranchAddress("conv_tk2_dz", conv_tk2_dz, &b_conv_tk2_dz);
  fChain->SetBranchAddress("conv_tk1_dzerr", conv_tk1_dzerr, &b_conv_tk1_dzerr);
  fChain->SetBranchAddress("conv_tk2_dzerr", conv_tk2_dzerr, &b_conv_tk2_dzerr);
  fChain->SetBranchAddress("conv_tk1_nh", conv_tk1_nh, &b_conv_tk1_nh);
  fChain->SetBranchAddress("conv_tk2_nh", conv_tk2_nh, &b_conv_tk2_nh);
  fChain->SetBranchAddress("conv_ch1ch2", conv_ch1ch2, &b_conv_ch1ch2);
  fChain->SetBranchAddress("conv_tk1_d0", conv_tk1_d0, &b_conv_tk1_d0);
  fChain->SetBranchAddress("conv_tk1_pout", conv_tk1_pout, &b_conv_tk1_pout);
  fChain->SetBranchAddress("conv_tk1_pin", conv_tk1_pin, &b_conv_tk1_pin);
  fChain->SetBranchAddress("conv_tk2_d0", conv_tk2_d0, &b_conv_tk2_d0);
  fChain->SetBranchAddress("conv_tk2_pout", conv_tk2_pout, &b_conv_tk2_pout);
  fChain->SetBranchAddress("conv_tk2_pin", conv_tk2_pin, &b_conv_tk2_pin);
  fChain->SetBranchAddress("conv_vtx", &conv_vtx, &b_conv_vtx);
  fChain->SetBranchAddress("conv_pair_momentum", &conv_pair_momentum, &b_conv_pair_momentum);
  fChain->SetBranchAddress("conv_refitted_momentum", &conv_refitted_momentum, &b_conv_refitted_momentum);
  if (fChain->FindLeaf("process_id")!=NULL) fChain->SetBranchAddress("process_id", &process_id, &b_process_id);
  if (fChain->FindLeaf("weight")!=NULL) fChain->SetBranchAddress("weight", &weight, &b_weight);
  if (fChain->FindLeaf("pthat")!=NULL) fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
  if (fChain->FindLeaf("gp_n")!=NULL) fChain->SetBranchAddress("gp_n", &gp_n, &b_gp_n);
  if (fChain->FindLeaf("gp_p4")!=NULL) fChain->SetBranchAddress("gp_p4", &gp_p4, &b_gp_p4);
  if (fChain->FindLeaf("gp_vtx")!=NULL) fChain->SetBranchAddress("gp_vtx", &gp_vtx, &b_gp_vtx);
  if (fChain->FindLeaf("gp_status")!=NULL) fChain->SetBranchAddress("gp_status", gp_status, &b_gp_status);
  if (fChain->FindLeaf("gp_pdgid")!=NULL) fChain->SetBranchAddress("gp_pdgid", gp_pdgid, &b_gp_pdgid);
  if (fChain->FindLeaf("gp_mother")!=NULL) fChain->SetBranchAddress("gp_mother", gp_mother, &b_gp_mother);
  if (fChain->FindLeaf("gv_n")!=NULL) fChain->SetBranchAddress("gv_n", &gv_n, &b_gv_n);
  if (fChain->FindLeaf("gv_pos")!=NULL) fChain->SetBranchAddress("gv_pos", &gv_pos, &b_gv_pos);
  if (fChain->FindLeaf("pu_n")!=NULL) fChain->SetBranchAddress("pu_n", &pu_n, &b_pu_n);
  if (fChain->FindLeaf("pu_zpos")!=NULL) fChain->SetBranchAddress("pu_zpos", &pu_zpos, &b_pu_zpos);
  if (fChain->FindLeaf("pu_sumpt_lowpt")!=NULL) fChain->SetBranchAddress("pu_sumpt_lowpt", &pu_sumpt_lowpt, &b_pu_sumpt_lowpt);
  if (fChain->FindLeaf("pu_sumpt_highpt")!=NULL) fChain->SetBranchAddress("pu_sumpt_highpt", &pu_sumpt_highpt, &b_pu_sumpt_highpt);
  if (fChain->FindLeaf("pu_ntrks_lowpt")!=NULL) fChain->SetBranchAddress("pu_ntrks_lowpt", &pu_ntrks_lowpt, &b_pu_ntrks_lowpt);
  if (fChain->FindLeaf("pu_ntrks_highpt")!=NULL) fChain->SetBranchAddress("pu_ntrks_highpt", &pu_ntrks_highpt, &b_pu_ntrks_highpt);
  fChain->SetBranchAddress("vtx_std_n", &vtx_std_n, &b_vtx_std_n);
  fChain->SetBranchAddress("vtx_std_ntks", vtx_std_ntks, &b_vtx_std_ntks);
  fChain->SetBranchAddress("vtx_std_x2dof", vtx_std_x2dof, &b_vtx_std_x2dof);
  fChain->SetBranchAddress("vtx_std_xyz", &vtx_std_xyz, &b_vtx_std_xyz);
  fChain->SetBranchAddress("vtx_std_dxdydz", &vtx_std_dxdydz, &b_vtx_std_dxdydz);
  fChain->SetBranchAddress("vtx_std_ndof", vtx_std_ndof, &b_vtx_std_ndof);
  fChain->SetBranchAddress("rho", &rho, &b_rho);
  fChain->SetBranchAddress("bs_xyz", &bs_xyz, &b_bs_xyz);
  fChain->SetBranchAddress("bs_sigmaZ", &bs_sigmaZ, &b_bs_sigmaZ);
  fChain->SetBranchAddress("bs_x0Error", &bs_x0Error, &b_bs_x0Error);
  fChain->SetBranchAddress("bs_y0Error", &bs_y0Error, &b_bs_y0Error);
  fChain->SetBranchAddress("bs_z0Error", &bs_z0Error, &b_bs_z0Error);
  fChain->SetBranchAddress("bs_sigmaZ0Error", &bs_sigmaZ0Error, &b_bs_sigmaZ0Error);
  fChain->SetBranchAddress("met_tcmet", &met_tcmet, &b_met_tcmet);
  fChain->SetBranchAddress("met_phi_tcmet", &met_phi_tcmet, &b_met_phi_tcmet);
  if (fChain->FindLeaf("hlt1_bit")!=NULL) fChain->SetBranchAddress("hlt1_bit", &hlt1_bit, &b_hlt1_bit);
  if (fChain->FindLeaf("hlt_n")!=NULL) fChain->SetBranchAddress("hlt_n", &hlt_n, &b_hlt_n);
  if (fChain->FindLeaf("hlt_candpath")!=NULL) fChain->SetBranchAddress("hlt_candpath", &hlt_candpath, &b_hlt_candpath);
  if (fChain->FindLeaf("hlt_path_names_HLT1")!=NULL) fChain->SetBranchAddress("hlt_path_names_HLT1", &hlt_path_names_HLT1, &b_hlt_path_names_HLT1);
  if (fChain->FindLeaf("hlt_p4")!=NULL) fChain->SetBranchAddress("hlt_p4", &hlt_p4, &b_hlt_p4);
  if (fChain->FindLeaf("l1emiso_n")!=NULL) fChain->SetBranchAddress("l1emiso_n", &l1emiso_n, &b_l1emiso_n);
  if (fChain->FindLeaf("l1emiso_et")!=NULL) fChain->SetBranchAddress("l1emiso_et", l1emiso_et, &b_l1emiso_et);
  if (fChain->FindLeaf("l1emiso_eta")!=NULL) fChain->SetBranchAddress("l1emiso_eta", l1emiso_eta, &b_l1emiso_eta);
  if (fChain->FindLeaf("l1emiso_phi")!=NULL) fChain->SetBranchAddress("l1emiso_phi", l1emiso_phi, &b_l1emiso_phi);
  if (fChain->FindLeaf("l1emnoniso_n")!=NULL) fChain->SetBranchAddress("l1emnoniso_n", &l1emnoniso_n, &b_l1emnoniso_n);
  if (fChain->FindLeaf("l1emnoniso_et")!=NULL) fChain->SetBranchAddress("l1emnoniso_et", l1emnoniso_et, &b_l1emnoniso_et);
  if (fChain->FindLeaf("l1emnoniso_eta")!=NULL) fChain->SetBranchAddress("l1emnoniso_eta", l1emnoniso_eta, &b_l1emnoniso_eta);
  if (fChain->FindLeaf("l1emnoniso_phi")!=NULL) fChain->SetBranchAddress("l1emnoniso_phi", l1emnoniso_phi, &b_l1emnoniso_phi);
  if (fChain->FindLeaf("l1bits_phy")!=NULL) fChain->SetBranchAddress("l1bits_phy", &l1bits_phy, &b_l1bits_phy);
  if (fChain->FindLeaf("l1_labels")!=NULL) fChain->SetBranchAddress("l1_labels", &l1_labels_, &b_l1_labels_);
  if (fChain->FindLeaf("l1_labels.first")!=NULL) fChain->SetBranchAddress("l1_labels.first", &l1_labels_first, &b_l1_labels_first);
  if (fChain->FindLeaf("l1_labels.second")!=NULL) fChain->SetBranchAddress("l1_labels.second", &l1_labels_second, &b_l1_labels_second);
  fChain->SetBranchAddress("vtx_std_diphopt", &vtx_std_diphopt, &b_vtx_std_diphopt);
  fChain->SetBranchAddress("vtx_std_nch", &vtx_std_nch, &b_vtx_std_nch);
  fChain->SetBranchAddress("vtx_std_ptmax", &vtx_std_ptmax, &b_vtx_std_ptmax);
  fChain->SetBranchAddress("vtx_std_sumpt", &vtx_std_sumpt, &b_vtx_std_sumpt);
  fChain->SetBranchAddress("vtx_std_ptvtx", &vtx_std_ptvtx, &b_vtx_std_ptvtx);
  fChain->SetBranchAddress("vtx_std_acosA", &vtx_std_acosA, &b_vtx_std_acosA);
  fChain->SetBranchAddress("vtx_std_ptasym", &vtx_std_ptasym, &b_vtx_std_ptasym);
  fChain->SetBranchAddress("vtx_std_ptbal", &vtx_std_ptbal, &b_vtx_std_ptbal);
  fChain->SetBranchAddress("vtx_std_nchthr", &vtx_std_nchthr, &b_vtx_std_nchthr);
  fChain->SetBranchAddress("vtx_std_ptmax3", &vtx_std_ptmax3, &b_vtx_std_ptmax3);
  fChain->SetBranchAddress("vtx_std_thrust", &vtx_std_thrust, &b_vtx_std_thrust);
  fChain->SetBranchAddress("vtx_std_sumweight", &vtx_std_sumweight, &b_vtx_std_sumweight);
  fChain->SetBranchAddress("vtx_std_sumpt2", &vtx_std_sumpt2, &b_vtx_std_sumpt2);
  fChain->SetBranchAddress("vtx_std_ptratio", &vtx_std_ptratio, &b_vtx_std_ptratio);
  fChain->SetBranchAddress("vtx_std_pzasym", &vtx_std_pzasym, &b_vtx_std_pzasym);
  fChain->SetBranchAddress("vtx_std_spher", &vtx_std_spher, &b_vtx_std_spher);
  fChain->SetBranchAddress("vtx_std_aplan", &vtx_std_aplan, &b_vtx_std_aplan);
  fChain->SetBranchAddress("vtx_std_sumpr", &vtx_std_sumpr, &b_vtx_std_sumpr);
  fChain->SetBranchAddress("vtx_std_sumawy", &vtx_std_sumawy, &b_vtx_std_sumawy);
  fChain->SetBranchAddress("vtx_std_sumtrv", &vtx_std_sumtrv, &b_vtx_std_sumtrv);
  fChain->SetBranchAddress("vtx_std_sumtwd", &vtx_std_sumtwd, &b_vtx_std_sumtwd);
  fChain->SetBranchAddress("vtx_std_awytwdasym", &vtx_std_awytwdasym, &b_vtx_std_awytwdasym);
  fChain->SetBranchAddress("vtx_std_pho1", &vtx_std_pho1, &b_vtx_std_pho1);
  fChain->SetBranchAddress("vtx_std_pho2", &vtx_std_pho2, &b_vtx_std_pho2);
  fChain->SetBranchAddress("pho_matchingConv", &pho_matchingConv, &b_pho_matchingConv);
  fChain->SetBranchAddress("vtx_std_ranked_list", &vtx_std_ranked_list, &b_vtx_std_ranked_list);
  fChain->SetBranchAddress("vtx_std_sel", &vtx_std_sel, &b_vtx_std_sel);
  fChain->SetBranchAddress("pho_tkiso_recvtx_030_002_0000_10_01", &pho_tkiso_recvtx_030_002_0000_10_01, &b_pho_tkiso_recvtx_030_002_0000_10_01);
  fChain->SetBranchAddress("pho_tkiso_badvtx_040_002_0000_10_01", pho_tkiso_badvtx_040_002_0000_10_01, &b_pho_tkiso_badvtx_040_002_0000_10_01);
  fChain->SetBranchAddress("pho_drtotk_25_99", pho_drtotk_25_99, &b_pho_drtotk_25_99);
  fChain->SetBranchAddress("pho_cic6cutlevel_lead", &pho_cic6cutlevel_lead, &b_pho_cic6cutlevel_lead);
  fChain->SetBranchAddress("pho_cic6passcuts_lead", &pho_cic6passcuts_lead, &b_pho_cic6passcuts_lead);
  fChain->SetBranchAddress("pho_cic6cutlevel_sublead", &pho_cic6cutlevel_sublead, &b_pho_cic6cutlevel_sublead);
  fChain->SetBranchAddress("pho_cic6passcuts_sublead", &pho_cic6passcuts_sublead, &b_pho_cic6passcuts_sublead);
  fChain->SetBranchAddress("pho_cic4cutlevel_lead", &pho_cic4cutlevel_lead, &b_pho_cic4cutlevel_lead);
  fChain->SetBranchAddress("pho_cic4passcuts_lead", &pho_cic4passcuts_lead, &b_pho_cic4passcuts_lead);
  fChain->SetBranchAddress("pho_cic4cutlevel_sublead", &pho_cic4cutlevel_sublead, &b_pho_cic4cutlevel_sublead);
  fChain->SetBranchAddress("pho_cic4passcuts_sublead", &pho_cic4passcuts_sublead, &b_pho_cic4passcuts_sublead);

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

Bool_t sdaReader::FindLeaf(const char* leafname) {
  if (fChain->FindLeaf(leafname)==NULL) return false;
  return true;
}

Bool_t sdaReader::FindBranch(const char* leafname) {
  if (fChain->FindBranch(leafname)==NULL) return false;
  return true;
}
