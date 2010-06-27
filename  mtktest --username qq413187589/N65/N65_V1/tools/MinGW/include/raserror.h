/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/raserror.h,v 1.1 2007/05/17 07:25:32 bw Exp $
*
* $Id: raserror.h,v 1.1 2007/05/17 07:25:32 bw Exp $
*
* $Date: 2007/05/17 07:25:32 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: raserror.h,v $
* Revision 1.1  2007/05/17 07:25:32  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/raserror.h,v 1.1 2007/05/14 09:46:47 bw Exp $
*
* ~Id: raserror.h,v 1.1 2007/05/14 09:46:47 bw Exp $
*
* ~Date: 2007/05/14 09:46:47 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: raserror.h,v $
* Revision 1.1  2007/05/14 09:46:47  bw
* UNI@bw_20070514 17:21:01 MTK��ʼ�汾.�ϲ�U25V20��U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/raserror.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Id: raserror.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Date: 2007/04/04 06:51:33 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: raserror.h,v $
* Revision 1.2  2007/04/04 06:51:33  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _RASERROR_H
#define _RASERROR_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#define RASBASE 600
#define SUCCESS 0
#define PENDING                              (RASBASE+0)
#define ERROR_INVALID_PORT_HANDLE            (RASBASE+1)
#define ERROR_PORT_ALREADY_OPEN              (RASBASE+2)
#define ERROR_BUFFER_TOO_SMALL               (RASBASE+3)
#define ERROR_WRONG_INFO_SPECIFIED           (RASBASE+4)
#define ERROR_CANNOT_SET_PORT_INFO           (RASBASE+5)
#define ERROR_PORT_NOT_CONNECTED             (RASBASE+6)
#define ERROR_EVENT_INVALID                  (RASBASE+7)
#define ERROR_DEVICE_DOES_NOT_EXIST          (RASBASE+8)
#define ERROR_DEVICETYPE_DOES_NOT_EXIST      (RASBASE+9)
#define ERROR_BUFFER_INVALID                 (RASBASE+10)
#define ERROR_ROUTE_NOT_AVAILABLE            (RASBASE+11)
#define ERROR_ROUTE_NOT_ALLOCATED            (RASBASE+12)
#define ERROR_INVALID_COMPRESSION_SPECIFIED  (RASBASE+13)
#define ERROR_OUT_OF_BUFFERS                 (RASBASE+14)
#define ERROR_PORT_NOT_FOUND                 (RASBASE+15)
#define ERROR_ASYNC_REQUEST_PENDING          (RASBASE+16)
#define ERROR_ALREADY_DISCONNECTING          (RASBASE+17)
#define ERROR_PORT_NOT_OPEN                  (RASBASE+18)
#define ERROR_PORT_DISCONNECTED              (RASBASE+19)
#define ERROR_NO_ENDPOINTS                   (RASBASE+20)
#define ERROR_CANNOT_OPEN_PHONEBOOK          (RASBASE+21)
#define ERROR_CANNOT_LOAD_PHONEBOOK          (RASBASE+22)
#define ERROR_CANNOT_FIND_PHONEBOOK_ENTRY    (RASBASE+23)
#define ERROR_CANNOT_WRITE_PHONEBOOK         (RASBASE+24)
#define ERROR_CORRUPT_PHONEBOOK              (RASBASE+25)
#define ERROR_CANNOT_LOAD_STRING             (RASBASE+26)
#define ERROR_KEY_NOT_FOUND                  (RASBASE+27)
#define ERROR_DISCONNECTION                  (RASBASE+28)
#define ERROR_REMOTE_DISCONNECTION           (RASBASE+29)
#define ERROR_HARDWARE_FAILURE               (RASBASE+30)
#define ERROR_USER_DISCONNECTION             (RASBASE+31)
#define ERROR_INVALID_SIZE                   (RASBASE+32)
#define ERROR_PORT_NOT_AVAILABLE             (RASBASE+33)
#define ERROR_CANNOT_PROJECT_CLIENT          (RASBASE+34)
#define ERROR_UNKNOWN                        (RASBASE+35)
#define ERROR_WRONG_DEVICE_ATTACHED          (RASBASE+36)
#define ERROR_BAD_STRING                     (RASBASE+37)
#define ERROR_REQUEST_TIMEOUT                (RASBASE+38)
#define ERROR_CANNOT_GET_LANA                (RASBASE+39)
#define ERROR_NETBIOS_ERROR                  (RASBASE+40)
#define ERROR_SERVER_OUT_OF_RESOURCES        (RASBASE+41)
#define ERROR_NAME_EXISTS_ON_NET             (RASBASE+42)
#define ERROR_SERVER_GENERAL_NET_FAILURE     (RASBASE+43)
#define WARNING_MSG_ALIAS_NOT_ADDED          (RASBASE+44)
#define ERROR_AUTH_INTERNAL                  (RASBASE+45)
#define ERROR_RESTRICTED_LOGON_HOURS         (RASBASE+46)
#define ERROR_ACCT_DISABLED                  (RASBASE+47)
#define ERROR_PASSWD_EXPIRED                 (RASBASE+48)
#define ERROR_NO_DIALIN_PERMISSION           (RASBASE+49)
#define ERROR_SERVER_NOT_RESPONDING          (RASBASE+50)
#define ERROR_FROM_DEVICE                    (RASBASE+51)
#define ERROR_UNRECOGNIZED_RESPONSE          (RASBASE+52)
#define ERROR_MACRO_NOT_FOUND                (RASBASE+53)
#define ERROR_MACRO_NOT_DEFINED              (RASBASE+54)
#define ERROR_MESSAGE_MACRO_NOT_FOUND        (RASBASE+55)
#define ERROR_DEFAULTOFF_MACRO_NOT_FOUND     (RASBASE+56)
#define ERROR_FILE_COULD_NOT_BE_OPENED       (RASBASE+57)
#define ERROR_DEVICENAME_TOO_LONG            (RASBASE+58)
#define ERROR_DEVICENAME_NOT_FOUND           (RASBASE+59)
#define ERROR_NO_RESPONSES                   (RASBASE+60)
#define ERROR_NO_COMMAND_FOUND               (RASBASE+61)
#define ERROR_WRONG_KEY_SPECIFIED            (RASBASE+62)
#define ERROR_UNKNOWN_DEVICE_TYPE            (RASBASE+63)
#define ERROR_ALLOCATING_MEMORY              (RASBASE+64)
#define ERROR_PORT_NOT_CONFIGURED            (RASBASE+65)
#define ERROR_DEVICE_NOT_READY               (RASBASE+66)
#define ERROR_READING_INI_FILE               (RASBASE+67)
#define ERROR_NO_CONNECTION                  (RASBASE+68)
#define ERROR_BAD_USAGE_IN_INI_FILE          (RASBASE+69)
#define ERROR_READING_SECTIONNAME            (RASBASE+70)
#define ERROR_READING_DEVICETYPE             (RASBASE+71)
#define ERROR_READING_DEVICENAME             (RASBASE+72)
#define ERROR_READING_USAGE                  (RASBASE+73)
#define ERROR_READING_MAXCONNECTBPS          (RASBASE+74)
#define ERROR_READING_MAXCARRIERBPS          (RASBASE+75)
#define ERROR_LINE_BUSY                      (RASBASE+76)
#define ERROR_VOICE_ANSWER                   (RASBASE+77)
#define ERROR_NO_ANSWER                      (RASBASE+78)
#define ERROR_NO_CARRIER                     (RASBASE+79)
#define ERROR_NO_DIALTONE                    (RASBASE+80)
#define ERROR_IN_COMMAND                     (RASBASE+81)
#define ERROR_WRITING_SECTIONNAME            (RASBASE+82)
#define ERROR_WRITING_DEVICETYPE             (RASBASE+83)
#define ERROR_WRITING_DEVICENAME             (RASBASE+84)
#define ERROR_WRITING_MAXCONNECTBPS          (RASBASE+85)
#define ERROR_WRITING_MAXCARRIERBPS          (RASBASE+86)
#define ERROR_WRITING_USAGE                  (RASBASE+87)
#define ERROR_WRITING_DEFAULTOFF             (RASBASE+88)
#define ERROR_READING_DEFAULTOFF             (RASBASE+89)
#define ERROR_EMPTY_INI_FILE                 (RASBASE+90)
#define ERROR_AUTHENTICATION_FAILURE         (RASBASE+91)
#define ERROR_PORT_OR_DEVICE                 (RASBASE+92)
#define ERROR_NOT_BINARY_MACRO               (RASBASE+93)
#define ERROR_DCB_NOT_FOUND                  (RASBASE+94)
#define ERROR_STATE_MACHINES_NOT_STARTED     (RASBASE+95)
#define ERROR_STATE_MACHINES_ALREADY_STARTED (RASBASE+96)
#define ERROR_PARTIAL_RESPONSE_LOOPING       (RASBASE+97)
#define ERROR_UNKNOWN_RESPONSE_KEY           (RASBASE+98)
#define ERROR_RECV_BUF_FULL                  (RASBASE+99)
#define ERROR_CMD_TOO_LONG                   (RASBASE+100)
#define ERROR_UNSUPPORTED_BPS                (RASBASE+101)
#define ERROR_UNEXPECTED_RESPONSE            (RASBASE+102)
#define ERROR_INTERACTIVE_MODE               (RASBASE+103)
#define ERROR_BAD_CALLBACK_NUMBER            (RASBASE+104)
#define ERROR_INVALID_AUTH_STATE             (RASBASE+105)
#define ERROR_WRITING_INITBPS                (RASBASE+106)
#define ERROR_X25_DIAGNOSTIC                 (RASBASE+107)
#define ERROR_ACCT_EXPIRED                   (RASBASE+108)
#define ERROR_CHANGING_PASSWORD              (RASBASE+109)
#define ERROR_OVERRUN                        (RASBASE+110)
#define ERROR_RASMAN_CANNOT_INITIALIZE	     (RASBASE+111)
#define ERROR_BIPLEX_PORT_NOT_AVAILABLE      (RASBASE+112)
#define ERROR_NO_ACTIVE_ISDN_LINES           (RASBASE+113)
#define ERROR_NO_ISDN_CHANNELS_AVAILABLE     (RASBASE+114)
#define ERROR_TOO_MANY_LINE_ERRORS           (RASBASE+115)
#define ERROR_IP_CONFIGURATION               (RASBASE+116)
#define ERROR_NO_IP_ADDRESSES                (RASBASE+117)
#define ERROR_PPP_TIMEOUT                    (RASBASE+118)
#define ERROR_PPP_REMOTE_TERMINATED          (RASBASE+119)
#define ERROR_PPP_NO_PROTOCOLS_CONFIGURED    (RASBASE+120)
#define ERROR_PPP_NO_RESPONSE                (RASBASE+121)
#define ERROR_PPP_INVALID_PACKET             (RASBASE+122)
#define ERROR_PHONE_NUMBER_TOO_LONG          (RASBASE+123)
#define ERROR_IPXCP_NO_DIALOUT_CONFIGURED    (RASBASE+124)
#define ERROR_IPXCP_NO_DIALIN_CONFIGURED     (RASBASE+125)
#define ERROR_IPXCP_DIALOUT_ALREADY_ACTIVE   (RASBASE+126)
#define ERROR_ACCESSING_TCPCFGDLL            (RASBASE+127)
#define ERROR_NO_IP_RAS_ADAPTER              (RASBASE+128)
#define ERROR_SLIP_REQUIRES_IP               (RASBASE+129)
#define ERROR_PROJECTION_NOT_COMPLETE        (RASBASE+130)
#define ERROR_PROTOCOL_NOT_CONFIGURED        (RASBASE+131)
#define ERROR_PPP_NOT_CONVERGING             (RASBASE+132)
#define ERROR_PPP_CP_REJECTED                (RASBASE+133)
#define ERROR_PPP_LCP_TERMINATED             (RASBASE+134)
#define ERROR_PPP_REQUIRED_ADDRESS_REJECTED  (RASBASE+135)
#define ERROR_PPP_NCP_TERMINATED             (RASBASE+136)
#define ERROR_PPP_LOOPBACK_DETECTED          (RASBASE+137)
#define ERROR_PPP_NO_ADDRESS_ASSIGNED        (RASBASE+138)
#define ERROR_CANNOT_USE_LOGON_CREDENTIALS   (RASBASE+139)
#define ERROR_TAPI_CONFIGURATION             (RASBASE+140)
#define ERROR_NO_LOCAL_ENCRYPTION            (RASBASE+141)
#define ERROR_NO_REMOTE_ENCRYPTION           (RASBASE+142)
#define ERROR_REMOTE_REQUIRES_ENCRYPTION     (RASBASE+143)
#define ERROR_IPXCP_NET_NUMBER_CONFLICT      (RASBASE+144)
#define ERROR_INVALID_SMM                    (RASBASE+145)
#define ERROR_SMM_UNINITIALIZED              (RASBASE+146)
#define ERROR_NO_MAC_FOR_PORT                (RASBASE+147)
#define ERROR_SMM_TIMEOUT                    (RASBASE+148)
#define ERROR_BAD_PHONE_NUMBER               (RASBASE+149)
#define ERROR_WRONG_MODULE                   (RASBASE+150)
#define ERROR_INVALID_CALLBACK_NUMBER        (RASBASE+151)

#define ERROR_SCRIPT_SYNTAX                  (RASBASE+152)
#define ERROR_HANGUP_FAILED                  (RASBASE+153)
#define ERROR_BUNDLE_NOT_FOUND               (RASBASE+154)
#define ERROR_CANNOT_DO_CUSTOMDIAL           (RASBASE+155)
#define ERROR_DIAL_ALREADY_IN_PROGRESS       (RASBASE+156)
#define ERROR_RASAUTO_CANNOT_INITIALIZE	     (RASBASE+157)
#define ERROR_CONNECTION_ALREADY_SHARED      (RASBASE+158)
#define ERROR_SHARING_CHANGE_FAILED          (RASBASE+159)
#define ERROR_SHARING_ROUTER_INSTALL         (RASBASE+160)
#define ERROR_SHARE_CONNECTION_FAILED        (RASBASE+161)
#define ERROR_SHARING_PRIVATE_INSTALL        (RASBASE+162)
#define ERROR_CANNOT_SHARE_CONNECTION        (RASBASE+163)
#define ERROR_NO_SMART_CARD_READER           (RASBASE+164)
#define ERROR_SHARING_ADDRESS_EXISTS         (RASBASE+165)
#define ERROR_NO_CERTIFICATE                 (RASBASE+166)
#define ERROR_SHARING_MULTIPLE_ADDRESSES     (RASBASE+167)
#define ERROR_FAILED_TO_ENCRYPT              (RASBASE+168)
#define ERROR_BAD_ADDRESS_SPECIFIED          (RASBASE+169)
#define ERROR_CONNECTION_REJECT              (RASBASE+170)
#define ERROR_CONGESTION                     (RASBASE+171)
#define ERROR_INCOMPATIBLE                   (RASBASE+172)
#define ERROR_NUMBERCHANGED                  (RASBASE+173)
#define ERROR_TEMPFAILURE                    (RASBASE+174)
#define ERROR_BLOCKED                        (RASBASE+175)
#define ERROR_DONOTDISTURB                   (RASBASE+176)
#define ERROR_OUTOFORDER                     (RASBASE+177)
#define ERROR_UNABLE_TO_AUTHENTICATE_SERVER  (RASBASE+178)
#define ERROR_SMART_CARD_REQUIRED            (RASBASE+179)
#define ERROR_INVALID_FUNCTION_FOR_ENTRY     (RASBASE+180)
#define ERROR_CERT_FOR_ENCRYPTION_NOT_FOUND  (RASBASE+181)
#define ERROR_SHARING_RRAS_CONFLICT          (RASBASE+182)
#define ERROR_SHARING_NO_PRIVATE_LAN         (RASBASE+183)
#define ERROR_NO_DIFF_USER_AT_LOGON          (RASBASE+184)
#define ERROR_NO_REG_CERT_AT_LOGON           (RASBASE+185)
#define ERROR_OAKLEY_NO_CERT                 (RASBASE+186)
#define ERROR_OAKLEY_AUTH_FAIL               (RASBASE+187)
#define ERROR_OAKLEY_ATTRIB_FAIL             (RASBASE+188)
#define ERROR_OAKLEY_GENERAL_PROCESSING      (RASBASE+189)
#define ERROR_OAKLEY_NO_PEER_CERT            (RASBASE+190)
#define ERROR_OAKLEY_NO_POLICY               (RASBASE+191)
#define ERROR_OAKLEY_TIMED_OUT               (RASBASE+192)
#define ERROR_OAKLEY_ERROR                   (RASBASE+193)
#define ERROR_UNKNOWN_FRAMED_PROTOCOL        (RASBASE+194)
#define ERROR_WRONG_TUNNEL_TYPE              (RASBASE+195)
#define ERROR_UNKNOWN_SERVICE_TYPE           (RASBASE+196)
#define ERROR_CONNECTING_DEVICE_NOT_FOUND    (RASBASE+197)
#define ERROR_NO_EAPTLS_CERTIFICATE          (RASBASE+198)
#define RASBASEEND                           (RASBASE+198)
#endif /* _RASERROR_H */