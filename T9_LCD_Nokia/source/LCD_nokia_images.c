/*
 * File
 * 	LCD_nokia_images.c
 *
 * Brief
 * 	ejecutable del modulo que contiene la imagen del ITESO para mostrar en la pantalla
 * 	Nokia LCD
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
#include "LCD_nokia_images.h"


const uint8_t ITESO[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x20, 0x20, 0x30, 0x30, 0x30, 0x38, 0x38, 0x3C, 0x3C, 0x7C, 0x7C, 0x7C, 0xFC, 0xFE, 0xFE,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE,
		0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0x7C, 0x7C, 0x3C, 0x38, 0x38, 0x30, 0x30,
		0x30, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xF8, 0xE0,
		0x80, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
		0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFD, 0xF9, 0x79, 0x7B, 0x33, 0xB7, 0x87, 0x87, 0xCF, 0xCF, 0xC7,
		0x87, 0xB7, 0x37, 0x73, 0x7B, 0xF9, 0xFD, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E, 0x04, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xFE, 0xFC,
		0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x01, 0x03, 0x07,
		0x0F, 0x1F, 0x1F, 0x0F, 0x67, 0xF7, 0xF3, 0x9B, 0x9D, 0x9C, 0x9C, 0x9E, 0x9F, 0x9F, 0x9F, 0x9F,
		0x9F, 0x00, 0x00, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9E, 0x9C, 0x9C, 0x9D, 0x9B, 0xF3, 0xF7, 0x67,
		0x4F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0x00, 0x00, 0x1F, 0x7F, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xFB,
		0xFD, 0xFC, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0xC1, 0x83, 0x83, 0x07, 0x07,
		0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x70, 0x70, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x07, 0x83, 0x83,
		0xC1, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFC, 0xF9, 0xF3, 0xF3, 0xC7, 0x8F,
		0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x00,
		0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x08, 0x1E, 0x3F,
		0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x87,
		0x87, 0x83, 0xC3, 0xC3, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC2,
		0xC3, 0xC3, 0x87, 0x87, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F,
		0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1C, 0x00, 0x01, 0x03, 0x0F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0C, 0x0C, 0x0C, 0x1C, 0x1E, 0x1E, 0x1E, 0x1E, 0x3E,
		0x3F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
		0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x3E, 0x3E, 0x1E, 0x1E, 0x1E,
		0x1C, 0x1C, 0x0C, 0x0C, 0x0C, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};

uint8_t g_master_rxBuffImage_1[] = {0};
uint8_t g_master_rxBuffImage_2[] = {0};
uint8_t g_master_rxBuffImage_3[] = {0};
uint8_t g_master_rxBuffImage_4[] = {0};
uint8_t g_master_rxBuffImage_5[] = {0};
