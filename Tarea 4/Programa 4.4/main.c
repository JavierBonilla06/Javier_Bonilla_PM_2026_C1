#include <stdio.h>
#include <stdlib.h>
/*
El programa utiliza funciones que usan funciones globales, locales
y estaticas
*/
int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3; //variable global

void main(void)
{
    int I;
    for (I=1;I<=3; I++)
    {
    printf("\nEl resultado de la funcion f1 es: %d", f1());
    printf("\nEl resultado de la funcion f2 es: %d", f2());
    printf("\nEl resultado de la funcion f3 es: %d", f3());
    printf("\nEl resultado de la funcion f4 es: %d", f4());
    }
}

int f1(void)
{
    //Esta funcion utiliza la variable global
    K += K;
    return (K);
}

int f2(void)
{
    //Esta funcion utiliza una variable local
    int K = 1; // Variable local
    K++;
    return (K);
}

int f3(void)
{
    //Esta funcion utiliza una variable estatica
    static int K = 8;
    K += 2;
    return (K);
}

int f4(void)
{
    //Esta funcion utiliza dos variables con el mismo nombre, local y global
    int K = 5;
    K = K + ::K; //Variable local(K) y global (::K)
    return (K);
}
