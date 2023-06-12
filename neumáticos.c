#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define nllantas 4

void sensor(int *arreglopresiones)
{
    srand(time(NULL));
    for (int i = 0 ; i < nllantas ; i++)
    {
        arreglopresiones[i] = rand() % 50 + 20;
    }
}

void imprimir(int *arreglopresiones)
{
    printf("PRESIONES DE LOS NEUMATICOS: \n\n");
    for (int i = 0 ; i < nllantas ; i++)
    {
        printf("Presion del neumatico %d --> %d PSI\n", i+1, arreglopresiones[i]);
    }
}

void evaluar(int *arreglopresiones)
{
    int j;
    printf("introduzca 1 si tienes un auto pequeño, 2 si si tienes un auto mediano o cualquier otro numero si si tienes un auto grande: \n\n");
    scanf("%d",&j);
    if (j==1){
        for (int i = 0; i<nllantas; i++){
            if (arreglopresiones<=29||arreglopresiones>=36){
                printf("WARNING en llanta %d --> %d", i+1, arreglopresiones[i]);
                break;
            }

        }
    }
    else if (j==2){
        for (int l = 0; l<nllantas; l++){
            if (arreglopresiones<=31||arreglopresiones>=36){
                printf("WARNING en llanta %d --> %d", l+1, arreglopresiones[l]);
                break;
            }
        }
    }
    else{
        for (int p = 0; p<nllantas; p++){
            if (arreglopresiones<=34||arreglopresiones>=46){
                printf("WARNING en llanta %d --> %d", p+1, arreglopresiones[p]);
                break;
            }
        }    
    }  
}

int main ()
{
    int presiones[nllantas];
    int x=0;
    int f=0;
    int g=0;

    while(f==0){

    printf("introduzca 1 si quiere leer presiones, 2 si quiere evaluarlas, 3 si quiere imprimir o cualquier otro numero si quieres salir: \n\n");
    scanf("%d",&x);

    if (x==1){
        sensor(presiones);
        g=1;
    }
    else if (x==2){
        if (g==1){
        evaluar(presiones);
        }
        else{printf("\n\nno tienes nada sensado\n\n");}
    }
    else if (x==3){
        if (g==1){
        imprimir(presiones); 
        }
        else{printf("\n\nno tienes nada sensado\n\n");}
    }
    else{break;}  
    }
}
