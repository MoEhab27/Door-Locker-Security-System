 /******************************************************************************
 *
 * Module: Buzzer
 *
 * File Name: buzzer.h
 *
 * Description: Header file for the buzzer driver to control the buzzer
 * 				through gpio driver
 *
 * Author: Mohamed Ehab
 *
 *******************************************************************************/


#ifndef BUZZER_H_
#define BUZZER_H_

#include "std_types.h"
#include "common_macros.h"
#include "gpio.h"


/*******************************************************************************
 *                      		  Definitions                                  *
 *******************************************************************************/
#define BUZZER_PIN PIN1_ID
#define BUZZER_PORT PORTA_ID


/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/*
 * Description :
 *  Setup the direction for the buzzer pin as output pin through the GPIO driver.
 * Turn off the buzzer through the GPIO.
*/
void Buzzer_init(void);


/*
 * Description :
 *  Function to enable the Buzzer through the GPIO.
*/
void Buzzer_on(void);


/*
 * Description :
 *  Function to disable the Buzzer through the GPIO.
*/
void Buzzer_off(void);



#endif /* BUZZER_H_ */
