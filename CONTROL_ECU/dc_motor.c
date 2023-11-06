 /******************************************************************************
 *
 * Module: DC Motor
 *
 * File Name: dc_motor.c
 *
 * Description: source file for the ATmega32 DC motor driver
 * 				Control the DC Motor direction using L293D H-bridge.
 *
 * Author: Mohamed Ehab
 *
 *******************************************************************************/
#include <avr/io.h>
#include "dc_motor.h"
#include "gpio.h"
#include "pwm.h"


/*--------------------Function Definitions-------------------*/


/*
 * Description : function to initialize the DC motor driver
 */
void DcMotor_Init(void){

	 /* setup motor pins as output pins */
	 GPIO_setupPinDirection(DC_MOTOR_PORT_ID, DC_MOTOR_IN1_PIN, PIN_OUTPUT);
	 GPIO_setupPinDirection(DC_MOTOR_PORT_ID, DC_MOTOR_IN2_PIN, PIN_OUTPUT);

	 /* set the pins to zero initially to stop the motor at the beginning */
	 GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN1_PIN, LOGIC_LOW);
	 GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN2_PIN, LOGIC_LOW);

 }


/*
 * Description : function to control the state of the dc motor
 */
void DcMotor_Rotate(DcMotor_State state,uint8 speed){
	switch(state){

	case(DC_MOTOR_STOP):
		/* write the two motor pins to zero to stop the motor */
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN1_PIN, LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN2_PIN, LOGIC_LOW);
		break;

	case(DC_MOTOR_CLOCKWISE):
		/* rotate clockwise */
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN1_PIN, LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN2_PIN, LOGIC_HIGH);
		break;

	case(DC_MOTOR_ANTI_CLOCKWISE):
		/* rotate anti clockwise */
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN1_PIN, LOGIC_HIGH);
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_IN2_PIN, LOGIC_LOW);
	}

	PWM_Timer0_Init(speed);
}


