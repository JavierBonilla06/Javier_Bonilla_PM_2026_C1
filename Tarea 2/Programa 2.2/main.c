#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe como dato el precio de un producto importado
e incremeta el mismo por 11% si es superior a $1,500
*/
void main(void)
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE > 1500)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo precio: %7.2f", NPR);
    }
}
