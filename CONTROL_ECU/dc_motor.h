 /******************************************************************************
 *
 * Module: DC Motor
 *
 * File Name: dc_motor.h
 *
 * Description: header file for the ATmega32 DC Motor driver
 *
 * Author: Mohamed Ehab
 *
 *******************************************************************************/
#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_


#include "std_types.h"


/*--------------------Definitions-------------------*/

#define DC_MOTOR_PORT_ID PORTB_ID
#define DC_MOTOR_IN1_PIN PIN0
#define DC_MOTOR_IN2_PIN PIN1



/*--------------------Type Definitions-------------------*/

typedef enum{
	DC_MOTOR_STOP, DC_MOTOR_ANTI_CLOCKWISE, DC_MOTOR_CLOCKWISE
}DcMotor_State;




/*--------------------Function Prototypes-------------------*/


/*
 * Description : function to initialize the DC motor driver
 */
void DcMotor_Init(void);


/*
 * Description : function to control the state of the dc motor
 */
void DcMotor_Rotate(DcMotor_State state,uint8 speed);



#endif /* DC_MOTOR_H_ */
