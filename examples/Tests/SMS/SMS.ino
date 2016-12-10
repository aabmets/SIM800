#include <SIM800.h>

unsigned long bauds = 19200;
char from[] = "\"+000000000\"";
char to[] = "\"+111111111\"";
char msg[] = "Hello World!";

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.smsDel             (TEST);
  SIM.smsFormat          (SET, "1");
  SIM.smsList            (TEST);
  SIM.smsRead            (TEST);
  //SIM.smsSend            (to, msg);
  //SIM.smsWriteToStore    (from, msg);
  SIM.smsSendFromStore   (TEST);
  SIM.smsNotifyNew       (GET);
  SIM.smsStorage         (GET);
  SIM.smsRestoreCfg      (TEST);
  SIM.smsSaveCfg         (TEST);
  SIM.smsCenterAddress   (GET);
  SIM.smsCellCast        (GET);
  SIM.smsGetParams       (GET);
  SIM.smsSetParams       (GET);
  SIM.smsService         (GET);
}

void loop() {}
