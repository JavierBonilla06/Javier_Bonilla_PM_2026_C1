#include <stdio.h>
#include <stdlib.h>

/*
El programa recibe el promedio de un estudiante y escribe aprobado
si este es mayor o igual a 6
*/
void main(void)
{
    float PRO;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6)
        printf("\nAprobado");
}
