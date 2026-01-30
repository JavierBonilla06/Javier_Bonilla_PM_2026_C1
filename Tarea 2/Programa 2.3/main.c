#include <stdio.h>
#include <stdlib.h>

/*
El programa recibe el promedio de un estudiante como dato, escribe
aprobado si es mayor o igual a 6, o reprobado en caso contrario
*/
void main(void)
{
    float PRO;
    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &PRO);
    if (PRO >= 6.0)
        printf("\nAprobado");
    else
        printf("\nReprobado");
}
