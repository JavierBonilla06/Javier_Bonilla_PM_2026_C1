#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe los salarios de los profesores de una universidad
y los usa para obtener la nómina y el promedio de los salarios.
*/
void main(void)
{
    int I=0;
    float SAL=0, PRO=0, NOM=0;
    printf("Ingrese el salario del profesor:\t ");
    scanf("%f", &SAL);
    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("Ingrese el salario del siguiente profesor -0 para terminar-: \t");
        scanf("%f", &SAL);
    }while (SAL);
    PRO = NOM / I;
    printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}
