/*
 * File
 * 	main.c
 *
 * Brief
 * 	main de la tarea 09, visualizacion de imagenes en pantalla LCD nokia
 * 	leyendo las imagenes de una memoria S25FL164K
 *
 * Authors
 *  Rodrigo Ramos Romero
 *	Gerardo Padilla Torres
 * Date
 *  29/11/2024
 * todo
 *
 */
 
/* TODO: insert other include files here. */
#include "LCD_nokia.h"
#include "LCD_nokia_images.h"
#include "stdint.h"
#include "SPI.h"
#include "Delay.h"
#include "bits.h"

#define IMAGE_SIZE 504

/* Avoid using extern for variables, prefer static or encapsulation in functions */
extern const uint8_t ITESO[IMAGE_SIZE];
extern uint8_t g_master_rxBuffImage_1[IMAGE_SIZE];
extern uint8_t g_master_rxBuffImage_2[IMAGE_SIZE];
extern uint8_t g_master_rxBuffImage_3[IMAGE_SIZE];
extern uint8_t g_master_rxBuffImage_4[IMAGE_SIZE];
extern uint8_t g_master_rxBuffImage_5[IMAGE_SIZE];

int main(void)
{
    SPI_config();
    LCD_nokia_init(); /* Configuration function for the LCD */

    for (;;)
    {
        LCD_nokia_clear(); /* It clears the information printed in the LCD */
        LCD_nokia_bitmap(ITESO); /* It prints an array that holds an image, in this case the initial picture */
        delay(65000);

        LCD_nokia_clear();
        for (int i = 0; i < 5; i++)
        {
        	Receive_Data(bit_1);
        }
        LCD_nokia_bitmap(g_master_rxBuffImage_1);
        delay(65000);

        LCD_nokia_clear();
        Receive_Data(bit_1);
        Receive_Data(bit_5);
        Receive_Data(bit_4);
        Receive_Data(bit_3);
        Receive_Data(bit_2);
        LCD_nokia_bitmap(g_master_rxBuffImage_2);
        delay(65000);

        LCD_nokia_clear();
        Receive_Data(bit_2);
        Receive_Data(bit_1);
        Receive_Data(bit_5);
        Receive_Data(bit_4);
        Receive_Data(bit_3);
        LCD_nokia_bitmap(g_master_rxBuffImage_3);
        delay(65000);

        LCD_nokia_clear();
        for (int i = 0; i < 5; i++)
        {
        	Receive_Data(bit_4);
        }
        LCD_nokia_bitmap(g_master_rxBuffImage_4);
        delay(65000);

        LCD_nokia_clear();
        Receive_Data(bit_1);
        Receive_Data(bit_2);
        Receive_Data(bit_3);
        Receive_Data(bit_4);
        Receive_Data(bit_5);
        LCD_nokia_bitmap(g_master_rxBuffImage_5);
        delay(65000);
    }

    return 0;
}


