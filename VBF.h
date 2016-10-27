//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Oct 18 11:36:24 2016 by ROOT version 6.06/08
// from TTree Nominal/Nominal
// found on file: VBF.root
//////////////////////////////////////////////////////////

#ifndef VBF_h
#define VBF_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class VBF {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<float>   *weightSysts;
   Int_t           runNumber;
   Int_t           lumiBlock;
   ULong64_t       eventNumber;
   Int_t           npv;
   Float_t         mcWeight;
   Float_t         eventWeight;
   Float_t         BJetTriggerWeight;
   Int_t           mcChannelNumber;
   Int_t           nJets;
   Int_t           nJets20pt;
   Int_t           nJets30pt;
   Int_t           nJets40pt;
   Int_t           nJets50pt;
   Int_t           nJets60pt;
   Int_t           nTightMv2c20;
   Int_t           nTightMv2c10;
   Int_t           nMediumMv2c10;
   Int_t           nLooseMv2c10;
   vector<float>   *pT;
   vector<float>   *phi;
   vector<float>   *eta;
   vector<float>   *mv2c10;
   vector<float>   *mv2c20;
   vector<float>   *jetWidth;
   vector<int>     *truthLabel;
   vector<int>     *partonTruthLabelID;
   Int_t           whoIsJ1;
   Int_t           whoIsJ2;
   Int_t           whoIsB1;
   Int_t           whoIsB2;
   Float_t         mBB;
   Float_t         mBB_no_corr;
   Float_t         dRBB;
   Float_t         dRBB_no_corr;
   Float_t         dPhiBB;
   Float_t         dEtaBB;
   Float_t         pTBB;
   Float_t         pTBB_no_corr;
   Float_t         mJJ;
   Float_t         dRJJ;
   Float_t         dPhiJJ;
   Float_t         dEtaJJ;
   Float_t         pTJJ;
   Float_t         minEta;
   Float_t         maxEta;
   Int_t           passCURRENT;
   Int_t           passATLAS;
   Int_t           passCMS;
   Int_t           passHYBRID;
   Int_t           whoIsB1_CURRENT;
   Int_t           whoIsB2_CURRENT;
   Int_t           whoIsB1_ATLAS;
   Int_t           whoIsB2_ATLAS;
   Int_t           whoIsB1_CMS;
   Int_t           whoIsB2_CMS;
   Int_t           whoIsB1_HYBRID;
   Int_t           whoIsB2_HYBRID;
   Float_t         pTJ1;
   Float_t         pTJ2;
   Float_t         pTB1;
   Float_t         pTB2;
   Float_t         pTB1_no_corr;
   Float_t         pTB2_no_corr;
   Float_t         etaJ1;
   Float_t         etaJ2;
   Float_t         etaB1;
   Float_t         etaB2;
   Float_t         etaB1_no_corr;
   Float_t         etaB2_no_corr;
   Float_t         dRB1J1;
   Float_t         dRB1J2;
   Float_t         dRB2J1;
   Float_t         dRB2J2;
   Float_t         mindRJ1;
   Float_t         mindRJ2;
   Float_t         mindRB1;
   Float_t         mindRB2;
   Float_t         TruthLabelB1;
   Float_t         TruthLabelB2;
   Float_t         TruthLabelPartonB1;
   Float_t         TruthLabelPartonB2;
   Float_t         HadronConeExclTruthLabelB1;
   Float_t         HadronConeExclTruthLabelB2;
   Float_t         MV2c20B1;
   Float_t         MV2c20B2;
   Float_t         MV2c10B1;
   Float_t         MV2c10B2;
   Float_t         MV2c10J1;
   Float_t         MV2c10J2;
   Float_t         WidthJ1;
   Float_t         WidthJ2;
   Float_t         NTrk1000PVJ1;
   Float_t         NTrk1000PVJ2;
   Float_t         NTrk500PVJ1;
   Float_t         NTrk500PVJ2;
   Float_t         max_J1J2;
   Float_t         eta_J_star;
   Float_t         cosTheta_MVA;
   Float_t         HT_soft;
   Float_t         HT_MVA;
   Float_t         BDT;
   Int_t           passHLT_g10_loose;
   Int_t           passHLT_g15_loose_L1EM7;
   Int_t           passHLT_g20_loose_L1EM12;
   Int_t           passHLT_g40_loose_L1EM15;
   Int_t           passHLT_g25_loose_L1EM15;
   Int_t           passL1_J40_0ETA25_2J25_J20_31ETA49;
   Int_t           passL1_J40_0ETA25_2J25;
   Int_t           passL1_J20_31ETA49;
   Int_t           passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490;
   Int_t           passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split;
   Int_t           passHLT_j45_320eta490;
   Int_t           passHLT_j80_0eta240_j60_j45_320eta490;
   Int_t           passHLT_j80_0eta240_j60;
   Int_t           passL1_J40_0ETA25_2J15_31ETA49;
   Int_t           passL1_J40_0ETA25;
   Int_t           passL1_2J15_31ETA49;
   Int_t           passHLT_j80_bmv2c2085_split_2j60_320eta490;
   Int_t           passHLT_j80_bmv2c2085_split;
   Int_t           passHLT_2j60_320eta490;
   Int_t           passHLT_j80_0eta240_2j60_320eta490;
   Int_t           passHLT_j80_0eta240;
   Int_t           passL1_4J20;
   Int_t           passHLT_2j55_bmv2c2077_split_2j55;
   Int_t           passHLT_2j45_bmv2c2070_split_2j45;
   Int_t           passL1_4J15;
   Int_t           passHLT_2j35_bmv2c2070_split_2j35_L14J15;
   Int_t           passHLT_2j35_bmv2c2060_split_2j35_L14J15;
   Int_t           passHLT_2j35_bmv2c2050_split_2j35_L14J15;
   Int_t           passHLT_j75_bmv2c2060_split_3j75_L14J15;
   Int_t           passHLT_j75_bmv2c2070_split_3j75_L14J15;
   Int_t           passHLT_g140_loose;
   Int_t           passHLT_g25_medium;
   Int_t           passHLT_2j45_bmv2c2077_split_2j45_L14J15;
   Int_t           passHLT_2j45_bmv2c2070_split_2j45_L14J15;
   Int_t           passHLT_4j45;
   Int_t           passHLT_j15;
   Int_t           passHLT_j25;
   Int_t           passHLT_j60;
   Int_t           isActiveL1_J40_0ETA25_2J25_J20_31ETA49;
   Int_t           isActiveHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490;
   Int_t           isActiveHLT_j80_0eta240_j60_j45_320eta490;
   Int_t           isActiveL1_J40_0ETA25_2J15_31ETA49;
   Int_t           isActiveHLT_j80_bmv2c2085_split_2j60_320eta490;
   Int_t           isActiveHLT_j80_0eta240_2j60_320eta490;
   Int_t           isActiveL1_4J20;
   Int_t           isActiveHLT_2j55_bmv2c2077_split_2j55;
   Int_t           isActiveHLT_2j45_bmv2c2070_split_2j45;
   Int_t           isActiveL1_4J15;
   Int_t           isActiveHLT_2j35_bmv2c2070_split_2j35_L14J15;
   Int_t           isActiveHLT_2j35_bmv2c2060_split_2j35_L14J15;
   Int_t           isActiveHLT_2j35_bmv2c2050_split_2j35_L14J15;
   Int_t           isActiveHLT_j75_bmv2c2060_split_3j75_L14J15;
   Int_t           isActiveHLT_j75_bmv2c2070_split_3j75_L14J15;
   Int_t           isActiveHLT_2j45_bmv2c2077_split_2j45_L14J15;
   Int_t           isActiveHLT_2j45_bmv2c2070_split_2j45_L14J15;
   Int_t           isActiveHLT_4j45;
   Float_t         prescaleHLT_g10_loose;
   Float_t         prescaleHLT_g15_loose_L1EM7;
   Float_t         prescaleHLT_g20_loose_L1EM12;
   Float_t         prescaleHLT_g40_loose_L1EM15;
   Float_t         prescaleHLT_g25_loose_L1EM15;
   Float_t         prescaleL1_J40_0ETA25_2J25_J20_31ETA49;
   Float_t         prescaleHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490;
   Float_t         prescaleHLT_j80_0eta240_j60_j45_320eta490;
   Float_t         prescaleL1_J40_0ETA25_2J15_31ETA49;
   Float_t         prescaleHLT_j80_bmv2c2085_split_2j60_320eta490;
   Float_t         prescaleHLT_j80_0eta240_2j60_320eta490;
   Float_t         prescaleL1_4J20;
   Float_t         prescaleHLT_2j55_bmv2c2077_split_2j55;
   Float_t         prescaleHLT_2j45_bmv2c2070_split_2j45;
   Float_t         prescaleL1_4J15;
   Float_t         prescaleHLT_2j35_bmv2c2070_split_2j35_L14J15;
   Float_t         prescaleHLT_2j35_bmv2c2060_split_2j35_L14J15;
   Float_t         prescaleHLT_2j35_bmv2c2050_split_2j35_L14J15;
   Float_t         prescaleHLT_j75_bmv2c2060_split_3j75_L14J15;
   Float_t         prescaleHLT_j75_bmv2c2070_split_3j75_L14J15;
   Float_t         prescaleHLT_g140_loose;
   Float_t         prescaleHLT_g25_medium;
   Float_t         prescaleHLT_2j45_bmv2c2077_split_2j45_L14J15;
   Float_t         prescaleHLT_2j45_bmv2c2070_split_2j45_L14J15;
   Float_t         prescaleHLT_4j45;

   // List of branches
   TBranch        *b_weightSysts;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_mcWeight;   //!
   TBranch        *b_eventWeight;   //!
   TBranch        *b_BJetTriggerWeight;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_nJets;   //!
   TBranch        *b_nJets20pt;   //!
   TBranch        *b_nJets30pt;   //!
   TBranch        *b_nJets40pt;   //!
   TBranch        *b_nJets50pt;   //!
   TBranch        *b_nJets60pt;   //!
   TBranch        *b_nTightMv2c20;   //!
   TBranch        *b_nTightMv2c10;   //!
   TBranch        *b_nMediumMv2c10;   //!
   TBranch        *b_nLooseMv2c10;   //!
   TBranch        *b_pT;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_mv2c10;   //!
   TBranch        *b_mv2c20;   //!
   TBranch        *b_jetWidth;   //!
   TBranch        *b_truthLabel;   //!
   TBranch        *b_partonTruthLabelID;   //!
   TBranch        *b_whoIsJ1;   //!
   TBranch        *b_whoIsJ2;   //!
   TBranch        *b_whoIsB1;   //!
   TBranch        *b_whoIsB2;   //!
   TBranch        *b_mBB;   //!
   TBranch        *b_mBB_no_corr;   //!
   TBranch        *b_dRBB;   //!
   TBranch        *b_dRBB_no_corr;   //!
   TBranch        *b_dPhiBB;   //!
   TBranch        *b_dEtaBB;   //!
   TBranch        *b_pTBB;   //!
   TBranch        *b_pTBB_no_corr;   //!
   TBranch        *b_mJJ;   //!
   TBranch        *b_dRJJ;   //!
   TBranch        *b_dPhiJJ;   //!
   TBranch        *b_dEtaJJ;   //!
   TBranch        *b_pTJJ;   //!
   TBranch        *b_minEta;   //!
   TBranch        *b_maxEta;   //!
   TBranch        *b_passCURRENT;   //!
   TBranch        *b_passATLAS;   //!
   TBranch        *b_passCMS;   //!
   TBranch        *b_passHYBRID;   //!
   TBranch        *b_whoIsB1_CURRENT;   //!
   TBranch        *b_whoIsB2_CURRENT;   //!
   TBranch        *b_whoIsB1_ATLAS;   //!
   TBranch        *b_whoIsB2_ATLAS;   //!
   TBranch        *b_whoIsB1_CMS;   //!
   TBranch        *b_whoIsB2_CMS;   //!
   TBranch        *b_whoIsB1_HYBRID;   //!
   TBranch        *b_whoIsB2_HYBRID;   //!
   TBranch        *b_pTJ1;   //!
   TBranch        *b_pTJ2;   //!
   TBranch        *b_pTB1;   //!
   TBranch        *b_pTB2;   //!
   TBranch        *b_pTB1_no_corr;   //!
   TBranch        *b_pTB2_no_corr;   //!
   TBranch        *b_etaJ1;   //!
   TBranch        *b_etaJ2;   //!
   TBranch        *b_etaB1;   //!
   TBranch        *b_etaB2;   //!
   TBranch        *b_etaB1_no_corr;   //!
   TBranch        *b_etaB2_no_corr;   //!
   TBranch        *b_dRB1J1;   //!
   TBranch        *b_dRB1J2;   //!
   TBranch        *b_dRB2J1;   //!
   TBranch        *b_dRB2J2;   //!
   TBranch        *b_mindRJ1;   //!
   TBranch        *b_mindRJ2;   //!
   TBranch        *b_mindRB1;   //!
   TBranch        *b_mindRB2;   //!
   TBranch        *b_TruthLabelB1;   //!
   TBranch        *b_TruthLabelB2;   //!
   TBranch        *b_TruthLabelPartonB1;   //!
   TBranch        *b_TruthLabelPartonB2;   //!
   TBranch        *b_HadronConeExclTruthLabelB1;   //!
   TBranch        *b_HadronConeExclTruthLabelB2;   //!
   TBranch        *b_MV2c20B1;   //!
   TBranch        *b_MV2c20B2;   //!
   TBranch        *b_MV2c10B1;   //!
   TBranch        *b_MV2c10B2;   //!
   TBranch        *b_MV2c10J1;   //!
   TBranch        *b_MV2c10J2;   //!
   TBranch        *b_WidthJ1;   //!
   TBranch        *b_WidthJ2;   //!
   TBranch        *b_NTrk1000PVJ1;   //!
   TBranch        *b_NTrk1000PVJ2;   //!
   TBranch        *b_NTrk500PVJ1;   //!
   TBranch        *b_NTrk500PVJ2;   //!
   TBranch        *b_max_J1J2;   //!
   TBranch        *b_eta_J_star;   //!
   TBranch        *b_cosTheta_MVA;   //!
   TBranch        *b_HT_soft;   //!
   TBranch        *b_HT_MVA;   //!
   TBranch        *b_BDT;   //!
   TBranch        *b_passHLT_g10_loose;   //!
   TBranch        *b_passHLT_g15_loose_L1EM7;   //!
   TBranch        *b_passHLT_g20_loose_L1EM12;   //!
   TBranch        *b_passHLT_g40_loose_L1EM15;   //!
   TBranch        *b_passHLT_g25_loose_L1EM15;   //!
   TBranch        *b_passL1_J40_0ETA25_2J25_J20_31ETA49;   //!
   TBranch        *b_passL1_J40_0ETA25_2J25;   //!
   TBranch        *b_passL1_J20_31ETA49;   //!
   TBranch        *b_passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490;   //!
   TBranch        *b_passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split;   //!
   TBranch        *b_passHLT_j45_320eta490;   //!
   TBranch        *b_passHLT_j80_0eta240_j60_j45_320eta490;   //!
   TBranch        *b_passHLT_j80_0eta240_j60;   //!
   TBranch        *b_passL1_J40_0ETA25_2J15_31ETA49;   //!
   TBranch        *b_passL1_J40_0ETA25;   //!
   TBranch        *b_passL1_2J15_31ETA49;   //!
   TBranch        *b_passHLT_j80_bmv2c2085_split_2j60_320eta490;   //!
   TBranch        *b_passHLT_j80_bmv2c2085_split;   //!
   TBranch        *b_passHLT_2j60_320eta490;   //!
   TBranch        *b_passHLT_j80_0eta240_2j60_320eta490;   //!
   TBranch        *b_passHLT_j80_0eta240;   //!
   TBranch        *b_passL1_4J20;   //!
   TBranch        *b_passHLT_2j55_bmv2c2077_split_2j55;   //!
   TBranch        *b_passHLT_2j45_bmv2c2070_split_2j45;   //!
   TBranch        *b_passL1_4J15;   //!
   TBranch        *b_passHLT_2j35_bmv2c2070_split_2j35_L14J15;   //!
   TBranch        *b_passHLT_2j35_bmv2c2060_split_2j35_L14J15;   //!
   TBranch        *b_passHLT_2j35_bmv2c2050_split_2j35_L14J15;   //!
   TBranch        *b_passHLT_j75_bmv2c2060_split_3j75_L14J15;   //!
   TBranch        *b_passHLT_j75_bmv2c2070_split_3j75_L14J15;   //!
   TBranch        *b_passHLT_g140_loose;   //!
   TBranch        *b_passHLT_g25_medium;   //!
   TBranch        *b_passHLT_2j45_bmv2c2077_split_2j45_L14J15;   //!
   TBranch        *b_passHLT_2j45_bmv2c2070_split_2j45_L14J15;   //!
   TBranch        *b_passHLT_4j45;   //!
   TBranch        *b_passHLT_j15;   //!
   TBranch        *b_passHLT_j25;   //!
   TBranch        *b_passHLT_j60;   //!
   TBranch        *b_isActiveL1_J40_0ETA25_2J25_J20_31ETA49;   //!
   TBranch        *b_isActiveHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490;   //!
   TBranch        *b_isActiveHLT_j80_0eta240_j60_j45_320eta490;   //!
   TBranch        *b_isActiveL1_J40_0ETA25_2J15_31ETA49;   //!
   TBranch        *b_isActiveHLT_j80_bmv2c2085_split_2j60_320eta490;   //!
   TBranch        *b_isActiveHLT_j80_0eta240_2j60_320eta490;   //!
   TBranch        *b_isActiveL1_4J20;   //!
   TBranch        *b_isActiveHLT_2j55_bmv2c2077_split_2j55;   //!
   TBranch        *b_isActiveHLT_2j45_bmv2c2070_split_2j45;   //!
   TBranch        *b_isActiveL1_4J15;   //!
   TBranch        *b_isActiveHLT_2j35_bmv2c2070_split_2j35_L14J15;   //!
   TBranch        *b_isActiveHLT_2j35_bmv2c2060_split_2j35_L14J15;   //!
   TBranch        *b_isActiveHLT_2j35_bmv2c2050_split_2j35_L14J15;   //!
   TBranch        *b_isActiveHLT_j75_bmv2c2060_split_3j75_L14J15;   //!
   TBranch        *b_isActiveHLT_j75_bmv2c2070_split_3j75_L14J15;   //!
   TBranch        *b_isActiveHLT_2j45_bmv2c2077_split_2j45_L14J15;   //!
   TBranch        *b_isActiveHLT_2j45_bmv2c2070_split_2j45_L14J15;   //!
   TBranch        *b_isActiveHLT_4j45;   //!
   TBranch        *b_prescaleHLT_g10_loose;   //!
   TBranch        *b_prescaleHLT_g15_loose_L1EM7;   //!
   TBranch        *b_prescaleHLT_g20_loose_L1EM12;   //!
   TBranch        *b_prescaleHLT_g40_loose_L1EM15;   //!
   TBranch        *b_prescaleHLT_g25_loose_L1EM15;   //!
   TBranch        *b_prescaleL1_J40_0ETA25_2J25_J20_31ETA49;   //!
   TBranch        *b_prescaleHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490;   //!
   TBranch        *b_prescaleHLT_j80_0eta240_j60_j45_320eta490;   //!
   TBranch        *b_prescaleL1_J40_0ETA25_2J15_31ETA49;   //!
   TBranch        *b_prescaleHLT_j80_bmv2c2085_split_2j60_320eta490;   //!
   TBranch        *b_prescaleHLT_j80_0eta240_2j60_320eta490;   //!
   TBranch        *b_prescaleL1_4J20;   //!
   TBranch        *b_prescaleHLT_2j55_bmv2c2077_split_2j55;   //!
   TBranch        *b_prescaleHLT_2j45_bmv2c2070_split_2j45;   //!
   TBranch        *b_prescaleL1_4J15;   //!
   TBranch        *b_prescaleHLT_2j35_bmv2c2070_split_2j35_L14J15;   //!
   TBranch        *b_prescaleHLT_2j35_bmv2c2060_split_2j35_L14J15;   //!
   TBranch        *b_prescaleHLT_2j35_bmv2c2050_split_2j35_L14J15;   //!
   TBranch        *b_prescaleHLT_j75_bmv2c2060_split_3j75_L14J15;   //!
   TBranch        *b_prescaleHLT_j75_bmv2c2070_split_3j75_L14J15;   //!
   TBranch        *b_prescaleHLT_g140_loose;   //!
   TBranch        *b_prescaleHLT_g25_medium;   //!
   TBranch        *b_prescaleHLT_2j45_bmv2c2077_split_2j45_L14J15;   //!
   TBranch        *b_prescaleHLT_2j45_bmv2c2070_split_2j45_L14J15;   //!
   TBranch        *b_prescaleHLT_4j45;   //!

   VBF(TTree *tree=0);
   virtual ~VBF();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef VBF_cxx
VBF::VBF(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("VBF.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("VBF.root");
      }
      f->GetObject("Nominal",tree);

   }
   Init(tree);
}

VBF::~VBF()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t VBF::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t VBF::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void VBF::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   weightSysts = 0;
   pT = 0;
   phi = 0;
   eta = 0;
   mv2c10 = 0;
   mv2c20 = 0;
   jetWidth = 0;
   truthLabel = 0;
   partonTruthLabelID = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("weightSysts", &weightSysts, &b_weightSysts);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("mcWeight", &mcWeight, &b_mcWeight);
   fChain->SetBranchAddress("eventWeight", &eventWeight, &b_eventWeight);
   fChain->SetBranchAddress("BJetTriggerWeight", &BJetTriggerWeight, &b_BJetTriggerWeight);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   fChain->SetBranchAddress("nJets20pt", &nJets20pt, &b_nJets20pt);
   fChain->SetBranchAddress("nJets30pt", &nJets30pt, &b_nJets30pt);
   fChain->SetBranchAddress("nJets40pt", &nJets40pt, &b_nJets40pt);
   fChain->SetBranchAddress("nJets50pt", &nJets50pt, &b_nJets50pt);
   fChain->SetBranchAddress("nJets60pt", &nJets60pt, &b_nJets60pt);
   fChain->SetBranchAddress("nTightMv2c20", &nTightMv2c20, &b_nTightMv2c20);
   fChain->SetBranchAddress("nTightMv2c10", &nTightMv2c10, &b_nTightMv2c10);
   fChain->SetBranchAddress("nMediumMv2c10", &nMediumMv2c10, &b_nMediumMv2c10);
   fChain->SetBranchAddress("nLooseMv2c10", &nLooseMv2c10, &b_nLooseMv2c10);
   fChain->SetBranchAddress("pT", &pT, &b_pT);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("eta", &eta, &b_eta);
   fChain->SetBranchAddress("mv2c10", &mv2c10, &b_mv2c10);
   fChain->SetBranchAddress("mv2c20", &mv2c20, &b_mv2c20);
   fChain->SetBranchAddress("jetWidth", &jetWidth, &b_jetWidth);
   fChain->SetBranchAddress("truthLabel", &truthLabel, &b_truthLabel);
   fChain->SetBranchAddress("partonTruthLabelID", &partonTruthLabelID, &b_partonTruthLabelID);
   fChain->SetBranchAddress("whoIsJ1", &whoIsJ1, &b_whoIsJ1);
   fChain->SetBranchAddress("whoIsJ2", &whoIsJ2, &b_whoIsJ2);
   fChain->SetBranchAddress("whoIsB1", &whoIsB1, &b_whoIsB1);
   fChain->SetBranchAddress("whoIsB2", &whoIsB2, &b_whoIsB2);
   fChain->SetBranchAddress("mBB", &mBB, &b_mBB);
   fChain->SetBranchAddress("mBB_no_corr", &mBB_no_corr, &b_mBB_no_corr);
   fChain->SetBranchAddress("dRBB", &dRBB, &b_dRBB);
   fChain->SetBranchAddress("dRBB_no_corr", &dRBB_no_corr, &b_dRBB_no_corr);
   fChain->SetBranchAddress("dPhiBB", &dPhiBB, &b_dPhiBB);
   fChain->SetBranchAddress("dEtaBB", &dEtaBB, &b_dEtaBB);
   fChain->SetBranchAddress("pTBB", &pTBB, &b_pTBB);
   fChain->SetBranchAddress("pTBB_no_corr", &pTBB_no_corr, &b_pTBB_no_corr);
   fChain->SetBranchAddress("mJJ", &mJJ, &b_mJJ);
   fChain->SetBranchAddress("dRJJ", &dRJJ, &b_dRJJ);
   fChain->SetBranchAddress("dPhiJJ", &dPhiJJ, &b_dPhiJJ);
   fChain->SetBranchAddress("dEtaJJ", &dEtaJJ, &b_dEtaJJ);
   fChain->SetBranchAddress("pTJJ", &pTJJ, &b_pTJJ);
   fChain->SetBranchAddress("minEta", &minEta, &b_minEta);
   fChain->SetBranchAddress("maxEta", &maxEta, &b_maxEta);
   fChain->SetBranchAddress("passCURRENT", &passCURRENT, &b_passCURRENT);
   fChain->SetBranchAddress("passATLAS", &passATLAS, &b_passATLAS);
   fChain->SetBranchAddress("passCMS", &passCMS, &b_passCMS);
   fChain->SetBranchAddress("passHYBRID", &passHYBRID, &b_passHYBRID);
   fChain->SetBranchAddress("whoIsB1_CURRENT", &whoIsB1_CURRENT, &b_whoIsB1_CURRENT);
   fChain->SetBranchAddress("whoIsB2_CURRENT", &whoIsB2_CURRENT, &b_whoIsB2_CURRENT);
   fChain->SetBranchAddress("whoIsB1_ATLAS", &whoIsB1_ATLAS, &b_whoIsB1_ATLAS);
   fChain->SetBranchAddress("whoIsB2_ATLAS", &whoIsB2_ATLAS, &b_whoIsB2_ATLAS);
   fChain->SetBranchAddress("whoIsB1_CMS", &whoIsB1_CMS, &b_whoIsB1_CMS);
   fChain->SetBranchAddress("whoIsB2_CMS", &whoIsB2_CMS, &b_whoIsB2_CMS);
   fChain->SetBranchAddress("whoIsB1_HYBRID", &whoIsB1_HYBRID, &b_whoIsB1_HYBRID);
   fChain->SetBranchAddress("whoIsB2_HYBRID", &whoIsB2_HYBRID, &b_whoIsB2_HYBRID);
   fChain->SetBranchAddress("pTJ1", &pTJ1, &b_pTJ1);
   fChain->SetBranchAddress("pTJ2", &pTJ2, &b_pTJ2);
   fChain->SetBranchAddress("pTB1", &pTB1, &b_pTB1);
   fChain->SetBranchAddress("pTB2", &pTB2, &b_pTB2);
   fChain->SetBranchAddress("pTB1_no_corr", &pTB1_no_corr, &b_pTB1_no_corr);
   fChain->SetBranchAddress("pTB2_no_corr", &pTB2_no_corr, &b_pTB2_no_corr);
   fChain->SetBranchAddress("etaJ1", &etaJ1, &b_etaJ1);
   fChain->SetBranchAddress("etaJ2", &etaJ2, &b_etaJ2);
   fChain->SetBranchAddress("etaB1", &etaB1, &b_etaB1);
   fChain->SetBranchAddress("etaB2", &etaB2, &b_etaB2);
   fChain->SetBranchAddress("etaB1_no_corr", &etaB1_no_corr, &b_etaB1_no_corr);
   fChain->SetBranchAddress("etaB2_no_corr", &etaB2_no_corr, &b_etaB2_no_corr);
   fChain->SetBranchAddress("dRB1J1", &dRB1J1, &b_dRB1J1);
   fChain->SetBranchAddress("dRB1J2", &dRB1J2, &b_dRB1J2);
   fChain->SetBranchAddress("dRB2J1", &dRB2J1, &b_dRB2J1);
   fChain->SetBranchAddress("dRB2J2", &dRB2J2, &b_dRB2J2);
   fChain->SetBranchAddress("mindRJ1", &mindRJ1, &b_mindRJ1);
   fChain->SetBranchAddress("mindRJ2", &mindRJ2, &b_mindRJ2);
   fChain->SetBranchAddress("mindRB1", &mindRB1, &b_mindRB1);
   fChain->SetBranchAddress("mindRB2", &mindRB2, &b_mindRB2);
   fChain->SetBranchAddress("TruthLabelB1", &TruthLabelB1, &b_TruthLabelB1);
   fChain->SetBranchAddress("TruthLabelB2", &TruthLabelB2, &b_TruthLabelB2);
   fChain->SetBranchAddress("TruthLabelPartonB1", &TruthLabelPartonB1, &b_TruthLabelPartonB1);
   fChain->SetBranchAddress("TruthLabelPartonB2", &TruthLabelPartonB2, &b_TruthLabelPartonB2);
   fChain->SetBranchAddress("HadronConeExclTruthLabelB1", &HadronConeExclTruthLabelB1, &b_HadronConeExclTruthLabelB1);
   fChain->SetBranchAddress("HadronConeExclTruthLabelB2", &HadronConeExclTruthLabelB2, &b_HadronConeExclTruthLabelB2);
   fChain->SetBranchAddress("MV2c20B1", &MV2c20B1, &b_MV2c20B1);
   fChain->SetBranchAddress("MV2c20B2", &MV2c20B2, &b_MV2c20B2);
   fChain->SetBranchAddress("MV2c10B1", &MV2c10B1, &b_MV2c10B1);
   fChain->SetBranchAddress("MV2c10B2", &MV2c10B2, &b_MV2c10B2);
   fChain->SetBranchAddress("MV2c10J1", &MV2c10J1, &b_MV2c10J1);
   fChain->SetBranchAddress("MV2c10J2", &MV2c10J2, &b_MV2c10J2);
   fChain->SetBranchAddress("WidthJ1", &WidthJ1, &b_WidthJ1);
   fChain->SetBranchAddress("WidthJ2", &WidthJ2, &b_WidthJ2);
   fChain->SetBranchAddress("NTrk1000PVJ1", &NTrk1000PVJ1, &b_NTrk1000PVJ1);
   fChain->SetBranchAddress("NTrk1000PVJ2", &NTrk1000PVJ2, &b_NTrk1000PVJ2);
   fChain->SetBranchAddress("NTrk500PVJ1", &NTrk500PVJ1, &b_NTrk500PVJ1);
   fChain->SetBranchAddress("NTrk500PVJ2", &NTrk500PVJ2, &b_NTrk500PVJ2);
   fChain->SetBranchAddress("max_J1J2", &max_J1J2, &b_max_J1J2);
   fChain->SetBranchAddress("eta_J_star", &eta_J_star, &b_eta_J_star);
   fChain->SetBranchAddress("cosTheta_MVA", &cosTheta_MVA, &b_cosTheta_MVA);
   fChain->SetBranchAddress("HT_soft", &HT_soft, &b_HT_soft);
   fChain->SetBranchAddress("HT_MVA", &HT_MVA, &b_HT_MVA);
   fChain->SetBranchAddress("BDT", &BDT, &b_BDT);
   fChain->SetBranchAddress("passHLT_g10_loose", &passHLT_g10_loose, &b_passHLT_g10_loose);
   fChain->SetBranchAddress("passHLT_g15_loose_L1EM7", &passHLT_g15_loose_L1EM7, &b_passHLT_g15_loose_L1EM7);
   fChain->SetBranchAddress("passHLT_g20_loose_L1EM12", &passHLT_g20_loose_L1EM12, &b_passHLT_g20_loose_L1EM12);
   fChain->SetBranchAddress("passHLT_g40_loose_L1EM15", &passHLT_g40_loose_L1EM15, &b_passHLT_g40_loose_L1EM15);
   fChain->SetBranchAddress("passHLT_g25_loose_L1EM15", &passHLT_g25_loose_L1EM15, &b_passHLT_g25_loose_L1EM15);
   fChain->SetBranchAddress("passL1_J40_0ETA25_2J25_J20_31ETA49", &passL1_J40_0ETA25_2J25_J20_31ETA49, &b_passL1_J40_0ETA25_2J25_J20_31ETA49);
   fChain->SetBranchAddress("passL1_J40_0ETA25_2J25", &passL1_J40_0ETA25_2J25, &b_passL1_J40_0ETA25_2J25);
   fChain->SetBranchAddress("passL1_J20_31ETA49", &passL1_J20_31ETA49, &b_passL1_J20_31ETA49);
   fChain->SetBranchAddress("passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490", &passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490, &b_passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490);
   fChain->SetBranchAddress("passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split", &passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split, &b_passHLT_j80_bmv2c2070_split_j60_bmv2c2085_split);
   fChain->SetBranchAddress("passHLT_j45_320eta490", &passHLT_j45_320eta490, &b_passHLT_j45_320eta490);
   fChain->SetBranchAddress("passHLT_j80_0eta240_j60_j45_320eta490", &passHLT_j80_0eta240_j60_j45_320eta490, &b_passHLT_j80_0eta240_j60_j45_320eta490);
   fChain->SetBranchAddress("passHLT_j80_0eta240_j60", &passHLT_j80_0eta240_j60, &b_passHLT_j80_0eta240_j60);
   fChain->SetBranchAddress("passL1_J40_0ETA25_2J15_31ETA49", &passL1_J40_0ETA25_2J15_31ETA49, &b_passL1_J40_0ETA25_2J15_31ETA49);
   fChain->SetBranchAddress("passL1_J40_0ETA25", &passL1_J40_0ETA25, &b_passL1_J40_0ETA25);
   fChain->SetBranchAddress("passL1_2J15_31ETA49", &passL1_2J15_31ETA49, &b_passL1_2J15_31ETA49);
   fChain->SetBranchAddress("passHLT_j80_bmv2c2085_split_2j60_320eta490", &passHLT_j80_bmv2c2085_split_2j60_320eta490, &b_passHLT_j80_bmv2c2085_split_2j60_320eta490);
   fChain->SetBranchAddress("passHLT_j80_bmv2c2085_split", &passHLT_j80_bmv2c2085_split, &b_passHLT_j80_bmv2c2085_split);
   fChain->SetBranchAddress("passHLT_2j60_320eta490", &passHLT_2j60_320eta490, &b_passHLT_2j60_320eta490);
   fChain->SetBranchAddress("passHLT_j80_0eta240_2j60_320eta490", &passHLT_j80_0eta240_2j60_320eta490, &b_passHLT_j80_0eta240_2j60_320eta490);
   fChain->SetBranchAddress("passHLT_j80_0eta240", &passHLT_j80_0eta240, &b_passHLT_j80_0eta240);
   fChain->SetBranchAddress("passL1_4J20", &passL1_4J20, &b_passL1_4J20);
   fChain->SetBranchAddress("passHLT_2j55_bmv2c2077_split_2j55", &passHLT_2j55_bmv2c2077_split_2j55, &b_passHLT_2j55_bmv2c2077_split_2j55);
   fChain->SetBranchAddress("passHLT_2j45_bmv2c2070_split_2j45", &passHLT_2j45_bmv2c2070_split_2j45, &b_passHLT_2j45_bmv2c2070_split_2j45);
   fChain->SetBranchAddress("passL1_4J15", &passL1_4J15, &b_passL1_4J15);
   fChain->SetBranchAddress("passHLT_2j35_bmv2c2070_split_2j35_L14J15", &passHLT_2j35_bmv2c2070_split_2j35_L14J15, &b_passHLT_2j35_bmv2c2070_split_2j35_L14J15);
   fChain->SetBranchAddress("passHLT_2j35_bmv2c2060_split_2j35_L14J15", &passHLT_2j35_bmv2c2060_split_2j35_L14J15, &b_passHLT_2j35_bmv2c2060_split_2j35_L14J15);
   fChain->SetBranchAddress("passHLT_2j35_bmv2c2050_split_2j35_L14J15", &passHLT_2j35_bmv2c2050_split_2j35_L14J15, &b_passHLT_2j35_bmv2c2050_split_2j35_L14J15);
   fChain->SetBranchAddress("passHLT_j75_bmv2c2060_split_3j75_L14J15", &passHLT_j75_bmv2c2060_split_3j75_L14J15, &b_passHLT_j75_bmv2c2060_split_3j75_L14J15);
   fChain->SetBranchAddress("passHLT_j75_bmv2c2070_split_3j75_L14J15", &passHLT_j75_bmv2c2070_split_3j75_L14J15, &b_passHLT_j75_bmv2c2070_split_3j75_L14J15);
   fChain->SetBranchAddress("passHLT_g140_loose", &passHLT_g140_loose, &b_passHLT_g140_loose);
   fChain->SetBranchAddress("passHLT_g25_medium", &passHLT_g25_medium, &b_passHLT_g25_medium);
   fChain->SetBranchAddress("passHLT_2j45_bmv2c2077_split_2j45_L14J15", &passHLT_2j45_bmv2c2077_split_2j45_L14J15, &b_passHLT_2j45_bmv2c2077_split_2j45_L14J15);
   fChain->SetBranchAddress("passHLT_2j45_bmv2c2070_split_2j45_L14J15", &passHLT_2j45_bmv2c2070_split_2j45_L14J15, &b_passHLT_2j45_bmv2c2070_split_2j45_L14J15);
   fChain->SetBranchAddress("passHLT_4j45", &passHLT_4j45, &b_passHLT_4j45);
   fChain->SetBranchAddress("passHLT_j15", &passHLT_j15, &b_passHLT_j15);
   fChain->SetBranchAddress("passHLT_j25", &passHLT_j25, &b_passHLT_j25);
   fChain->SetBranchAddress("passHLT_j60", &passHLT_j60, &b_passHLT_j60);
   fChain->SetBranchAddress("isActiveL1_J40_0ETA25_2J25_J20_31ETA49", &isActiveL1_J40_0ETA25_2J25_J20_31ETA49, &b_isActiveL1_J40_0ETA25_2J25_J20_31ETA49);
   fChain->SetBranchAddress("isActiveHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490", &isActiveHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490, &b_isActiveHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490);
   fChain->SetBranchAddress("isActiveHLT_j80_0eta240_j60_j45_320eta490", &isActiveHLT_j80_0eta240_j60_j45_320eta490, &b_isActiveHLT_j80_0eta240_j60_j45_320eta490);
   fChain->SetBranchAddress("isActiveL1_J40_0ETA25_2J15_31ETA49", &isActiveL1_J40_0ETA25_2J15_31ETA49, &b_isActiveL1_J40_0ETA25_2J15_31ETA49);
   fChain->SetBranchAddress("isActiveHLT_j80_bmv2c2085_split_2j60_320eta490", &isActiveHLT_j80_bmv2c2085_split_2j60_320eta490, &b_isActiveHLT_j80_bmv2c2085_split_2j60_320eta490);
   fChain->SetBranchAddress("isActiveHLT_j80_0eta240_2j60_320eta490", &isActiveHLT_j80_0eta240_2j60_320eta490, &b_isActiveHLT_j80_0eta240_2j60_320eta490);
   fChain->SetBranchAddress("isActiveL1_4J20", &isActiveL1_4J20, &b_isActiveL1_4J20);
   fChain->SetBranchAddress("isActiveHLT_2j55_bmv2c2077_split_2j55", &isActiveHLT_2j55_bmv2c2077_split_2j55, &b_isActiveHLT_2j55_bmv2c2077_split_2j55);
   fChain->SetBranchAddress("isActiveHLT_2j45_bmv2c2070_split_2j45", &isActiveHLT_2j45_bmv2c2070_split_2j45, &b_isActiveHLT_2j45_bmv2c2070_split_2j45);
   fChain->SetBranchAddress("isActiveL1_4J15", &isActiveL1_4J15, &b_isActiveL1_4J15);
   fChain->SetBranchAddress("isActiveHLT_2j35_bmv2c2070_split_2j35_L14J15", &isActiveHLT_2j35_bmv2c2070_split_2j35_L14J15, &b_isActiveHLT_2j35_bmv2c2070_split_2j35_L14J15);
   fChain->SetBranchAddress("isActiveHLT_2j35_bmv2c2060_split_2j35_L14J15", &isActiveHLT_2j35_bmv2c2060_split_2j35_L14J15, &b_isActiveHLT_2j35_bmv2c2060_split_2j35_L14J15);
   fChain->SetBranchAddress("isActiveHLT_2j35_bmv2c2050_split_2j35_L14J15", &isActiveHLT_2j35_bmv2c2050_split_2j35_L14J15, &b_isActiveHLT_2j35_bmv2c2050_split_2j35_L14J15);
   fChain->SetBranchAddress("isActiveHLT_j75_bmv2c2060_split_3j75_L14J15", &isActiveHLT_j75_bmv2c2060_split_3j75_L14J15, &b_isActiveHLT_j75_bmv2c2060_split_3j75_L14J15);
   fChain->SetBranchAddress("isActiveHLT_j75_bmv2c2070_split_3j75_L14J15", &isActiveHLT_j75_bmv2c2070_split_3j75_L14J15, &b_isActiveHLT_j75_bmv2c2070_split_3j75_L14J15);
   fChain->SetBranchAddress("isActiveHLT_2j45_bmv2c2077_split_2j45_L14J15", &isActiveHLT_2j45_bmv2c2077_split_2j45_L14J15, &b_isActiveHLT_2j45_bmv2c2077_split_2j45_L14J15);
   fChain->SetBranchAddress("isActiveHLT_2j45_bmv2c2070_split_2j45_L14J15", &isActiveHLT_2j45_bmv2c2070_split_2j45_L14J15, &b_isActiveHLT_2j45_bmv2c2070_split_2j45_L14J15);
   fChain->SetBranchAddress("isActiveHLT_4j45", &isActiveHLT_4j45, &b_isActiveHLT_4j45);
   fChain->SetBranchAddress("prescaleHLT_g10_loose", &prescaleHLT_g10_loose, &b_prescaleHLT_g10_loose);
   fChain->SetBranchAddress("prescaleHLT_g15_loose_L1EM7", &prescaleHLT_g15_loose_L1EM7, &b_prescaleHLT_g15_loose_L1EM7);
   fChain->SetBranchAddress("prescaleHLT_g20_loose_L1EM12", &prescaleHLT_g20_loose_L1EM12, &b_prescaleHLT_g20_loose_L1EM12);
   fChain->SetBranchAddress("prescaleHLT_g40_loose_L1EM15", &prescaleHLT_g40_loose_L1EM15, &b_prescaleHLT_g40_loose_L1EM15);
   fChain->SetBranchAddress("prescaleHLT_g25_loose_L1EM15", &prescaleHLT_g25_loose_L1EM15, &b_prescaleHLT_g25_loose_L1EM15);
   fChain->SetBranchAddress("prescaleL1_J40_0ETA25_2J25_J20_31ETA49", &prescaleL1_J40_0ETA25_2J25_J20_31ETA49, &b_prescaleL1_J40_0ETA25_2J25_J20_31ETA49);
   fChain->SetBranchAddress("prescaleHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490", &prescaleHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490, &b_prescaleHLT_j80_bmv2c2070_split_j60_bmv2c2085_split_j45_320eta490);
   fChain->SetBranchAddress("prescaleHLT_j80_0eta240_j60_j45_320eta490", &prescaleHLT_j80_0eta240_j60_j45_320eta490, &b_prescaleHLT_j80_0eta240_j60_j45_320eta490);
   fChain->SetBranchAddress("prescaleL1_J40_0ETA25_2J15_31ETA49", &prescaleL1_J40_0ETA25_2J15_31ETA49, &b_prescaleL1_J40_0ETA25_2J15_31ETA49);
   fChain->SetBranchAddress("prescaleHLT_j80_bmv2c2085_split_2j60_320eta490", &prescaleHLT_j80_bmv2c2085_split_2j60_320eta490, &b_prescaleHLT_j80_bmv2c2085_split_2j60_320eta490);
   fChain->SetBranchAddress("prescaleHLT_j80_0eta240_2j60_320eta490", &prescaleHLT_j80_0eta240_2j60_320eta490, &b_prescaleHLT_j80_0eta240_2j60_320eta490);
   fChain->SetBranchAddress("prescaleL1_4J20", &prescaleL1_4J20, &b_prescaleL1_4J20);
   fChain->SetBranchAddress("prescaleHLT_2j55_bmv2c2077_split_2j55", &prescaleHLT_2j55_bmv2c2077_split_2j55, &b_prescaleHLT_2j55_bmv2c2077_split_2j55);
   fChain->SetBranchAddress("prescaleHLT_2j45_bmv2c2070_split_2j45", &prescaleHLT_2j45_bmv2c2070_split_2j45, &b_prescaleHLT_2j45_bmv2c2070_split_2j45);
   fChain->SetBranchAddress("prescaleL1_4J15", &prescaleL1_4J15, &b_prescaleL1_4J15);
   fChain->SetBranchAddress("prescaleHLT_2j35_bmv2c2070_split_2j35_L14J15", &prescaleHLT_2j35_bmv2c2070_split_2j35_L14J15, &b_prescaleHLT_2j35_bmv2c2070_split_2j35_L14J15);
   fChain->SetBranchAddress("prescaleHLT_2j35_bmv2c2060_split_2j35_L14J15", &prescaleHLT_2j35_bmv2c2060_split_2j35_L14J15, &b_prescaleHLT_2j35_bmv2c2060_split_2j35_L14J15);
   fChain->SetBranchAddress("prescaleHLT_2j35_bmv2c2050_split_2j35_L14J15", &prescaleHLT_2j35_bmv2c2050_split_2j35_L14J15, &b_prescaleHLT_2j35_bmv2c2050_split_2j35_L14J15);
   fChain->SetBranchAddress("prescaleHLT_j75_bmv2c2060_split_3j75_L14J15", &prescaleHLT_j75_bmv2c2060_split_3j75_L14J15, &b_prescaleHLT_j75_bmv2c2060_split_3j75_L14J15);
   fChain->SetBranchAddress("prescaleHLT_j75_bmv2c2070_split_3j75_L14J15", &prescaleHLT_j75_bmv2c2070_split_3j75_L14J15, &b_prescaleHLT_j75_bmv2c2070_split_3j75_L14J15);
   fChain->SetBranchAddress("prescaleHLT_g140_loose", &prescaleHLT_g140_loose, &b_prescaleHLT_g140_loose);
   fChain->SetBranchAddress("prescaleHLT_g25_medium", &prescaleHLT_g25_medium, &b_prescaleHLT_g25_medium);
   fChain->SetBranchAddress("prescaleHLT_2j45_bmv2c2077_split_2j45_L14J15", &prescaleHLT_2j45_bmv2c2077_split_2j45_L14J15, &b_prescaleHLT_2j45_bmv2c2077_split_2j45_L14J15);
   fChain->SetBranchAddress("prescaleHLT_2j45_bmv2c2070_split_2j45_L14J15", &prescaleHLT_2j45_bmv2c2070_split_2j45_L14J15, &b_prescaleHLT_2j45_bmv2c2070_split_2j45_L14J15);
   fChain->SetBranchAddress("prescaleHLT_4j45", &prescaleHLT_4j45, &b_prescaleHLT_4j45);
   Notify();
}

Bool_t VBF::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void VBF::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t VBF::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef VBF_cxx
