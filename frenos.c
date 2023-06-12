#include <stdio.h>

#define MAX_SENSORES 5

struct SensorFreno {
    int id;
    float presion;
    char ubicacion[30];
};

void sensor(struct SensorFreno *sensor)
{
    for (int i = 0 ; i < MAX_SENSORES ; i++)
    {
        printf("Sensor de freno ID --> (dato numero %i): \n",i+1);
        scanf("%d",&sensor[i].id);
        printf("Presión del sensor: --> (dato numero %i): \n",i+1);
        scanf("%f",&sensor[i].presion);
        printf("Ubicación del sensor: --> (dato numero %i): \n",i+1);
        scanf("%s",sensor[i].ubicacion);
        printf("\n");
    }
}

void imprimir(struct SensorFreno *sensores)
{
     for (int i = 0; i < MAX_SENSORES; i++) {
        printf("Sensor de freno ID: %d\n", sensores[i].id);
        printf("Presión del sensor: %.2f\n", sensores[i].presion);
        printf("Ubicación del sensor: %s\n", sensores[i].ubicacion);
        printf("\n");
    }
}

void limpiar(struct SensorFreno *sensores)
{
    for (int i = 0 ; i < MAX_SENSORES ; i++)
            {
            sensores[i].id = 0;
            sensores[i].presion = 0;
            sensores[i].ubicacion[0] = '\0';
            }
}

void menu(struct SensorFreno *sensores)
{
    int x = 0;
    int z;
    while (x==0)
    {
        printf("\n\nIngresa un 0 si quieres introducir datos, un 1 si quieres borrar datos,\nun 2 si quieres imprimir datos o cualquier otro numero para salir\n\n");
        scanf("%i",&z);
        if (z==0)
        {
            sensor(sensores);
        }
        else if (z==1)
        {
            limpiar(sensores);
        }
        else if (z==2)
        {
            imprimir(sensores);
        }
        else
        {
            x=1;
        }
    }
}

int main() {
    struct SensorFreno sensores[MAX_SENSORES];
    menu(sensores);
    return 0;
}
