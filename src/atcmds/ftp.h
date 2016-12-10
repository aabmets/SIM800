
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

/*
████████████████████████████████████████████████████████
████   ATcmd            Manpage        API Method   ████   Count: 28 commands
████████████████████████████████████████████████████████
*/
public:
    /* AT+FTPPORT       266 */    void ftpPort         (CmdType, char* = "");
    /* AT+FTPMODE       266 */    void ftpMode         (CmdType, char* = "");
    /* AT+FTPTYPE       267 */    void ftpDataType     (CmdType, char* = "");
    /* AT+FTPPUTOPT     268 */    void ftpPutMode      (CmdType, char* = "");
    /* AT+FTPCID        268 */    void ftpBearerID     (CmdType, char* = "");
    /* AT+FTPREST       269 */    void ftpResume       (CmdType, char* = "");
    /* AT+FTPSERV       269 */    void ftpServerAddr   (CmdType, char* = "");
    /* AT+FTPUN         270 */    void ftpUsername     (CmdType, char* = "");
    /* AT+FTPPW         271 */    void ftpPassword     (CmdType, char* = "");
    /* AT+FTPGETNAME    272 */    void ftpDownName     (CmdType, char* = "");
    /* AT+FTPGETPATH    272 */    void ftpDownPath     (CmdType, char* = "");
    /* AT+FTPPUTNAME    273 */    void ftpUpName       (CmdType, char* = "");
    /* AT+FTPPUTPATH    273 */    void ftpUpPath       (CmdType, char* = "");
    /* AT+FTPGET        274 */    void ftpGetFile      (CmdType, char* = "");
    /* AT+FTPPUT        275 */    void ftpPutFile      (CmdType, char* = "");
    /* AT+FTPSCONT      276 */    void ftpSaveCfg      (CmdType);
    /* AT+FTPDELE       277 */    void ftpDelFile      (CmdType);
    /* AT+FTPSIZE       278 */    void ftpFileSize     (CmdType);
    /* AT+FTPSTATE      279 */    void ftpState        (CmdType);
    /* AT+FTPEXTPUT     279 */    void ftpExtPutfile   (CmdType, char* = "");
    /* AT+FTPMKD        280 */    void ftpMakeDir      (CmdType);
    /* AT+FTPRMD        281 */    void ftpDelDir       (CmdType);
    /* AT+FTPLIST       281 */    void ftpListFiles    (CmdType, char* = "");
    /* AT+FTPGETTOFS    282 */    void ftpGetToFS      (CmdType, char* = "");
    /* AT+FTPPUTFRMFS   283 */    void ftpPutFromFS    (CmdType, char* = "");
    /* AT+FTPEXTGET     285 */    void ftpExtGetfile   (CmdType, char* = "");
    /* AT+FTPFILEPUT    286 */    void ftpPutFromRAM   (CmdType, char* = "");
    /* AT+FTPQUIT       287 */    void ftpQuit         (CmdType);