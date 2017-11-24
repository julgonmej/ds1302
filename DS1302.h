#ifndef _H_DS1302_H
#define _H_DS1302_H
#include "stm32f7xx_hal.h"

/* Initialization */
/* GPIO and DWT */
void DS1302_Init(void);

/* Reads time byte by byte to 'buf' */
void DS1302_ReadTime(uint8_t *buf);

/* Writes time byte by byte from 'buf' */
void DS1302_WriteTime(uint8_t *buf); 

/* Writes 'val' to ram address 'addr' */
/* Ram addresses range from 0 to 30 */
void DS1302_WriteRam(uint8_t addr, uint8_t val);

/* Reads ram address 'addr' */
uint8_t DS1302_ReadRam(uint8_t addr);

/* Clears the entire ram writing 0 */
void DS1302_ClearRam(void);

#endif
