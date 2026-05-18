
#include "delay.h"

void Delay(int time)
{
    clock_t   now = clock();
    while (clock() - now   <   time);

}