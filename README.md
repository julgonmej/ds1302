# Libreria stm32f7-ds1302-lib
DS1302 funciones para STM32f7XX usando HAL,funciona con cualquier frecuencia.
* Puede ser adaptado al STM32F4 reemplazando las llamadas a HAL.
* Incluye reloj y lectura/escritura en RAM.
* Modo de quemado.


## Colaboradores
- (GI) @julgonmej 
- @CapitanMierder
- @perpifran

## Funciones
- Inicialización: void DS1302_Init(void)
- Leer tiempo: void DS1302_ReadTime(uint8_t *buf)
- Escribe tiempo: void DS1302_WriteTime(uint8_t *buf)
- Escribe en Ram: void DS1302_WriteRam(uint8_t addr, uint8_t val)
- Leer direccion de RAM: uint8_t DS1302_ReadRam(uint8_t addr)
- Limpia RAM: void DS1302_ClearRam(void)
- Leer tiempo de quemado: void DS1302_ReadTimeBurst(uint8_t * temp)
- Escribe tiempo quemado: void DS1302_WriteTimeBurst(uint8_t * buf)
- Leer RAM en modo quemado: void DS1302_ReadRamBurst(uint8_t len, uint8_t * buf)
- Escribe RAM en modo quemado: void DS1302_WriteRamBurst(uint8_t len, uint8_t * buf)
