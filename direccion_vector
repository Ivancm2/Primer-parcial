#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int v[10];
    int i, *o;

    for (i=0; i < 10; i++) v[i] = i;
    for (i=0; i < 10; i++) printf ("\n%d  - memoria: %p", v[i], &v[i]);

    o = v;
    printf ("\n\n");

    for (i=0; i < 10; i++) printf ("\n%d  - memoria: %p", *o++, (o-1));
    printf ("\n\n");

/* Tras cada p++ el puntero señala a la siguiente posición en v 
ejercicio: imprima las direcciones de cada posición del vector
¿son las mismas?*/
}
