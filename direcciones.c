#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num = 10;
    float decimal = 20.5;
    char letter = 'a';

    printf("\nAddress of int variable: %p\n", &num);
    printf("Address of float variable: %p\n", &decimal);
    printf("Address of char variable: %p\n\n", &letter);    
}
