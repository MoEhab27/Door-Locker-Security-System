 /******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.h
 *
 * Description: header file for the ATmega32 PWM driver
 *
 * Author: Mohamed Ehab
 *
 *******************************************************************************/

#ifndef PWM_H_
#define PWM_H_


#include "std_types.h"

/*--------------------Definitions-------------------*/
#define HALF_SPEED 50
#define FULL_SPEED 100
#define QUARTER_SPEED 25
#define NO_SPEED 0



/*--------------------Function Prototypes-------------------*/

/*
 * Description : function to initialize timer0 with pwm mode
 */
void PWM_Timer0_Init(unsigned char set_duty_cycle);




#endif /* PWM_H_ */
