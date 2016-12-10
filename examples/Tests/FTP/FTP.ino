#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.ftpPort         (TEST);
  SIM.ftpMode         (TEST);
  SIM.ftpDataType     (TEST);
  SIM.ftpPutMode      (TEST);
  SIM.ftpBearerID     (TEST);
  SIM.ftpResume       (TEST);
  SIM.ftpServerAddr   (TEST);
  SIM.ftpUsername     (TEST);
  SIM.ftpPassword     (TEST);
  SIM.ftpDownName     (TEST);
  SIM.ftpDownPath     (TEST);
  SIM.ftpUpName       (TEST);
  SIM.ftpUpPath       (TEST);
  SIM.ftpGetFile      (TEST);
  SIM.ftpPutFile      (TEST);
  SIM.ftpSaveCfg      (TEST);
  SIM.ftpDelFile      (TEST);
  SIM.ftpFileSize     (TEST);
  SIM.ftpState        (TEST);
  SIM.ftpExtPutfile   (TEST);
  SIM.ftpMakeDir      (TEST);
  SIM.ftpDelDir       (TEST);
  SIM.ftpListFiles    (TEST);
  SIM.ftpGetToFS      (TEST);
  SIM.ftpPutFromFS    (TEST);
  SIM.ftpExtGetfile   (TEST);
  SIM.ftpPutFromRAM   (TEST);
  SIM.ftpQuit         (TEST);
}

void loop() {}
