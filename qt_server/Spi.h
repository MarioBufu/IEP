#ifndef SPI_H
#define SPI_H
#include <stdint.h>

class Spi : public Serial
{
    private:
       

    public:
        Spi(uint8_t bitOrder,uint8_t spiMode,uint8_t spiCs0,uint, uint8_t highLow,uint16_t clkDiv);
		uint8_t transfer(uint8_t send_data);
		
};

#endif // SPI_H