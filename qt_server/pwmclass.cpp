#include "pwmclass.h"

PWM::PWM(int f, int g)
{
    this->freq=f;
    this->gain=g;
    bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
    bcm2835_pwm_set_range(PWM_CHANNEL, freq);
}

PWM::getF()
{
    return freq;
}

PWM::getG()
{
    return gain;
}

PWM::setF(int f)
{
    this->freq=f;
    bcm2835_pwm_set_range(PWM_CHANNEL, freq);
}

PWM::setG(int g)
{
    this->gain=g;
    bcm2835_pwm_set_range(PWM_CHANNEL, (this->freq * this->gain)/100);
}

PWM::config()
{

}
