/*
 * display_init.c
 *
 *  Created on: Apr 5, 2024
 *      Author: emanu
 */

#include "main.h"
#include "ssd1306.h"

void Display_Init(){
  	SSD1306_GotoXY (0,0);
    SSD1306_Puts ("TESTE", &Font_11x18, 1);
    SSD1306_GotoXY (0, 30);
    SSD1306_Puts ("LCE", &Font_11x18, 1);
    SSD1306_UpdateScreen();
    HAL_Delay (1000);

    SSD1306_ScrollRight(0,7);
    HAL_Delay(3000);
    SSD1306_ScrollLeft(0,7);
    HAL_Delay(3000);
    SSD1306_Stopscroll();
    SSD1306_Clear();
}

