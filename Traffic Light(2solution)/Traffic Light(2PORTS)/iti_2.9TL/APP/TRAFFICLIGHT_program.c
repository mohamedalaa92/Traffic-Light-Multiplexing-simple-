/****************************************************************************/
/****************************************************************************/
/*****************    Author: Mohamed Alaa Eldehimy   ***********************/
/*****************    Layer: APP                      ***********************/
/*****************    SWC: TRAFFICLIGHT_program.c     ***********************/
/*****************    VER: 1.00                       ***********************/
/****************************************************************************/
/****************************************************************************/

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../MCAL/DIO/DIO_interface.h"

#include "../HAL/LED/LED_interface.h"
#include "../HAL/SSD/SSD_interface.h"

#include "TRAFFICLIGHT_interfase.h"

#include "util/delay.h"


void TRAFFICLIGHT_voidAPP (LED_init LED1, LED_init LED2, LED_init LED3, SSD_init SSD1, SSD_init SSD2)
{
	s8 i =0,j=3;
	/*******************start first led*********************/
	i=0;
	SSD_u8intNumbers(i,&SSD2);
	j=3;
	SSD_u8intNumbers(j,&SSD1);
	LED_u8TurnOff(&LED3);
	LED_u8TurnOn(&LED1);
	_delay_ms(1000);

	j=2;
	SSD_u8intNumbers(j,&SSD1);
	while(j >=0)
	{
		for(i=9 ; i >=0 ; i--)
		{
			SSD_u8intNumbers(i,&SSD2);
			_delay_ms(1000);
		}
		if(i<=0 && j<=0)
			break;
		i=9;
		SSD_u8intNumbers(i,&SSD2);
		j--;
		SSD_u8intNumbers(j,&SSD1);
	}
	i=0;
	SSD_u8intNumbers(i,&SSD2);
	j=0;
	SSD_u8intNumbers(j,&SSD1);

	/*******************start second led*********************/
	i=5;
	SSD_u8intNumbers(i,&SSD2);
	j=0;
	SSD_u8intNumbers(j,&SSD1);
	LED_u8TurnOff(&LED1);
	LED_u8TurnOn(&LED2);
	for(i=5 ; i >=0 ; i--)
	{
		SSD_u8intNumbers(i,&SSD2);
		_delay_ms(1000);
	}
	/*******************start third led*********************/
	i=0;
	SSD_u8intNumbers(i,&SSD2);
	j=3;
	SSD_u8intNumbers(j,&SSD1);
	LED_u8TurnOff(&LED2);
	LED_u8TurnOn(&LED3);
	_delay_ms(1000);

	j=2;
	SSD_u8intNumbers(j,&SSD1);
	while(j >=0)
	{
		for(i=9 ; i >=0 ; i--)
		{
			SSD_u8intNumbers(i,&SSD2);
			_delay_ms(1000);
		}
		if(i<=0 && j<=0)
			break;
		i=9;
		SSD_u8intNumbers(i,&SSD2);
		j--;
		SSD_u8intNumbers(j,&SSD1);
	}
	i=0;
	SSD_u8intNumbers(i,&SSD2);
	j=0;
	SSD_u8intNumbers(j,&SSD1);

}
