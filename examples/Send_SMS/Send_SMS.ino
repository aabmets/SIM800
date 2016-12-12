#include <SIM800.h>

unsigned long bauds = 19200;
char code[] = "0000";
char addr[] = "\"+000000000\"";
char msg[] = "Hello World!";

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.pinCode(GET);
  if (SIM.reply("SIM PIN")) SIM.pinCode(SET, code);  // WARNING! Be certain that you input the correct pin code!
  
  SIM.smsFormat(SET, "1");
  SIM.smsSend(addr, msg);
}

void loop() {}
