#include <SIM800.h>

//   This sketch is used for 
//   testing raw AT commands 
//   in the serial monitor.

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);
  while (!Serial) {;}
  SIM.begin(bauds);

  Serial.print("Ready for input...\n\n");
}

void loop() {
  SIM.directSerialMonitor();
}
