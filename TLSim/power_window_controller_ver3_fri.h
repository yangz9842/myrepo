/**************************************************************************************************\
 *** 
 *** Simulink model       : test
 *** TargetLink subsystem : test/power_window_controller_ver3
 *** Codefile             : power_window_controller_ver3_fri.h
 ***
 *** Generation date: 2025-02-19 01:23:33
 ***
 *** TargetLink version      : 22.1 from 02-Nov-2022
 *** Code generator version  : Build Id 22.1.0.27 from 2022-10-13 12:48:15
\**************************************************************************************************/

#ifndef POWER_WINDOW_CONTROLLER_VER3_FRI_H
#define POWER_WINDOW_CONTROLLER_VER3_FRI_H

#include "tl_defines_a.h"
#include "tl_basetypes.h"
#ifdef TL_FRAME
#include "power_window_controller_ver3_frm.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

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

/**************************************************************************************************\
   GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void power_window_controller_ver3(void);

#ifdef __cplusplus
}
#endif

#endif /* POWER_WINDOW_CONTROLLER_VER3_FRI_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
