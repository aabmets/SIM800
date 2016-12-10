#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.httpInit    (TEST);
  SIM.httpEnd     (TEST);
  SIM.httpParams  (TEST);
  SIM.httpData    (TEST);
  SIM.httpAction  (TEST);
  SIM.httpRead    (TEST);
  SIM.httpSave    (TEST);
  SIM.httpStatus  (TEST);
  SIM.httpHeader  (TEST);
}

void loop() {}
