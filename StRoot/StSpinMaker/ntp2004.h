const int MAXTRK2004=5000;

typedef struct{
  int event;
  int BChi;
  int BClo;
  int Token;
  int TrgWd;
  int TrgId;
  int prepost;
  int bunchId; 
  int bunchid7bit; 
  int spinBit; 
  int VTXDSM[8]; 
  int FPDDSM[8];
  int ZDC[16];
  int ZDCSMD[32];
  int CTB[256]; 
  int BBC[80]; 
  int FPDENS[112]; 
  int FPDETB[64]; 
  int FPDWNS[112]; 
  int FPDWTB[64]; 
  int FPDENSL1[8]; 
  int FPDETBL1[8]; 
  int FPDWNSL1[8]; 
  int FPDWTBL1[8]; 
  int FPDADC[256];
  int FPDTDC[8]; 
  int FPDWEST[72]; 
  int NPrimTrk; 
  int NTPCTrk; 
  int NEastFTPCTrk;
  float xVertex;
  float yVertex;
  float zVertex;
  int ntrk;
  int trknhit[MAXTRK2004];
  float trkpt[MAXTRK2004];
  float trketa[MAXTRK2004];
  float trkphi[MAXTRK2004];
  float trkdcax[MAXTRK2004];
  float trkdcay[MAXTRK2004];
  float trkdcaz[MAXTRK2004];
} ntpcb2004;

extern ntpcb2004 ntp2004_;