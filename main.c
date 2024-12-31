#include "stdio.h"
#include "SensorHumedad1.h"
#include "VRiego1.h"

#define SETPOINT 60

int main (void)
{
    int Humidity = 0;
    printf("Initializing system...");
    (void)hSensorInit();
    (void)valveInit();

    Humidity = hGetHumidity();

    if(Humidity < SETPOINT)
    {
        valveSet(1);
    }else {
        //nothing to do
    }

    return 0;
}