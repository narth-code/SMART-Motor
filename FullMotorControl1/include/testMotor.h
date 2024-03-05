/* Texas A&M University
** Electronic Systems Engineering Technology
** Author: Harry Tran
** File: testMotor.h
** ----------
** Motors support function
*/

#ifndef TESTMOTOR_H
#define TESTMOTOR_H

/**
 * @def MOTOR_{axis}_STEP_PIN, MOTOR_{axis}_DIR_PIN
 * Configure the GPIO pin number for the stepper motor 
 * step and direction signal.
 */

/* Motor 1 */
#define MOTOR_X_STEP_PIN 17
#define MOTOR_X_DIR_PIN 21
/* Motor 2 */
#define MOTOR_Y_STEP_PIN 26
#define MOTOR_Y_DIR_PIN 19
/* Motor 3 */
#define MOTOR_Z_STEP_PIN 27
#define MOTOR_Z_DIR_PIN 18

/* Global variable */
bool gotMessage = false; //< Flag to indicate message reception.
long xSteps = 0; ///< Steps for X-axis motor.
long ySteps = 0; ///< Steps for Y-axis motor.
long zSteps = 0; ///< Steps for Z-axis motor.

// put function declarations here:
void bluetoothTask();
void initializeMotors();

#endif /* TESTMOTOR_H */
