#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.mailBearerID  (TEST);
  SIM.mailTimeout   (TEST);
  SIM.smtpServer    (TEST);
  SIM.smtpAuth      (TEST);
  SIM.smtpFrom      (TEST);
  SIM.smtpTo        (TEST);
  SIM.smtpSubject   (TEST);
  SIM.smtpBody      (TEST);
  SIM.smtpFile      (TEST);
  SIM.smtpSend      (TEST);
  SIM.smtpFilesend  (TEST);
  SIM.smtpCharset   (TEST);
  SIM.popCfg        (TEST);
  SIM.popLogin      (TEST);
  SIM.popInbox      (TEST);
  SIM.popMailSize   (TEST);
  SIM.popMailUID    (TEST);
  SIM.popMultiGet   (TEST);
  SIM.popMultiRead  (TEST);
  SIM.popMarkDel    (TEST);
  SIM.popUnmarkDel  (TEST);
  SIM.popLogout     (TEST);
}

void loop() {}
