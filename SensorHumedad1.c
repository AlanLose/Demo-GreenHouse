#include "stdio.h"
#include "SensorHumedad1.h"

int hSensorInit(void)
{
    printf("Initializing Humidity sensor 1...\n");
    /* Implemantacion para inicializar el sensor 1 de humedad*/
    /*Modificacion del Parametro x*/
}

int hGetHumidity(void)
{
    int mValue = 10;
    printf("Get Humidity from sensor1 = %d\n", mValue);
    /* Implemantacion para obtener humedad del sensor 1*/
    return mValue;
}