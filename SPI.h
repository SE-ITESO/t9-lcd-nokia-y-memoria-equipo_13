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



void SPI_config(void);

void Recive_Data(uint8_t x);

#endif /* SPI_H_ */
