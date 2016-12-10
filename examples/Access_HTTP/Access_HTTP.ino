#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.pinCode(GET);
  if (SIM.reply("SIM PIN")) {
    SIM.overrideTimeout(5000);
    SIM.pinCode(SET, code);     // WARNING! Be certain that you input the correct pin code!
  }

  SIM.setTimeout(5000);

  SIM.ipBearer(SET, "3,1,\"Contype\",\"GPRS\"");    // Configure profile 1 connection as "GPRS"
  SIM.ipBearer(SET, "3,1,\"APN\",\"internet\"");    // Set profile 1 access point name to "internet"
  SIM.ipBearer(SET, "1,1");                         // Open GPRS connection on profile 1
  SIM.ipBearer(SET, "2,1");                         // Display IP address of profile 1
  SIM.httpInit(EXE);                                // Initialize HTTP functionality
  SIM.httpParams(SET, "\"CID\",1");                 // Choose profile 1 as HTTP channel
  SIM.httpParams(SET, "\"URL\",\"www.sim.com\"");   // Set URL to www.sim.com
  SIM.httpAction(SET, "0");                         // Get the webpage
  while(!SIM.available()) {;}                       // Wait until the webpage has arrived
  SIM.httpRead(EXE);                                // Send the received webpage to Arduino
  SIM.httpEnd(EXE);                                 // Terminate HTTP functionality
  SIM.ipBearer(SET, "0,1");                         // Close GPRS connection on profile 1
}

void loop() {}
