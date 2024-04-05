/*
 * displays_functions.c
 *
 *  Created on: Apr 5, 2024
 *      Author: emanu
 */

#include "main.h"
#include "dma.h"
#include "i2c.h"
#include "usart.h"
#include "gpio.h"

uint8_t rx_buff[10];

void teste(){

//		uint8_t rx_buff[10];

		char str[20];

		// adc
		float leitura_adc = 1.124;

		HAL_UART_Receive_DMA(&huart3, rx_buff, 10);
		//HAL_UART_Transmit_DMA(&huart3, tx_buff, 10);

		sprintf(str,"Valor do adc = %.2f",leitura_adc);

		SSD1306_GotoXY(13, 30);
		SSD1306_Puts((char*)str, &Font_6x8, 1);
		SSD1306_UpdateScreen();
}

//	  /*for ( int x = 1; x <= 10 ; x++ )
//	  	{
//	  		itoa(x, snum, 10);
//	  		SSD1306_GotoXY (0, 30);
//	  		SSD1306_Puts ("             ", &Font_16x26, 1);
//	  		SSD1306_UpdateScreen();
//	  		if(x < 10) {
//	  			SSD1306_GotoXY (53, 30);  // 1 DIGIT
//	  		}
//	  		else if (x < 100 ) {
//	  			SSD1306_GotoXY (45, 30);  // 2 DIGITS
//	  		}
//	  		else {
//	  			SSD1306_GotoXY (30, 30);  // 4 DIGIS
//	  		}
//	  		SSD1306_Puts (snum, &Font_16x26, 1);
//	  		SSD1306_UpdateScreen();
//	  		HAL_Delay (500);
//	  	    }*/
//	  // Blink
//	  //HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
//	  //HAL_Delay(2000);

