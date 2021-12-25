/* Authors: Just me. */

#ifndef TURTLEBOT3_BURGER_H_
#define TURTLEBOT3_BURGER_H_

#define NAME                             "Burger"

#define WHEEL_RADIUS                     0.036           // meter                                       // 36mm
#define WHEEL_SEPARATION                 0.172500        // meter (BURGER : 0.160, WAFFLE : 0.287)      // 172.500mm
#define TURNING_RADIUS                   0.086250        // meter (BURGER : 0.080, WAFFLE : 0.1435)     // 86.25mm
#define ROBOT_RADIUS                     0.12825         // meter (BURGER : 0.105, WAFFLE : 0.220)      //
#define ENCODER_MIN                      -2147483648     // raw                                         //
#define ENCODER_MAX                      2147483648      // raw                                         //

#define MAX_LINEAR_VELOCITY              (WHEEL_RADIUS * 2 * 3.14159265359 * 46 / 60) // m/s  (BURGER: 61[rpm], WAFFLE: 77[rpm], XM430-W350-T: 46[rpm])       //
#define MAX_ANGULAR_VELOCITY             (MAX_LINEAR_VELOCITY / TURNING_RADIUS)       // rad/s

#define MIN_LINEAR_VELOCITY              -MAX_LINEAR_VELOCITY  
#define MIN_ANGULAR_VELOCITY             -MAX_ANGULAR_VELOCITY 

#endif  //TURTLEBOT3_BURGER_H_