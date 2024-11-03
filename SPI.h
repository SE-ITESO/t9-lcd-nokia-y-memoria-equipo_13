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
#define TRANSFER_SIZE     				64U     /*! Transfer dataSize */
#define TRANSFER_BAUDRATE 				1000000U /*! Transfer baudrate - 1M */
#define TRANSFER_BAUDRATE_MEMORY 		2000000U /*! Transfer baudrate - 2M */
#define IMAGE_MEMORY_SIZE				504		/* Images have size of 504 bytes */

/* Pines a usar para evitar magic numbers*/
#define PIN0_IDX 	0u
#define PIN1_IDX 	1u
#define PIN2_IDX 	2u
#define PIN3_IDX 	3u
#define PIN16_IDX  	16u
#define PIN17_IDX 	17u

/*!
 * \brief configuracion para hacer transferencias con SPI
 *
 * \param[in] void
 * \return void
 */
void SPI_config(void);

/*!
 * \brief funcion para recibir datos con SPI
 *
 * \param[in] uint8_t
 * \return void
 */
void Recive_Data(uint8_t x);

#endif /* SPI_H_ */
