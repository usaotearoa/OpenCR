/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: Just me. */

#ifndef TURTLEBOT3_BURGER_H_
#define TURTLEBOT3_BURGER_H_

#define NAME                             "Burger"

#define WHEEL_RADIUS                     0.0356          // meter                                       // 35.6mm
#define WHEEL_SEPARATION                 0.172967        // meter (BURGER : 0.160, WAFFLE : 0.287)      // 172.967mm
#define TURNING_RADIUS                   0.086483        // meter (BURGER : 0.080, WAFFLE : 0.1435)     // 86.4835
#define ROBOT_RADIUS                     0.245           // meter (BURGER : 0.105, WAFFLE : 0.220)      //
#define ENCODER_MIN                      -2147483648     // raw                                         //
#define ENCODER_MAX                      2147483648      // raw                                         //

#define MAX_LINEAR_VELOCITY              (WHEEL_RADIUS * 2 * 3.14159265359 * 46 / 60) // m/s  (BURGER: 61[rpm], WAFFLE: 77[rpm], XM430-W350-T: 46[rpm])       //
#define MAX_ANGULAR_VELOCITY             (MAX_LINEAR_VELOCITY / TURNING_RADIUS)       // rad/s

#define MIN_LINEAR_VELOCITY              -MAX_LINEAR_VELOCITY  
#define MIN_ANGULAR_VELOCITY             -MAX_ANGULAR_VELOCITY 

#endif  //TURTLEBOT3_BURGER_H_