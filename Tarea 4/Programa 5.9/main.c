#include <stdio.h>
#include <stdlib.h>
/* Busqueda secuencial en arreglos desordenados. */
const int MAX=100;

void Lectura(int *, int);
int Busca(int *, int, int);


int main()
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);
    if (RES)
        printf("\nEl elemento se encuentra en la posicion %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
    return 0;
}

void Lectura(int A[], int T)
/* La funcion lee un arreglo unidimensional de T elementos de tipo entero.*/
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int K)
/*La funcion localiza en el arreglo un elemento determinado. Si el elemento es encontrado
regresa la posicion correspondiente, si no se encuentra regresa 0.
*/
{
    int I = 0, BAN = 0, RES;
    while (I < T && !BAN)
        if (A[I] == K)
            BAN++;
        else
            I++;
    if (BAN)
        RES = I + 1;
    else
        RES = BAN;
    return (RES);
}
