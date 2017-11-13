#ifndef SERIAL_H
#define SERIAL_H
#include <stdint.h>

class Serial
{
    private:
       

    public:
        Serial();
		virtual uint8_t transfer(uint8_t send_data);
};

#endif // SERIAL_H