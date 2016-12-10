#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.mmsCenterUrl    (TEST);
  SIM.mmsProxy        (TEST);
  SIM.mmsNetwork      (TEST);
  SIM.mmsCfgSend      (TEST);
  SIM.mmsEdit         (TEST);
  SIM.mmsDownFile     (TEST);
  SIM.mmsDelFile      (TEST);
  SIM.mmsSend         (TEST);
  SIM.mmsAddRecp      (TEST);
  SIM.mmsAddCopyRecp  (TEST);
  SIM.mmsAddBccRecp   (TEST);
  SIM.mmsDelRecp      (TEST);
  SIM.mmsDelCopyRecp  (TEST);
  SIM.mmsDelBccRecp   (TEST);
  SIM.mmsGet          (TEST);
  SIM.mmsDetails      (TEST);
  SIM.mmsRead         (TEST);
  SIM.mmsReadPush     (TEST);
  SIM.mmsUserAgent    (TEST);
  SIM.mmsUserProfile  (TEST);
  SIM.mmsTimeout      (TEST);
  SIM.mmsStatus       (TEST);
  SIM.mmsBegin        (TEST);
  SIM.mmsEnd          (TEST);
  SIM.mmsSaveCfg      (TEST);
}

void loop() {}
