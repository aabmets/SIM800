#include <SIM800.h>

unsigned long bauds = 19200;

void setup() {
  Serial.begin(bauds);  
  while (!Serial) {;}
  SIM.begin(bauds);
  delay(100);

  SIM.setTimeout(3000);
  SIM.cmdBenchmark(true);

  SIM.sideToneGain       (GET);
  //SIM.powerOff           ("1");
  SIM.pinCodeTriesLeft   ();
  SIM.micGain            (GET);
  SIM.alarmTime          (GET);
  SIM.delAlarm           (TEST);
  SIM.readAdc            (GET);
  SIM.singleNumScheme    (GET);
  SIM.resetCellCast      ();
  //SIM.cfgAltModeCalls    (GET);
  SIM.riPinUrc           (GET);
  SIM.timeStamp          (GET);
  SIM.dtmfLocalTone      (TEST);
  SIM.serviceProvider    ();
  SIM.voiceMail          (GET);
  SIM.opBand             (GET);
  SIM.handsFree          (GET);
  SIM.swapAudio          (GET);
  SIM.slowClock          (GET);
  SIM.engMode            (GET);
  SIM.smsZeroToSIM       (GET);
  SIM.simCardID          (EXE);
  SIM.temperature        (GET);
  SIM.delAllMsg          (TEST);
  SIM.stkPlayTone        (TEST);
  SIM.toneGen            (TEST);
  SIM.alphaString        (TEST);
  SIM.simGroupID         ();
  SIM.originCallState    (TEST);
  SIM.smsHexMode         (TEST);
  SIM.smsDeviceCompat    (TEST);
  SIM.cfgInitUrc         (TEST);
  //SIM.setSuperPwd        ("oldpwd,newpwd");
  SIM.signalQualityURC   (TEST);
  SIM.gprsMultiClass     (TEST);
  SIM.getFlashMem        ();
  SIM.queryCallReady     (TEST);
  SIM.getPII             ();
  //SIM.gpioCtrl           (TEST);
  //SIM.pwmGen             (TEST);
  SIM.echoCtrl           (TEST);
  SIM.autoAudioSwitch    (TEST);
  SIM.voiceEncoderCtrl   (TEST);
  SIM.gsmBusy            (TEST);
  SIM.emergencyNumList   (TEST);
  SIM.arfcnLock          (TEST);
  SIM.netLightPeriod     (TEST);
  SIM.buzzerRingtone     (TEST);
  SIM.micCtrl            (TEST);
  SIM.netLight           (TEST);
  SIM.whiteList          (TEST);
  SIM.detectSimCard      (TEST);
  SIM.simPresent         (TEST);
  SIM.gprsNetLight       (TEST);
  SIM.micBias            (TEST);
  SIM.playAudioIntoCall  (TEST);
  SIM.detectJamming      (GET);
  //SIM.pcmCfg             (TEST);
  //SIM.pcmSyncParam       (TEST);
  SIM.detectAntenna      (TEST);
  SIM.agcCfg             (TEST);
  //SIM.pcmSwitchSD        (TEST);
  SIM.detectKeypad       (TEST);
  SIM.toneStringGen      (TEST);
  SIM.roamingState       ();
  SIM.netScan            (TEST);
  //SIM.dualSerialPort     (TEST);
  //SIM.edgeCfg            (TEST);
  SIM.gpioIndex          (TEST);
  SIM.playAudio          (TEST);
  SIM.audioVolume        (TEST);
  SIM.atcmdSoundLevel    (TEST);
  //SIM.chargeCtrl         (TEST);
  //SIM.simPollInterval    (TEST);
  SIM.enhanceSpeech      (TEST);
  SIM.getConcatMsgIndex  (TEST);
  //SIM.sdModeSwitch       (TEST);
  SIM.smsResendCtrl      (GET);
  SIM.record             (TEST);
  SIM.recordToUart       (TEST);
  //SIM.textToSpeech       (TEST);
  //SIM.textToSpeechCfg    (TEST);
  //SIM.textToSpeechRing   (TEST);
}

void loop() {}