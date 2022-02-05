/****************************************************************************/
/****************************************************************************/
/*****************    Author: Mohamed Alaa Eldehimy   ***********************/
/*****************    Layer: APP                      ***********************/
/*****************    SWC: Main.c                     ***********************/
/*****************    VER: 1.00                       ***********************/
/****************************************************************************/
/****************************************************************************/

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

#include "../HAL/PORT/PORT_interface.h"

#include "../HAL/SSD/SSD_config.h"
#include "../HAL/LED/LED_config.h"

#include "TRAFFICLIGHT_interfase.h"

void main (void)
{
	PORT_init();
	while(1)
	{
		/******************* We CAN ADD More LED & 7-SEG in CONFIG FILE for each (LED & 7-SEG)**********************/
		/*                 |firstLED|    |secondLED|    |thirdLED|    |7-SEG1|    |7SEG2|                              */
		TRAFFICLIGHT_voidAPP(LED_RED,     LED_YELLOW,    LED_GREEN,    SSD1,       SSD2);

	}
}

