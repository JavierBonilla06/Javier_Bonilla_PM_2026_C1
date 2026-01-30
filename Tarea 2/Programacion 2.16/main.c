#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe como datos la categoría y antigüedad de un empleado
y determina si el mismo satisface las condiciones esstablecidas para
ocupar un nuevo cargo en una sucursal
*/
void main(void)
{
    int CLA, CAT, ANT, RES;
    printf("\nIngrese la clave, categoria y antiguedad del trabajador:");
    scanf("%d %d %d", &CLA, &CAT, &ANT);
    switch(CAT)
    {
    case 3:
    case 4: if (ANT >= 5)
                RES = 1;
            else
                RES = 0;
            break;
    case 2: if (ANT >= 7)
                RES = 1;
            else
                RES = 0;
            break;
    default: RES = 0;
            break;
    }
    if (RES)
        printf("\nEl trabajador con clave %d satisface las condiciones para el puesto", CLA);
    else
        printf("\nEl trabajador con clave %d no satisface las condiciones para el puesto", CLA);
}
