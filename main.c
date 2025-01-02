#include "stdio.h"
#include "SensorHumedad1.h"
#include "VRiego1.h"
#include "TempSensor1.h"
#include "ACFunction1.h"

#define HLSETPOINT 20u //Porcentaje
#define HHSETPOINT 60u //Porcentaje
#define TSETPOINT 30 //grados_Celsius

int main (void)
{
    int Temperature = 0;
    int Humidity = 0;
    printf("Initializing system...\n");
    (void)hSensorInit();
    (void)tSensorInit();
    (void)valveInit();
    (void)acInit();

    Temperature = tGetTemperature();
    Humidity = hGetHumidity();

    if ( ( (Humidity >= HLSETPOINT) && (Humidity <= HHSETPOINT) ) || (Temperature > TSETPOINT) )
    {
        printf("Turning ON Valve 1 and AC 1\n");
        valveSet(1);
        acSet(1);
    }else {
        printf("Humidity and Temperature is good!\n");
    }

    return 0;
}