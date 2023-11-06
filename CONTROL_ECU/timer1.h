 /******************************************************************************
 *
 * Module: Timer1 Module
 *
 * File Name:  timer1.h
 *
 * Description: Configurable Timer1 driver that supports both normal and compare modes
 *
 * Author: Mohamed Ehab
 *
 *******************************************************************************/
#include "std_types.h"

/*******************************************************************************
 *                          	 Definitions                                   *
 *******************************************************************************/
#define TICKS_PER_SECOND 7812
#define INITIAL_VALUE_FOR_SECOND 0

/*******************************************************************************
 *                          Type Definitions                                   *
 *******************************************************************************/
typedef enum {TIMER1_NORMAL_MODE = 0, TIMER1_COMP_MODE = 1} Timer1_Mode;


typedef enum {TIMER1_NO_CLOCK, TIMER1_NO_PRESCALER, TIMER1_8_PRESCALER, TIMER1_64_PRESCALER,
                TIMER1_256_PRESCALER, TIMER1_1024_PRESCALER} Timer1_Prescaler;


/* Configurations struct for timer1*/
typedef struct { 

    uint16 initial_value;
    /* Compare value to be used in CTC mode only */
    uint16 compare_value;
    /* Timer1 prescalers 8/64/256/11024 */
    Timer1_Prescaler prescaler;
    /* (CTC mode / normal mode) */
    Timer1_Mode mode;
} Timer1_ConfigType;



/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/
/*
 * Description: Function to initialize timer1 with CTC or normal mode
 */
void Timer1_init(const Timer1_ConfigType * Config_Ptr);
/*
 * Description: Function to de-initialize timer1
 */
void Timer1_deInit(void);
/*
 * Description: Function to set the call back function for timer one to be executed by the ISR
 */
void Timer1_setCallBack(void(*a_ptr)(void));
