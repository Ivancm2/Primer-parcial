#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct persona
{
    char nombre[20];
    int edad;
    char sexo[10];
} persona1;

void llenar_datos(struct persona *per)
{
    printf("Escribe tu nombre: ");
    scanf("%s", &(per->nombre));
    printf("\nEscribe tu edad: ");
    scanf("%i", &(per->edad));
    printf("\nEscribe tu sexo: ");
    scanf("%s", &(per->sexo));
}

void imprimir_datos(struct persona *per)
{
    printf("\nnombre: %s", per->nombre);
    printf("\nedad: %i", per->edad);
    printf("\nsexo: %s", per->sexo);
}

int main ()
{
    llenar_datos(&persona1);
    imprimir_datos(&persona1);
}
