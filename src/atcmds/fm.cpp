/*
Written by Mortuus Medicus

This follows the newer manual that adds the featues below
*/

#include <SIM800.h>

    /* AT+FMOPEN     6   */    void fmOpen                  (CmdType, char* = "");
    /* AT+FMCLOSE    7   */    void fmClose                 (CmdType);
    /* AT+FMFREQ     7   */    void fmSetFrequency          (CmdType, char* = "");
    /* AT+FMVOLUME   7   */    void fmSetVolume             (CmdType, char* = "");
    /* AT+FMSCAN     8   */    void fmAutoSearchChannel     (CmdType);
    /* AT+FMSIGNAL   8   */    void fmQuerySignalLevel      (CmdType, char* = "");
    /* AT+FMVALID    9   */    void fmCheckFrequencyValid   (CmdType, char* = "");


// ============================================================
void SIM800::fmOpen(CmdType type, char* str) {
    outBuilder(type, str, P("FMOPEN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::fmClose(CmdType type) {
    outBuilder(type, "", P("FMCLOSE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::fmSetFrequency(CmdType type, char* str) {
    outBuilder(type, str, P("FMFREQ"));
    print(ioBuffer);
}

// ============================================================
void SIM800::fmSetVolume(CmdType type, char* str) {
    outBuilder(type, str, P("FMVOLUME"));
    print(ioBuffer);
}

// ============================================================
void SIM800::fmAutoSearchChannel(CmdType type) {
    outBuilder(type, "", P("FMSCAN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::fmQuerySignalLevel(CmdType type, char* str) {
    outBuilder(type, str, P("FMSIGNAL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::fmCheckFrequencyValid(CmdType type, char* str) {
    outBuilder(type, str, P("FMVALID"));
    print(ioBuffer);
}