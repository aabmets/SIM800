#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.callMeter         (TEST);
  SIM.callMeterMax      (TEST);
  SIM.chargeAdvice      (TEST);
  SIM.dataCallService   (TEST);
  SIM.callForward       (TEST);
  SIM.callWait          (TEST);
  SIM.errorReport       (TEST);
  SIM.reqMakerID        (EXE);
  SIM.reqDeviceModelID  (EXE);
  SIM.reqSoftwareID     (EXE);
  SIM.reqIMEI           (EXE);
  SIM.charset           (TEST);
  SIM.addressType       (TEST);
  SIM.callHold          (TEST);
  SIM.reqIMSI           (EXE);
  SIM.activeCalls       (TEST);
  SIM.facilityLock      (TEST);
  SIM.showCallerID      (TEST);
  SIM.hideSelfID        (TEST);
  SIM.deviceError       (TEST);
  SIM.callerID          (TEST);

  SIM.overrideTimeout(10000);
  SIM.netOps            (TEST);

  SIM.activity          (EXE);
  SIM.pbFind            (TEST);
  SIM.pbRead            (TEST);
  SIM.pbStorage         (TEST);
  SIM.pbWrite           (TEST);
  SIM.pinCode           (TEST);
  SIM.changePwd         (TEST);
  SIM.serviceReport     (TEST);
  SIM.ringCodeMode      (TEST);
  SIM.netReg            (TEST);
  SIM.radioLinkParams   (TEST);
  SIM.simRawAccess      (TEST);
  SIM.signalQuality     (TEST);
  SIM.dtmfDuration      (TEST);
  SIM.dtmfPlay          (TEST);
  SIM.muxControl        (TEST);
  SIM.getSelfAddr       (TEST);
  SIM.prefOperators     (TEST);
  SIM.listAllOperators  (TEST);
  SIM.deviceMode        (TEST);
  SIM.clock             (TEST);
  SIM.simStrAccess      (TEST);
  SIM.alertMode         (TEST);
  SIM.alertSound        (TEST);
  SIM.ringerVolume      (TEST);
  SIM.loudSpeakerVol    (TEST);
  SIM.mute              (TEST);
  SIM.pricePerUnit      (TEST);
  SIM.callMeterMaxEvent (TEST);
  SIM.battery           (TEST);
  SIM.usd               (TEST);
  SIM.ssn               (TEST);
  SIM.dtmfDetect        (TEST);
}

void loop() {}
