#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe los salarios de 15 profesores y los utiliza para
obtener el total de la nómina de la universidad.
*/
void main(void)
{
    int I;
    float SAL=0, NOM=0;
    for (I=1;I<=15;I++)
    {
    printf("\nIngrese el salario del profesor%d : \t", I);
    scanf("%f", &SAL);
    NOM = NOM + SAL;
    }
    printf("\nEl total de la nomina es: %.2f", NOM);
}
