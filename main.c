#include "stdio.h"
#include "SensorHumedad1.h"
#include "VRiego1.h"

#define HSETPOINT 60 //Porcentaje
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

    if ( (Humidity < HSETPOINT) || (Temperature > TSETPOINT) )
    {
        valveSet(1);
    }else {
        //nothing to do
    }

    return 0;
}