#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe el precio de un producto e incrementa al mismo
por 11% si es menor a 1500$ y 8% en caso contrario
*/
void main(void)
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
        NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2f", NPR);
}
