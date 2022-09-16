#include <iostream>
#include "PWM.h"

int main()
{
    std::cout << "Hello Wolrd!!!" << std::endl;
    PWM pwm(26);

    while(1)
    {
        pwm.Write(0);
        delay(3000);
        pwm.Write(90);
        delay(3000);
    }

    return 0;
}