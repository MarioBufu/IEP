#include "Spi.h"
#include <bcm2835.h>

Spi :: Spi(uint8_t bitOrder,uint8_t spiMode,uint8_t spiCs0,uint, uint8_t highLow,uint16_t clkDiv)
{
    bcm2835_spi_setBitOrder(bitOrder);
    bcm2835_spi_setDataMode(spiMode);
    bcm2835_spi_setClockDivider(clkDiv);
    bcm2835_spi_chipSelect(spiCs0);
    bcm2835_spi_setChipSelectPolarity(spiCs0, highLow);

}

Spi :: transfer(uint8_t send_data){
	
	return bcm2835_spi_transfer(send_data);
}