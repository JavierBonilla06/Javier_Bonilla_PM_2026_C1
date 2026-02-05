#include <stdio.h>
#include <stdlib.h>
/*
El programa obtiene la suma de los pagos realizados el último mes.
*/
void main(void)
{
    float PAG=0, SPA=0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    do
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");
        scanf("%f", &PAG);
    }while (PAG);
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
