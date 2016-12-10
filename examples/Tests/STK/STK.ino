#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.stkReply      (TEST);
  SIM.stkEnvelope   (TEST);
  SIM.stkCallSetup  (TEST);
  SIM.stkSms        (TEST);
  SIM.stkSetupSS    (TEST);
  SIM.stkSetupUSSD  (TEST);
  SIM.stkSendDTMF   (TEST);
  SIM.stkMenu       (TEST);
  SIM.stkSetURC     (TEST);
}

void loop() {}
