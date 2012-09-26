#ifndef __CUST_SKY_DS_H__
#define __CUST_SKY_DS_H__

/*****************************************************
    SKY Android model common.
    Feature Name : T_SKY_MODEL_TARGET_COMMON
******************************************************/
#ifdef T_SKY_MODEL_TARGET_COMMON
#endif /* T_SKY_MODEL_TARGET_COMMON */


/* ######################################################################### */
/*****************************************************
    Feature Name : T_SKY_MODEL_TARGET_WCDMA
    Need to include this file in CUST_SKY.h
******************************************************/
#ifdef T_SKY_MODEL_TARGET_WCDMA
/************************************************************************************************************************
**    1. Related Data-connection
************************************************************************************************************************/

#define FEATURE_SKY_DS_ADD_DATA_AIDL

#define FEATURE_SKY_DS_BUG_FIX_STARTUSINGNETWORKFEATURE

#define FEATURE_SKY_DS_FAST_DORMANCY

#define FEATURE_SKY_DS_IMMEDIATE_SETUP
 
#define FEATURE_SKY_DS_PDP_REJECT_POPUP
 
#define FEATURE_SKY_DS_NO_SERVICE_BUG_FIX
 
#define FEATURE_SKY_DS_DHCP_DISCOVER_TIMER
  
#define FEATURE_SKY_DS_CNE_DISABLE
 
#define FEATURE_SKY_DS_SYNC_CS_SERVICE_STATE
 
#define FEATURE_SKY_DS_BACKGROUND_RESTRICT_BUG_FIX 

#define FEATURE_SKY_DS_IP6TABLE_UID_BUG_FIX

// replaced (FEATRUE_SKY_SET_PREFERAPN_BUG_FIX_ICS_4_4)
//#define FEATRUE_SKY_SET_PREFERAPN_BUG_FIX
#define FEATRUE_SKY_SET_PREFERAPN_BUG_FIX_ICS_4_4

#define FEATURE_SKY_DS_NET_OVERLIMIT_API

// replaced (FEATURE_SKY_DS_ICON_NO_SRV_CR347576)
#define FEATURE_SKY_DS_ICON_NO_SRV_CR347576

#define FEATURE_SKY_DS_SKIP_3GPP2_PROFILE_PROCESS

#define FEATURE_SKY_DS_QOS_DISABLE

#define FEATURE_SKY_DS_SBA_1045_CR350813

#define FEATURE_SKY_DS_FIX_RADIO_TECH_UNKOWN_IN_CS

#define FEATURE_SKY_DS_SET_TCPBUF_IN_RAT_CHANGE

#define FEATURE_SKY_DS_SBA_1045_CR348377


/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/ 

#define FEATURE_SKY_DS_ADD_APN_SETTING_HIDDEN_CODE
 
#define FEATURE_SKY_DS_DATA_USAGE_MENU_BLOCKING
 
#define FEATURE_SKY_DS_PREVENT_EDIT_DEFAULT_APN
 
#define FEATURE_SKY_DS_RESOURCE
 
#define FEATURE_SKY_DS_EASY_SETTING
 
#define FEATURE_SKY_DS_FIX_ROAM_CHECK_UI_BUG

#define FEATURE_SKY_DS_SHOW_DATA_ICON_DURING_WIFI_CONNECTED

#define FEATURE_SKY_DS_DISABLE_BEARER_IN_APN

/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log /vpn
************************************************************************************************************************/
 
#define FEATURE_SKY_DS_DATAMANAGER 
 
#define FEATURE_SKT_DS_SYNC_MANAGER
 
#define FEATURE_SKY_DS_ATFWD_PROCESS
 
#define FEATURE_SKY_DS_CTS_ROOT_PROCESS

#define FEATURE_SKY_DS_VPN_FIX
 
#define FEATURE_SKY_DS_CTS_LOCALHOST

#define FEATURE_SKY_DS_SET_TETHERED_DNS

#define FEATURE_SKY_DS_FOR_CTS_TEST

#define FEATURE_SKY_DS_BUSYBOX_INSTALL

#endif/* T_SKY_MODEL_TARGET_WCDMA */


/* ######################################################################### */


/*****************************************************
    SKT Model common.
    Feature Name : T_SKY_MODEL_TARGET_SKT
******************************************************/
#ifdef T_SKY_MODEL_TARGET_SKT
#ifdef T_SKY_MODEL_TARGET_KT
#error Occured !!  This section is SKT only !!
#endif

/************************************************************************************************************************
**    1. Related Data-connection
************************************************************************************************************************/
 
#define FEATURE_SKT_DS_ADD_DATA_SUSPEND_FUNC
 
#define FEATURE_SKT_DS_ROAMING_APN_CHANGE
 
#define FEATURE_SKT_DS_VOICE_CALL_PROTECTION_IN_CS_CALL
 
#define FEATURE_SKT_DS_DNSMASQ_DNS_FORWARD
 
#define FEATURE_SKT_DS_LTE_TCP_BUFFER_CHANGE
 
#define FEATURE_SKT_DS_CSFB_REJECT_IN_VT

/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/
/*====================== (1) Related Data-connection UI ======================*/
 
#define FEATURE_SKT_DS_ADD_ALWAYSON_MENU
    
#define FEATURE_SKT_DS_DATA_CONNECTION_API
  
#define FEATURE_SKT_DS_ADD_3G_DATA_POPUP
 
#define FEATURE_SKT_DS_NO_CONNECTION_POPUP_IN_NOIMEI
 
#define FEATURE_SKT_DS_SW_RESET_RELEASE_MODE_NO_DATA_POPUP
 
#define FEATURE_SKT_DS_MAKE_PDP_CONNETION_TOAST
 
#define FEATURE_SKT_DS_PS_REJECT

#define FEATURE_SKT_DS_SUPPORT_LTE_B2B

#define FEATURE_SKT_DS_RESUME_DOWNLOAD_FOR_WIFI_TO_DATA_CHANGE

/*====================== (2) Related roaming ======================*/
 
#define FEATURE_SKT_DS_ROAMING
 
#define FEATURE_SKT_DS_ALWAYSON_MENU_DISABLED_IN_GPRS

/*====================== (3) Related application ====================== */
 
#define FEATURE_SKT_DS_SKAF_SUPPORT
 
#define FEATURE_SKT_DS_ALLOW_MMS_IN_DATA_DISABLE
 
#define FEATURE_SKT_DS_ALLOW_MMSONLY_APN_IN_DATA_DISABED
 
#define FEATURE_SKT_DS_CALL_TYPE_FOR_HD_SERVICE


/*====================== (4) etc ======================*/
 
#define FEATURE_SKT_DS_HSUPA

#define FEATURE_SKT_DS_GET_IP_ADDRESS

/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log /vpn
************************************************************************************************************************/


/************************************************************************************************************************
**     4. VT
************************************************************************************************************************/


/************************************************************************************************************************
**     5. VoIP(SKT VoIP/TAPS)
************************************************************************************************************************/
 
#define FEATURE_SKT_DS_TAPS
 
#define FEATURE_SKY_DS_SKT_VOIP_BLOCK_WIFI_CUT_DOWN
 
#define FEATURE_SKY_DS_SKT_VOIP_USER_POWER_OFF_HANDLE
 
#define FEATURE_SKY_DS_SKT_VOIP_USER_AIRPLANE_MODE_HANDLE
 
#define FEATURE_SKT_DS_VOIP_DEBUG_SCREEN
 
#define FEATURE_SKT_DS_VOIP_HIDDEN_MENU
 
#define FEATURE_SKT_DS_VOIP_MANUAL_CFG
 
#define FEATURE_SKY_DS_BLOCK_GB_BUILTIN_SIP
 
#define FEATURE_SKY_DS_APPLY_VOIP_PROVIDER
 
#define FEATURE_SKY_DS_BLOCK_VOIP

/************************************************************************************************************************
**     6. GingerBread SIP
************************************************************************************************************************/
 
#define FEATURE_SKT_DS_SIP_PORT_DEL
 
#define FEATURE_SKT_DS_SIP_REGI_REFRESH
#endif/* T_SKY_MODEL_TARGET_SKT */

 
#endif /* __CUST_SKY_DS_H__ */
