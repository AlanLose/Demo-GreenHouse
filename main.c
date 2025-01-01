#include "stdio.h"
#include "SensorHumedad1.h"
#include "VRiego1.h"

#define HHSETPOINT 60 //Porcentaje
#define HLSETPOINT 20 //Porcentaje
#define TSETPOINT 30 //grados_Celsius

int main (void)
{
    int Temperature = 0;
    int Humidity = 0;
    printf("Initializing system...");
    (void)hSensorInit();
    (void)tSensorInit();
    (void)valveInit();
    (void)acInit();

    Temperature = tGetTemperature();
    Humidity = hGetHumidity();

    if( ( (Humidity < HHSETPOINT) && (Humidity > HLSETPOINT) ) || (Temperature > TSETPOINT) )
    {
        valveSet(1);
    }else {
        //nothing to do
    }

    return 0;
}