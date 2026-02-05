#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe un conjunto de pagos realizados en el ultimo
mes y obtiene la suma de los mismos.
*/
void main(void)
{
    float PAG, SPA=0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    while(PAG)
        //La condicion es verdadera solo si el pago es diferente de cero
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f", &PAG);
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
