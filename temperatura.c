#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define nveces 12

void sensor(float *arreglotemperaturas)
{
    srand(time(NULL));
    for (int i = 0 ; i < nveces ; i++)
    {
        arreglotemperaturas[i] = (float)rand()/RAND_MAX*(39-35)+35;
    }
}

void analiza(float *arreglotemperaturas)
{
    for (int i = 0 ; i < nveces ; i++)
    {
        printf("Medicion %d de temperatura --> %.1f grados celcius ", i+1, arreglotemperaturas[i]);
        if (arreglotemperaturas[i]>37.0)
        {
            printf("--> si tiene fiebre\n");
        }
        else
        {
            printf("--> no tiene fiebre\n");
        }
    }
}

int main ()
{
    float temperaturas[nveces];
    printf("Temperaturas sensadas: \n\n");
    sensor(temperaturas);
    analiza(temperaturas);
}
