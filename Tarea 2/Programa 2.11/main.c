#include <stdio.h>
#include <stdlib.h>
/*
El programa determina el precio de un billete teniendo en cuenta
la distancia recorrida y el tiempo de permanencia del pasajero
*/
void main(void)
{
    int DIS, TIE;
    float BIL;
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);
    if ((DIS*2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8;
    else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCosto del billete: %7.2f", BIL);
}
