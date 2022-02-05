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
	s8 i = 0,j=3;
	u32 Local_u8delay=0;
	/*******************start first led*********************/
	LED_u8TurnOff(&LED3);
	LED_u8TurnOn(&LED1);

	for(Local_u8delay = 0; Local_u8delay<1000/40 ;Local_u8delay++)
	{
		SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
		SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
		_delay_ms(20);
		SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
		SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
		_delay_ms(20);
	}
	j=2;
	SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
	SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
	_delay_ms(20);
	SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
	SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
	for(j=2; j>=0; j--)
	{
		for(i=9;i>=0;i--)
		{
			for(Local_u8delay = 0; Local_u8delay<1000/40 ;Local_u8delay++)
			{
				SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
				SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
				_delay_ms(20);
				SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
				SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
				_delay_ms(20);
			}

		}
	}


	/*******************start second led*********************/
	LED_u8TurnOff(&LED1);
	LED_u8TurnOn(&LED2);
	j=0;
	for(i=5;i>=0;i--)
	{
		for(Local_u8delay = 0; Local_u8delay<1000/40 ;Local_u8delay++)
		{
			SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
			SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
			_delay_ms(20);
			SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
			SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
			_delay_ms(20);
		}

	}
	/*******************start third led*********************/
	LED_u8TurnOff(&LED2);
	LED_u8TurnOn(&LED3);
	j=3;
	i=0;
	for(Local_u8delay = 0; Local_u8delay<1000/40 ;Local_u8delay++)
	{
		SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
		SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
		_delay_ms(20);
		SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
		SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
		_delay_ms(20);
	}
	j=2;
	SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
	SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
	_delay_ms(20);
	SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
	SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
	for(j=2; j>=0; j--)
	{
		for(i=9;i>=0;i--)
		{
			for(Local_u8delay = 0; Local_u8delay<1000/40 ;Local_u8delay++)
			{
				SSD_u8NumEnableControl(j,SSD_DISABLE,&SSD1);
				SSD_u8NumEnableControl(i,SSD_ENABLE,&SSD2);
				_delay_ms(20);
				SSD_u8NumEnableControl(i,SSD_DISABLE,&SSD2);
				SSD_u8NumEnableControl(j,SSD_ENABLE,&SSD1);
				_delay_ms(20);
			}

		}
	}


}
