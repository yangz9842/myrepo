/**************************************************************************************************\
 *** 
 *** Simulink model       : test
 *** TargetLink subsystem : test/power_window_controller_ver3
 *** Codefile             : power_window_controller_ver3.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2025-02-19 01:23:33
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Standard
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : enabled
 *** Logging mode                             : Do not log anything
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Utilize bitwise shift operations         : AvoidPotentiallyUndefinedShiftsBasedOnSignedness
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : 31 chars
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\Program Files\dSPACE TargetLink 2022-B\Matlab\Tl\
 ***                                            config\codegen\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 2022-B\Matlab\Tl\
 ***                                            XML\CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 22.1 from 02-Nov-2022
 *** Code generator version  : Build Id 22.1.0.27 from 2022-10-13 12:48:15
\**************************************************************************************************/

#ifndef POWER_WINDOW_CONTROLLER_VER3_H
#define POWER_WINDOW_CONTROLLER_VER3_H

/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "tl_defines_a.h"
#include "tl_basetypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/

struct tag_SIBFS_control_a_tp {
   unsigned int Ca10_iniPassengerUp : 1;
   unsigned int Ca11_PassengerUp : 1;
   unsigned int Ca13_driverUp : 1;
   unsigned int Ca14_iniDriverUp : 1;
   unsigned int Ca15_DriverUp : 1;
   unsigned int Ca17_driverDown : 1;
   unsigned int Ca18_iniDriverDown : 1;
   unsigned int Ca19_DriverDown : 1;
   unsigned int Ca21_emergencyDown : 1;
   unsigned int Ca2_safe : 1;
   unsigned int Ca3_driverNeutral : 1;
   unsigned int Ca4_passengerneutral : 1;
   unsigned int Ca5_passengerDown : 1;
   unsigned int Ca6_iniPassengerDown : 1;
   unsigned int Ca7_passengerDown : 1;
   unsigned int Ca9_passengerUp : 1;
}; /* Description: Type of structure containing bitfields for Stateflow chart  */

/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
extern CAL UInt8 Sa1_auto_down_time; /* 
   LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
   Description: value in 10 ms steps */
extern CAL UInt8 Sa1_auto_up_time; /* 
   LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
   Description: value in 10 ms steps */
extern CAL UInt8 Sa1_emergency_down_time; /* 
   LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
   Description: value in 10 ms steps */

/**************************************************************************************************\
   GLOBAL: global variables (RAM) | Width: 16
\**************************************************************************************************/
extern GLOBAL UInt16 Sa1_obstacle_position; /* 
   LSB: 0.001 OFF: 0 MIN/MAX: 0 .. 0.45
   Description: obstacle position in mm */
extern GLOBAL UInt16 Sa1_window_position; /* 
   LSB: 0.001 OFF: 0 MIN/MAX: 0 .. 0.45
   Description: window position in mm */

/**************************************************************************************************\
   GLOBAL: global variables (RAM) | Width: 8
\**************************************************************************************************/
extern GLOBAL Bool Sa1_driver_down;
extern GLOBAL Bool Sa1_driver_up;
extern GLOBAL Bool Sa1_move_down;
extern GLOBAL Bool Sa1_move_up;
extern GLOBAL Bool Sa1_obstacle_detection;
extern GLOBAL Bool Sa1_passenger_down;
extern GLOBAL Bool Sa1_passenger_up;

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
   GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void power_window_controller_ver3(void);

#ifdef __cplusplus
}
#endif

#endif /* POWER_WINDOW_CONTROLLER_VER3_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
