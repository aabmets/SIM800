
//   "Aspen SIM800" is a comprehensive SIM800 library for simplified and in-depth chip access.
//   Copyright (C) 2016  Mattias Aabmets (https://github.com/aspenforest)
//
//   This API library is free software: you can redistribute it and/or modify
//   it under the terms of the GNU Affero General Public License as published
//   by the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   This API library is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
//   See the GNU Affero General Public License for more details.
//
//   You should have received a copy of the GNU Affero General Public License
//   along with this API library.  If not, see <http://www.gnu.org/licenses/>.


#include <SIM800.h>


// ============================================================
#ifdef DEBUG
void SIM800::debug(DebugCaller caller) {                                    // Prints feedback messages into Serial Monitor if #define DEBUG is uncommented in the SIM800.h file.
    String out = "";
    
    switch (caller) {                                                       // If called by begin(), print serialSpeed, DEF_RX_PIN, and DEF_TX_PIN to Serial Monitor.
        case BEGIN:
            out.concat(F("\n==================="));
            out.concat(F("\n   SPEED = "));    out.concat(serialSpeed);
            out.concat(F("\n  RX PIN = "));    out.concat(DEF_RX_PIN);
            out.concat(F("\n  TX PIN = "));    out.concat(DEF_TX_PIN);
            out.concat(F("\n==================="));
            Serial.println(out);
            Serial.println();
            break;

        case REPLY:
            for (uint16_t i = 0; i < strlen(ioBuffer); i++) {               // If called by read(), print contents of ioBuffer to Serial Monitor.
                Serial.write(ioBuffer[i]);
            }
            Serial.println();

            if (benchTime != 0) {                                           // If AT command benchmarking is enabled, print benchmark result to Serial Monitor.
                Serial.print("BM:   ");
                Serial.print((double)benchTime / 1000);
                Serial.print("ms\n\n");
            }
            break;
    }
}
#endif