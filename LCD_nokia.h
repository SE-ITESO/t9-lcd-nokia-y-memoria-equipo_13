/*
 * File
 * 	LCD_nokia_images.h
 *
 * Brief
 * 	libreria del modulo para inicializacion y manejo de la pantalla LCD nokia
 * 	inicializacion, escritura y lectura
 *
 * Authors
 *  Rodrigo Ramos Romero
 *	Gerardo Padilla Torres
 * Date
 *  29/11/2024
 * todo
 *
 */

#ifndef LCD_NOKIA_H_
#define LCD_NOKIA_H_

/* TODO: insert other include files here. */
#include "stdint.h"

/* TODO: insert other definitions and declarations here. */
#define SCREENW 84
#define SCREENH 48

#define LCD_X 84
#define LCD_Y 48
#define LCD_DATA 1
#define LCD_CMD 0
#define PORT_DATA_OR_CMD_PIN PORTC
#define GPIO_DATA_OR_CMD_PIN GPIOC
#define DATA_OR_CMD_PIN 5
#define PORT_RESET_PIN PORTC
#define GPIO_RESET_PIN GPIOC
#define RESET_PIN 7
#define CE 6

/*!
 * \brief It configures the LCD
 *
 * \param[in] void
 * \return void
 */
void LCD_nokia_init(void);

/*!
 * \brief It writes a byte in the LCD memory. The place of writting is the last place that was indicated by LCDNokia_gotoXY. In the reset state
 * 			the initial place is x=0 y=0
 *
 * \param[in] uint8_t selector for data or command, uint8_t data
 * \return void
 */
void LCD_nokia_write_byte(uint8_t data_or_command, uint8_t data);

/*!
 * \brief it clears all the figures in the LCD
 *
 * \param[in] void
 * \return void
 */
void LCD_nokia_clear(void);

/*!
 * \brief It is used to indicate the place for writing a new character in the LCD.
 * 	The values that x can take are 0 to 84 and y can take values
 * 	from 0 to 5
 *
 * \param[in] uint8_t x coordinate, uint8_t y coordinate
 * \return void
 */
void LCD_nokia_goto_xy(uint8_t x, uint8_t y);

/*!
 * \brief It allows to write a figure represented by constant array
 *
 * \param[in] uint8_t bitmap []
 * \return void
 */
void LCD_nokia_bitmap(const uint8_t bitmap []);

/*!
 * \brief It writes a character in the LCD
 *
 * \param[in] uint8_t
 * \return void
 */
void LCD_nokia_send_char(uint8_t);

/*!
 * \brief It writes a string into the LCD
 *
 * \param[in] uint8_t string []
 * \return void
 */
void LCD_nokia_send_string(uint8_t string []);

/*!
 * \brief It is used in the initialization routine
 *
 * \param[in] uint8_t string []
 * \return void
 */
void LCD_nokia_delay(void);



#endif /* LCD_NOKIA_H_ */
