#include "stdio.h"
#include "SensorHumedad1.h"
#include "VRiego1.h"

#define HHSETPOINT 60
#define HLSETPOINT 20

int main (void)
{
    int Humidity = 0;
    printf("Initializing system...");
    (void)hSensorInit();
    (void)valveInit();

    Humidity = hGetHumidity();

    if( (Humidity < HHSETPOINT) && (Humidity > HLSETPOINT) )
    {
        valveSet(1);
    }else {
        //nothing to do
    }

    return 0;
}