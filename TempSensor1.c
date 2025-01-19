#include "stdio.h"
#include "TempSensor1.h"

int tSensorInit(void)
{
    printf("Initializing Temperature sensor 1...\n");
    /* Implemantacion para inicializar el sensor 1 de temperatura*/
}

int tGetTemperature(void)
{
    int mValue = 40;
    printf("Get Temperature from sensor1 = %d\n", mValue);
    /* Implemantacion para obtener temperatura del sensor 1*/
    /*Add some fix*/
    return mValue;
}

float celsiustoFarenheit(float cTemperature){
        printf("Changing from Celsius to Farenheit value\n");
    /* Implemantacion para cambiar la unidades de la temperatura*/

}