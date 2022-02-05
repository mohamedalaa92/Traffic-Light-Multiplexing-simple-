/****************************************************************************/
/****************************************************************************/
/*****************    Author: Mohamed Alaa Eldehimy   ***********************/
/*****************    Layer: HAL                      ***********************/
/*****************    SWC: PORT_program.c             ***********************/
/*****************    VER: 1.00                       ***********************/
/****************************************************************************/
/****************************************************************************/
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "PORT_interface.h"

void PORT_init (void)
{
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN0,PORTA_PIN0_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN1,PORTA_PIN1_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN2,PORTA_PIN2_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN3,PORTA_PIN3_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN4,PORTA_PIN4_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN5,PORTA_PIN5_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN6,PORTA_PIN6_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN7,PORTA_PIN7_DIR);


	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN0,PORTB_PIN0_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN1,PORTB_PIN1_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN2,PORTB_PIN2_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN3,PORTB_PIN3_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN4,PORTB_PIN4_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN5,PORTB_PIN5_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN6,PORTB_PIN6_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTB,DIO_u8PIN7,PORTB_PIN7_DIR);


	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN0,PORTC_PIN0_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN1,PORTC_PIN1_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN2,PORTC_PIN2_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN3,PORTC_PIN3_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN4,PORTC_PIN4_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN5,PORTC_PIN5_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN6,PORTC_PIN6_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN7,PORTC_PIN7_DIR);


	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN0,PORTD_PIN0_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN1,PORTD_PIN1_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN2,PORTD_PIN2_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN3,PORTD_PIN3_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN4,PORTD_PIN4_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN5,PORTD_PIN5_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN6,PORTD_PIN6_DIR);
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN7,PORTD_PIN7_DIR);

/************************************ INTI VALUE***********************************************/
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,PORTA_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN1,PORTA_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN2,PORTA_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN3,PORTA_PIN3_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN4,PORTA_PIN4_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN5,PORTA_PIN5_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN6,PORTA_PIN6_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN7,PORTA_PIN7_INITIAL_VALUE);


    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN0,PORTB_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN1,PORTB_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN2,PORTB_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN3,PORTB_PIN3_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN4,PORTB_PIN4_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN5,PORTB_PIN5_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN6,PORTB_PIN6_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTB,DIO_u8PIN7,PORTB_PIN7_INITIAL_VALUE);


    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN0,PORTC_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN1,PORTC_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN2,PORTC_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN3,PORTC_PIN3_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN4,PORTC_PIN4_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN5,PORTC_PIN5_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN6,PORTC_PIN6_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN7,PORTC_PIN7_INITIAL_VALUE);


    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN0,PORTD_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN1,PORTD_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,PORTD_PIN0_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,PORTD_PIN3_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN4,PORTD_PIN4_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN5,PORTD_PIN5_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN6,PORTD_PIN6_INITIAL_VALUE);
    DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN7,PORTD_PIN7_INITIAL_VALUE);



}
