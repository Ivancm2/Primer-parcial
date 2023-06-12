#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct persona
{
    char nombre[20];
    int edad;
    char sexo[10];
} persona1[5];

void llenar_datos(struct persona *per)
{
    printf("Escribe tu nombre: ");
    scanf("%s", &(per->nombre));
    printf("\nEscribe tu edad: ");
    scanf("%i", &(per->edad));
    printf("\nEscribe tu sexo: ");
    scanf("%s", &(per->sexo));
    printf("\n");
}

void imprimir_datos(struct persona *per)
{
    printf("\nnombre: %s", per->nombre);
    printf("\nedad: %i", per->edad);
    printf("\nsexo: %s\n", per->sexo);
}

int main ()
{
    for (int i=0; i <= 4; i++)
    {
    llenar_datos(&persona1[i]);
    }
    for (int x=0; x <= 4; x++)
    {
    imprimir_datos(&persona1[x]);
    }

}
