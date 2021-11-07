/* Fancy blinky lights
R Stulberger, R Kariem, and D Evangelista
*/


#include "mbed.h"
#include "platform/mbed_thread.h"
#include "stdio.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS 500


int main()
{
    BusOut bussy(LED1,LED2,LED3,LED4);

    int i=1; 
    while (true) {
        bussy = i;
        i = (i+1)%16;
        thread_sleep_for(BLINKING_RATE_MS);
    }
}
