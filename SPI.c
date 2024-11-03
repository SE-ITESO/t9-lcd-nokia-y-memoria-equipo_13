/*
 * File
 * 	SPI.c
 *
 * Brief
 * 	ejecutable del modulo para inicializacion y recibir datos con SPI
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
#include "bits.h"
#include "SPI.h"
#include "fsl_dspi.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "fsl_clock.h"
#include "clock_config.h"
#include "delay.h"

/* TODO: insert other definitions and declarations here. */
extern uint8_t g_master_rxBuffImage_1[IMAGE_MEMORY_SIZE];


void SPI_config(void){

	uint32_t srcClock_Hz;

	const port_pin_config_t button_config = { //Falta configurar aqui
			kPORT_PullDisable,
			kPORT_FastSlewRate,
	        kPORT_PassiveFilterDisable,
	        kPORT_OpenDrainDisable,
	        kPORT_LowDriveStrength,
	        kPORT_MuxAlt2,
	 	 	kPORT_UnlockRegister
	};

	CLOCK_EnableClock(kCLOCK_Spi0);
	CLOCK_EnableClock(kCLOCK_PortD);
	CLOCK_EnableClock(kCLOCK_PortC);
	CLOCK_EnableClock(kCLOCK_PortB);

	PORT_SetPinConfig(PORTD, PIN0_IDX, &button_config);
	PORT_SetPinConfig(PORTD, PIN1_IDX, &button_config);
	PORT_SetPinConfig(PORTD, PIN2_IDX, &button_config);
	PORT_SetPinConfig(PORTD, PIN3_IDX, &button_config);



}
void Recive_Data(uint8_t x){

}



