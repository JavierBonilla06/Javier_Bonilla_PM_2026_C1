#include <stdio.h>
#include <stdlib.h>
/*
El programa calcula el cubo de los 10 primeros numeros naturales con la
ayuda de una funcion y utlizando parametros por valor.
*/

int cubo(int);

void main(void)
{
    int I;
    for (I=1; I<=10; I++)
        printf("\nEl cubo de I es:%d", cubo(I)); //llamada a la funcion cubo
}

int cubo(int K)
{
    //La funcion calcula el cubo de K
    return (K*K*K);
}
