#include <stdio.h>
#include <stdlib.h>
/*
El programa almacena en un arreglo unidimensional los primeros 100
numeros primos.
*/
const int TAM = 100;

void Imprime(int *, int);
void Primo(int, int *);

int main()
{
    int P[100] = {1,2};
    /*Si escribo el tamaño del arreglo como la variable TAM me da
    un error de sintaxis al tratar de inicializarlo asi que decidi escribirlo
    como un valor numerico.
    */
    int FLA, J = 2, PRI = 3;
    while (J<= TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }
    Imprime (P, TAM);
    return 0;
}

void Primo(int A, int *B)
//La funcion determina si A es primo, si lo es, el valor de *B no se altera
{
    int DI = 3;
    while (*B && (DI < (A / 2)))
    {
        if ((A % DI)== 0)
            *B = 0;
        DI++;
    }
}

void Imprime(int Primos[], int T)
//Esta funcion imprime el arreglo unidimensional de numeros primos.
{
    int I;
    for (I=0; I<T; I++)
    printf("\nPrimos[%d]: %d", I, Primos[I]);
}
