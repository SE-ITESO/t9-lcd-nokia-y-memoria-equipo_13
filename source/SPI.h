/*
 * File
 * 	SPI.h
 *
 * Brief
 * 	libreria del modulo para inicializacion y recibir datos con SPI
 *
 * Authors
 *  Rodrigo Ramos Romero
 *	Gerardo Padilla Torres
 * Date
 *  29/11/2024
 * todo
 *
 */

#ifndef SPI_H_
#define SPI_H_

/* TODO: insert other include files here. */
#include "MK64F12.h"

/* TODO: insert other definitions and declarations here. */

/*Definiciones SPI */
#define EXAMPLE_DSPI_MASTER_BASEADDR         SPI0
#define DSPI_MASTER_CLK_SRC                  DSPI0_CLK_SRC
#define DSPI_MASTER_CLK_FREQ                 CLOCK_GetFreq(DSPI0_CLK_SRC)
#define EXAMPLE_DSPI_MASTER_PCS_FOR_INIT     kDSPI_Pcs0
#define EXAMPLE_DSPI_MASTER_PCS_FOR_TRANSFER kDSPI_MasterPcs0
#define EXAMPLE_DSPI_DEALY_COUNT             0xfffffU

/*Definiciones para la transferencia de datos, tamanos y baudrates */
#define TRANSFER_SIZE     				64U
#define TRANSFER_BAUDRATE 				1000000U //1 MHz for the LCD
#define TRANSFER_BAUDRATE_MEMORY 		2000000U //2 Mhz for the Memory
#define IMAGE_MEMORY_SIZE				504		//504 bytes for the images

/*Pins to clean up magic numbers*/
#define PIN0_IDX 	0u
#define PIN1_IDX 	1u
#define PIN2_IDX 	2u
#define PIN3_IDX 	3u
#define PIN16_IDX  	16u
#define PIN17_IDX 	17u

/*Definitions to clean up magi numbers */
#define Frame_bits  8U
#define Nano_second 1000000000U

/*!
 * \brief configuration for SPI protocol transfers
 *
 * \param[in] void
 * \return void
 */
void SPI_config(void);

/*!
 * \brief Receive data with SPI protocol
 *
 * \param[in] uint8_t
 * \return void
 */
void Receive_Data(uint8_t x);

#endif /* SPI_H_ */
