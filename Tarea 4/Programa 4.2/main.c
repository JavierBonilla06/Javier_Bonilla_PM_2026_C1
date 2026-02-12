#include <stdio.h>
#include <stdlib.h>
/*
El programa calcula el cubo de los 10 primeros números naturales
utilizando una función.
*/
int cubo (void);//Declarando la funcion cubo
int I; //variable global

void main(void)
{
    int CUB;
    for (I = 1;I<=10; I++)
    {
        CUB = cubo(); //llamada a la funcion cubo
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void) //funcion cubo que devuelve el cubo de I
{
    int I = 2;//Variable local con el mismo nombre que la variable global
    return (I*I*I);
    //La funcion calcula el cubo de la variable local
}
