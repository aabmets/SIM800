#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.gprsAttach         (TEST);
  SIM.gprsDefineContext  (TEST);
  SIM.gprsMinQuality     (TEST);
  SIM.gprsReqQuality     (TEST);
  SIM.gprsEnactContext   (TEST);
  SIM.gprsDataState      (TEST);
  SIM.gprsAddress        (TEST);
  SIM.gprsStationClass   (TEST);
  SIM.gprsReportCtrl     (TEST);
  SIM.gprsRegStatus      (TEST);
  SIM.gprsMsgService     (TEST);
}

void loop() {}
