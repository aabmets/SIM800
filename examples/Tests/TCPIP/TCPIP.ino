#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.ipMultiConn     (TEST);
  SIM.ipOpen          (TEST);
  SIM.ipSend          (TEST);
  SIM.ipQuicksend     (TEST);
  SIM.ipAck           (TEST);
  SIM.ipClose         (TEST);
  SIM.ipDeactivate    (TEST);
  SIM.ipPort          (TEST);
  SIM.ipAccess        (TEST);
  SIM.ipBegin         (TEST);
  SIM.ipGetLocalAddr  (TEST);
  SIM.ipStatus        (TEST);
  SIM.ipDnsCfg        (TEST);
  SIM.ipGetNameAddr   (TEST);
  SIM.ipAddHead       (TEST);
  SIM.ipAutoSendTimer (TEST);
  SIM.ipSendPrompt    (TEST);
  SIM.ipServer        (TEST);
  SIM.ipConnMode      (TEST);
  SIM.ipShowRemoteID  (TEST);
  SIM.ipNetTiming     (TEST);
  SIM.ipAppMode       (TEST);
  SIM.ipTransferCfg   (TEST);
  SIM.ipShowProtocol  (TEST);
  SIM.ipUdpMode       (TEST);
  SIM.ipManualData    (TEST);
  SIM.ipSaveCfg       (TEST);
  SIM.ipRemoteTimer   (TEST);
  SIM.ipMultiPdpCfg   (TEST);
  SIM.ipKeepAlive     (TEST);
  SIM.ipBearer        (TEST);
  SIM.ipPing          (TEST);
  SIM.ipEchoReply     (TEST);
  SIM.ipFilter        (TEST);
  SIM.ipAnswerPings   (TEST);
  SIM.ipGsmLoc        (TEST);
}

void loop() {}
