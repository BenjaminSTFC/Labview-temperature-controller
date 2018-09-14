/****************************************************************************
 *                       Thurlby-Thandar CPX400 Series PSU                           
/***************************************************************************** 
 *	  Copyright 2003 Product Technology Partners Ltd.  All Rights Reserved.  * 
 *****************************************************************************
 *                                                                          
 * Title:    CPX400.h                                        
 * Purpose:  Thurlby-Thandar CPX400 Series PSU                                       
 *           instrument driver declarations.                                
 *                                                                          
 ****************************************************************************/

#ifndef __CPX400_HEADER
#define __CPX400_HEADER

#include <ivi.h>
#include <ividcpwr.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/****************************************************************************
 *----------------- Instrument Driver Revision Information -----------------*
 ****************************************************************************/
#define CPX400_MAJOR_VERSION                1     /* Instrument driver major version   */
#define CPX400_MINOR_VERSION                4     /* Instrument driver minor version   */
                                                                
#define CPX400_CLASS_SPEC_MAJOR_VERSION     2     /* Class specification major version */
#define CPX400_CLASS_SPEC_MINOR_VERSION     0     /* Class specification minor version */
/*
The models covered by this document are as follows.
CPX400DP			60V, 20A, 400W Dual Output power supply	 
CPX400SP			60V, 20A, 400W Single Output power supply
XPF6020DP			60V, 20A, 400W Dual Output power supply	 
XPF6020SP			60V, 20A, 400W Single Output power supply
															 
*/

#define CPX400_SUPPORTED_INSTRUMENT_MODELS  "CPX400DP,CPX400SP,XPF6020DP,XPF6020SP"
#define CPX400_DRIVER_VENDOR                "Thurlby Thandar Instruments Limited (www.tti-test.com)"
#define CPX400_DRIVER_DESCRIPTION           "TTi/Sorensen CPX/XPF Series DC power supply"
                   
typedef enum{CPX400DP,XPF6020DP,CPX400SP,XPF6020SP,CPX200DP,CPX200SP,XPF6010DP,XPF6010SP}PSUModel_t;
	
/**************************************************************************** 
 *------------------------------ Useful Macros -----------------------------* 
 ****************************************************************************/

    /*- Defined values for rangeType parameter of function -----------------*/
    /*- ConfigureOutputRange -----------------------------------------------*/
                                                                                            
    /*- Defined values for rangeType parameter of function -----------------*/
    /*- ConfigureOutputRange -----------------------------------------------*/
#define CPX400_VAL_RANGE_CURRENT               IVIDCPWR_VAL_RANGE_CURRENT              
#define CPX400_VAL_RANGE_VOLTAGE               IVIDCPWR_VAL_RANGE_VOLTAGE              
    /*=PTP KCS===============================================================*
        Add definitions for range types here starting at
        IVIDCPWR_VAL_RANGE_TYPE_SPECIFIC_EXT_BASE.  Example:

#define CPX400_VAL_NEW_RANGE               (IVIDCPWR_VAL_RANGE_TYPE_SPECIFIC_EXT_BASE + 0L)
     *============================================================END=PTP KCS=*/			 
#define CPX400_VAL_RANGE_1             (IVIDCPWR_VAL_RANGE_TYPE_SPECIFIC_EXT_BASE + 0L) 
#define CPX400_VAL_RANGE_2             (IVIDCPWR_VAL_RANGE_TYPE_SPECIFIC_EXT_BASE + 1L) 
#define CPX400_VAL_RANGE_3             (IVIDCPWR_VAL_RANGE_TYPE_SPECIFIC_EXT_BASE + 2L) 


    /*- Defined values for outputState parameter of function ---------------*/
    /*- QueryOutputState ---------------------------------------------------*/
#define CPX400_VAL_OUTPUT_CONSTANT_VOLTAGE     IVIDCPWR_VAL_OUTPUT_CONSTANT_VOLTAGE
#define CPX400_VAL_OUTPUT_CONSTANT_CURRENT     IVIDCPWR_VAL_OUTPUT_CONSTANT_CURRENT
#define CPX400_VAL_OUTPUT_OVER_VOLTAGE         IVIDCPWR_VAL_OUTPUT_OVER_VOLTAGE       
#define CPX400_VAL_OUTPUT_OVER_CURRENT         IVIDCPWR_VAL_OUTPUT_OVER_CURRENT       
#define CPX400_VAL_OUTPUT_UNREGULATED          IVIDCPWR_VAL_OUTPUT_UNREGULATED    


    /*- Defined values for measurementType parameter of function -----------*/
    /*- Measure ------------------------------------------------------------*/
#define CPX400_VAL_MEASURE_CURRENT             IVIDCPWR_VAL_MEASURE_CURRENT
#define CPX400_VAL_MEASURE_VOLTAGE             IVIDCPWR_VAL_MEASURE_VOLTAGE

    /*=PTP KCS===============================================================*
        Add definitions for measurement types here starting at
        IVIDCPWR_VAL_MEASURE_SPECIFIC_EXT_BASE.  Example:

#define CPX400_VAL_NEW_MEASUREMENT               (IVIDCPWR_VAL_OUTPUT_STATE_SPECIFIC_EXT_BASE + 0L)
     *============================================================PTP KCS=*/
    /*=PTP KCS===============================================================
       Add useful instrument macros here.                                                 
     *============================================================END=PTP KCS=*/

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/

    /*- IVI Inherent Instrument Attributes ---------------------------------*/    

        /* User Options */
#define CPX400_ATTR_RANGE_CHECK                   IVI_ATTR_RANGE_CHECK                    /* ViBoolean */
#define CPX400_ATTR_QUERY_INSTR_STATUS            IVI_ATTR_QUERY_INSTR_STATUS             /* ViBoolean */
#define CPX400_ATTR_QUERY_INSTRUMENT_STATUS       IVI_ATTR_QUERY_INSTRUMENT_STATUS        /* ViBoolean */
#define CPX400_ATTR_CACHE                         IVI_ATTR_CACHE                          /* ViBoolean */
#define CPX400_ATTR_SIMULATE                      IVI_ATTR_SIMULATE                       /* ViBoolean */
#define CPX400_ATTR_RECORD_COERCIONS              IVI_ATTR_RECORD_COERCIONS               /* ViBoolean */
#define CPX400_ATTR_INTERCHANGE_CHECK             IVI_ATTR_INTERCHANGE_CHECK              /* ViBoolean */

        /* Instrument Capabilities */
#define CPX400_ATTR_NUM_CHANNELS                  IVI_ATTR_NUM_CHANNELS                   /* ViInt32,  read-only  */

        /* Driver Information  */
#define CPX400_ATTR_SPECIFIC_DRIVER_PREFIX        IVI_ATTR_SPECIFIC_DRIVER_PREFIX         /* ViString, read-only  */
#define CPX400_ATTR_SUPPORTED_INSTRUMENT_MODELS   IVI_ATTR_SUPPORTED_INSTRUMENT_MODELS    /* ViString, read-only  */
#define CPX400_ATTR_GROUP_CAPABILITIES            IVI_ATTR_GROUP_CAPABILITIES             /* ViString, read-only  */
#define CPX400_ATTR_INSTRUMENT_MANUFACTURER       IVI_ATTR_INSTRUMENT_MANUFACTURER        /* ViString, read-only  */
#define CPX400_ATTR_INSTRUMENT_MODEL              IVI_ATTR_INSTRUMENT_MODEL               /* ViString, read-only  */
#define CPX400_ATTR_INSTRUMENT_FIRMWARE_REVISION  IVI_ATTR_INSTRUMENT_FIRMWARE_REVISION              /* ViString, read-only  */
#define CPX400_ATTR_SPECIFIC_DRIVER_MAJOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_MAJOR_VERSION  /* ViInt32,  read-only  */
#define CPX400_ATTR_SPECIFIC_DRIVER_MINOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_MINOR_VERSION  /* ViInt32,  read-only  */
#define CPX400_ATTR_SPECIFIC_DRIVER_REVISION      IVI_ATTR_SPECIFIC_DRIVER_REVISION       /* ViString, read-only  */
#define CPX400_ATTR_SPECIFIC_DRIVER_VENDOR        IVI_ATTR_SPECIFIC_DRIVER_VENDOR         /* ViString, read-only  */
#define CPX400_ATTR_SPECIFIC_DRIVER_DESCRIPTION   IVI_ATTR_SPECIFIC_DRIVER_DESCRIPTION    /* ViString, read-only  */
#define CPX400_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION /* ViInt32, read-only */
#define CPX400_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION /* ViInt32, read-only */

        /* Error Info */
#define CPX400_ATTR_PRIMARY_ERROR                 IVI_ATTR_PRIMARY_ERROR                  /* ViInt32   */
#define CPX400_ATTR_SECONDARY_ERROR               IVI_ATTR_SECONDARY_ERROR                /* ViInt32   */
#define CPX400_ATTR_ERROR_ELABORATION             IVI_ATTR_ERROR_ELABORATION              /* ViString  */

        /* Advanced Session Information */
#define CPX400_ATTR_LOGICAL_NAME                  IVI_ATTR_LOGICAL_NAME                   /* ViString, read-only  */
#define CPX400_ATTR_RESOURCE_DESCRIPTOR           IVI_ATTR_RESOURCE_DESCRIPTOR            /* ViString, read-only  */
#define CPX400_ATTR_IO_SESSION_TYPE               IVI_ATTR_IO_SESSION_TYPE                /* ViString, read-only  */
#define CPX400_ATTR_IO_SESSION                    IVI_ATTR_IO_SESSION                     /* ViSession, read-only */
#define CPX400_ATTR_IO_RESOURCE_DESCRIPTOR        IVI_ATTR_IO_RESOURCE_DESCRIPTOR         /* ViString, read-only  */
#define CPX400_ATTR_DRIVER_SETUP                  IVI_ATTR_DRIVER_SETUP                   /* ViString, read-only  */        
    

    /*- Instrument-Specific Attributes -------------------------------------*/

    /*- Basic Instrument Operations ----------------------------------------*/
#define CPX400_ATTR_VOLTAGE_LEVEL             IVIDCPWR_ATTR_VOLTAGE_LEVEL           /* ViReal64,  multi-channel, volts */
#define CPX400_ATTR_OVP_ENABLED               IVIDCPWR_ATTR_OVP_ENABLED             /* ViBoolean, multi-channel        */
#define CPX400_ATTR_OVP_LIMIT                 IVIDCPWR_ATTR_OVP_LIMIT               /* ViReal64,  multi-channel, volts */
#define CPX400_ATTR_CURRENT_LIMIT_BEHAVIOR    IVIDCPWR_ATTR_CURRENT_LIMIT_BEHAVIOR  /* ViInt32,   multi-channel        */
#define CPX400_ATTR_CURRENT_LIMIT             IVIDCPWR_ATTR_CURRENT_LIMIT           /* ViReal64,  multi-channel, amps  */
#define CPX400_ATTR_OUTPUT_ENABLED            IVIDCPWR_ATTR_OUTPUT_ENABLED          /* ViBoolean, multi-channel        */

    /*- Trigger Attributes -------------------------------------------------*/

#define CPX400_ATTR_ID_QUERY_RESPONSE      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1L)     /* ViString (Read Only) */
#define CPX400_ATTR_RANGE_SETTING             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2L)
#define CPX400_ATTR_OCP_LIMIT                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 3L)
#define CPX400_ATTR_IFLOCK             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4L)
#define CPX400_ATTR_VOLTAGE_STEP_SIZE         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 5L)
#define CPX400_ATTR_CURRENT_STEP_SIZE         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6L)
#define CPX400_ATTR_LIMIT_STATUS_REGISTER_1 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 8L)
#define CPX400_ATTR_LIMIT_STATUS_ENABLE_REGISTER_1 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9L)
#define CPX400_ATTR_STANDARD_EVENT_ENABLE_REGISTER (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 10L)
#define CPX400_ATTR_STANDARD_EVENT_STATUS_REGISTER (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 11L)
#define CPX400_ATTR_IST_LOCAL_MESSAGE         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 12L)
#define CPX400_ATTR_OPERATION_COMPLETE_STATUS (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13L)
#define CPX400_ATTR_PARALLEL_POLE_ENABLE_REGISTER (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14L)
#define CPX400_ATTR_SERVICE_REQUEST_ENABLE_REGISTER (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15L)
#define CPX400_ATTR_STATUS_BYTE_REGISTER      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 16L)
#define CPX400_ATTR_ADDRESS                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 17L)
#define CPX400_ATTR_VERIFY_VOLTAGE            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18L)
#define CPX400_ATTR_OUTPUT_ENABLED_ALL        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 19L)
#define CPX400_ATTR_LIMIT_STATUS_REGISTER_2   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 21L)
#define CPX400_ATTR_LIMIT_STATUS_ENABLE_REGISTER_2 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 22L)
#define CPX400_ATTR_TRACKING_MODE   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 23L)
#define CPX400_ATTR_RATIO                      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 25L)
    /*=PTP KCS===============================================================*
        Add attribute definitions here.                                       
        #define CPX400_ATTR_MY_ATTRIBUTE     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2L) 
     *============================================================END=PTP KCS=*/



/*============================================================END=PTP KCS=*/
	
	
/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/
    /*- Defined values for attribute CPX400_ATTR_CURRENT_LIMIT_BEHAVIOR ---*/
    /*- Defined values for attribute TQLP3_ATTR_CURRENT_LIMIT_BEHAVIOR ---*/
#define CPX400_VAL_CURRENT_REGULATE           IVIDCPWR_VAL_CURRENT_REGULATE
#define CPX400_VAL_CURRENT_TRIP               IVIDCPWR_VAL_CURRENT_TRIP    
    /*=PTP KCS===============================================================*
        Add definitions for current limit behavior here starting at
        IVIDCPWR_VAL_CURRENT_LIMIT_BEHAVIOR_SPECIFIC_EXT_BASE.  Example:

#define CPX400_VAL_NEW_BEHAVIOR               (IVIDCPWR_VAL_CURRENT_LIMIT_BEHAVIOR_SPECIFIC_EXT_BASE + 0L)
     *============================================================END=PTP KCS=*/

        /* Instrument specific attribute value definitions */

    /*=PTP KCS==============================================================*
        Add value defines for instrument specific attributes here.  Example

    // Defined values for attribute CPX400_ATTR_EXAMPLE 

#define CPX400_VAL_EXAMPLE_1             1
#define CPX400_VAL_EXAMPLE_2             2
#define CPX400_VAL_EXAMPLE_3             3
     *===========================================================END=PTP KCS=*/

/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

    /*- Init and Close Functions -------------------------------------------*/
ViStatus _VI_FUNC  CPX400_init (ViRsrc resourceName, ViBoolean IDQuery,
                                  ViBoolean resetDevice, ViSession *vi);
ViStatus _VI_FUNC  CPX400_InitWithOptions (ViRsrc resourceName, ViBoolean IDQuery,
                                             ViBoolean resetDevice, ViString optionString, 
                                             ViSession *newVi);
ViStatus _VI_FUNC  CPX400_close (ViSession vi);   

    /*- Coercion Info Functions --------------------------------------------*/
ViStatus _VI_FUNC  CPX400_GetNextCoercionRecord (ViSession vi,
                                                   ViInt32 bufferSize,
                                                   ViChar record[]);

    /*- Locking Functions --------------------------------------------------*/
ViStatus _VI_FUNC  CPX400_LockSession (ViSession vi, ViBoolean *callerHasLock);   
ViStatus _VI_FUNC  CPX400_UnlockSession (ViSession vi, ViBoolean *callerHasLock);


    /*- Channel Info Functions ---------------------------------------------*/
//New==
ViStatus _VI_FUNC CPX400_GetChannelName (ViSession vi, ViInt32 index, 
                                  ViInt32 bufferSize, ViChar name[]);
//==    
    /*- Basic Instrument Operation -----------------------------------------*/
//New==
ViStatus _VI_FUNC CPX400_ConfigureOutputRange (ViSession vi,
                                                ViConstString channelName,
                                                ViInt32 rangeType,
                                                ViReal64 range);

ViStatus _VI_FUNC CPX400_QueryOutputState (ViSession vi,
                                            ViConstString channelName,
                                            ViInt32 outputState,
                                            ViBoolean* inState);
//==
ViStatus _VI_FUNC CPX400_ConfigureOutputEnabled (ViSession vi,
                                                  ViConstString channelName,
                                                  ViBoolean enabled);

ViStatus _VI_FUNC CPX400_ConfigureCurrentLimit (ViSession vi,
                                              ViChar channelName[],
                                              ViInt32 behavior,
                                              ViReal64 limit);
ViStatus _VI_FUNC CPX400_ConfigureOVP (ViSession vi,
                                        ViConstString channelName,
																				ViBoolean enabled,
                                        ViReal64 limit);

ViStatus _VI_FUNC CPX400_ConfigureOCP (ViSession vi,
                                        ViConstString channelName,
                                        ViReal64 limit);

ViStatus _VI_FUNC CPX400_ConfigureVoltageLevel (ViSession vi,
                                                 ViConstString channelName,
                                                 ViReal64 level);

ViStatus _VI_FUNC CPX400_QueryMaxCurrentLimit (ViSession vi,
                                                 ViConstString channelName,
                                                 ViReal64 voltageLevel,
                                                 ViReal64* maxCurrentLimit);

ViStatus _VI_FUNC CPX400_QueryMaxVoltageLevel (ViSession vi,
                                                 ViConstString channelName,
                                                 ViReal64 currentLimit,
                                                 ViReal64* maxVoltageLevel);

ViStatus _VI_FUNC CPX400_ResetOutputProtection (ViSession vi,ViConstString channelName);

ViStatus _VI_FUNC CPX400_IncrementVoltageLevel (ViSession vi,
                                              ViChar channelName[]);
ViStatus _VI_FUNC CPX400_DecrementVoltageLevel (ViSession vi,
                                              ViChar channelName[]);

ViStatus _VI_FUNC CPX400_IncrementCurrentLevel (ViSession vi,
                                              ViChar channelName[]);

ViStatus _VI_FUNC CPX400_DecrementCurrentLevel (ViSession vi,
                                              ViChar channelName[]);

    /*- Measuring ----------------------------------------------------------*/
ViStatus _VI_FUNC CPX400_Measure (ViSession vi,
                                   ViConstString channelName,
                                   ViInt32 measurementType,
                                   ViReal64* measurement);
        /*=PTP KCS:===============================================================*
           Add instrument-specific public function declarations here.                           
         *============================================================END=PTP KCS=*/
    
    /*- Error Functions ----------------------------------------------------*/
//New==
ViStatus _VI_FUNC  CPX400_GetError (ViSession vi, ViStatus *primaryError, 
                                          ViStatus *secondaryError, 
                                          ViChar errorElaboration[256]);
ViStatus _VI_FUNC  CPX400_ClearError (ViSession vi);
//==
ViStatus _VI_FUNC  CPX400_execution_error_query (ViSession vi, ViInt32 *errorCode,
                                         ViChar errorMessage[]);
ViStatus _VI_FUNC  CPX400_error_query (ViSession vi, ViInt32 *errorCode,
                                         ViChar errorMessage[]);
ViStatus _VI_FUNC  CPX400_GetErrorInfo (ViSession vi, ViStatus *primaryError, 
                                          ViStatus *secondaryError, 
                                          ViChar errorElaboration[256]);
ViStatus _VI_FUNC  CPX400_ClearErrorInfo (ViSession vi);
ViStatus _VI_FUNC  CPX400_error_message (ViSession vi, ViStatus errorCode,
                                           ViChar errorMessage[256]);

ViStatus _VI_FUNC CPX400_WaitForOperationComplete (ViSession vi);

    

ViStatus _VI_FUNC CPX400_ClearStatus (ViSession vi);

    /*- Interchangeability Checking Functions ------------------------------*/
//New==
ViStatus _VI_FUNC CPX400_GetNextInterchangeWarning (ViSession vi, 
                                                      ViInt32 bufferSize, 
                                                      ViChar warnString[]);
ViStatus _VI_FUNC CPX400_ResetInterchangeCheck (ViSession vi);
ViStatus _VI_FUNC CPX400_ClearInterchangeWarnings (ViSession vi);
//==
    /*- Utility Functions --------------------------------------------------*/
//New==
ViStatus _VI_FUNC CPX400_InvalidateAllAttributes (ViSession vi);
ViStatus _VI_FUNC CPX400_ResetWithDefaults (ViSession vi);
ViStatus _VI_FUNC CPX400_Disable (ViSession vi);
///==

ViStatus _VI_FUNC  CPX400_reset (ViSession vi);

ViStatus _VI_FUNC CPX400_SaveSetup (ViSession vi,
                                  ViChar channelName[], ViInt32 store);

ViStatus _VI_FUNC CPX400_RecallSetup (ViSession vi,
                                    ViChar channelName[], ViInt32 store);

ViStatus _VI_FUNC CPX400_Local (ViSession vi);

ViStatus _VI_FUNC  CPX400_self_test (ViSession vi, ViInt16 *selfTestResult,
                                       ViChar selfTestMessage[]);
ViStatus _VI_FUNC  CPX400_revision_query (ViSession vi, 
                                            ViChar instrumentDriverRevision[],
                                            ViChar firmwareRevision[]);
ViStatus _VI_FUNC  CPX400_WriteInstrData (ViSession vi, ViConstString writeBuffer); 
ViStatus _VI_FUNC  CPX400_ReadInstrData  (ViSession vi, ViInt32 numBytes, 
                                            ViChar rdBuf[], ViInt32 *bytesRead);

    /*- Set, Get, and Check Attribute Functions ----------------------------*/
ViStatus _VI_FUNC  CPX400_GetAttributeViInt32 (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 *value);
ViStatus _VI_FUNC  CPX400_GetAttributeViReal64 (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 *value);
ViStatus _VI_FUNC  CPX400_GetAttributeViString (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 bufSize, ViChar value[]); 
ViStatus _VI_FUNC  CPX400_GetAttributeViSession (ViSession vi, ViConstString channelName, ViAttr attribute, ViSession *value);
ViStatus _VI_FUNC  CPX400_GetAttributeViBoolean (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean *value);

ViStatus _VI_FUNC  CPX400_SetAttributeViInt32 (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value);
ViStatus _VI_FUNC  CPX400_SetAttributeViReal64 (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value);
ViStatus _VI_FUNC  CPX400_SetAttributeViString (ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value); 
ViStatus _VI_FUNC  CPX400_SetAttributeViSession (ViSession vi, ViConstString channelName, ViAttr attribute, ViSession value);
ViStatus _VI_FUNC  CPX400_SetAttributeViBoolean (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value);

ViStatus _VI_FUNC  CPX400_CheckAttributeViInt32 (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value);
ViStatus _VI_FUNC  CPX400_CheckAttributeViReal64 (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value);
ViStatus _VI_FUNC  CPX400_CheckAttributeViString (ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value); 
ViStatus _VI_FUNC  CPX400_CheckAttributeViSession (ViSession vi, ViConstString channelName, ViAttr attribute, ViSession value);
ViStatus _VI_FUNC  CPX400_CheckAttributeViBoolean (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value);

    /*********************************************************
        Functions reserved for class driver use only.
        End-users should not call these functions.  
     *********************************************************/
ViStatus _VI_FUNC  CPX400_IviInit (ViRsrc resourceName, ViBoolean IDQuery, 
                                     ViBoolean reset, ViSession vi);
ViStatus _VI_FUNC  CPX400_IviClose (ViSession vi);   

/****************************************************************************
 *------------------------ Error And Completion Codes ----------------------*
 ****************************************************************************/
    /*=PTP KCS:==============================================================*
        Add instrument-specific error codes here starting at
        IVI_SPECIFIC_ERROR_BASE.  Example:

#define CPX400_ERROR_NAME  (IVI_SPECIFIC_ERROR_BASE + 1)
     *===========================================================END=PTP KCS=*/

/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif /* __CPX400_HEADER */




