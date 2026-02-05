#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe como dato N lanzamientos de martillo y calcula
el promedio de los lanzamientos.
*/
void main(void)
{
    int I, N;
    float LAN, SLA=0;
    do
    {
        printf("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &N);
    }while (N < 1 || N > 11);
    //La estructura do while se usa para confirma que el valor de N este correcto
    for (I=1;I<=N;I++)
    {
        printf("\nIngrese el lanzamiento %d: ", I);
        scanf("%f", &LAN);
        SLA = SLA + LAN;
    }
    SLA = SLA / N;
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
}
