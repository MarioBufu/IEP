#ifndef PWMCLASS_H
#define PWMCLASS_H

#include "PinClass.h"

class PWM
{
    private:
        int freq;
        int gain;


    public:
        void setF(int f);
        void setG(int g);
        int getF();
        int getG();
        void config();
};

#endif // PWMCLASS_H
