#include <stdio.h>
#include <stdlib.h>

void Suma(int **m1, int **m2, int f1, int c1, int f2, int c2);
void Resta(int **m1, int **m2, int f1, int c1, int f2, int c2);
void Multi(int **m1, int **m2, int f1, int c1, int f2, int c2);

int main()
{
    int **matriz1, **matriz2;
    int i, j;
    int filas1, columnas1, filas2, columnas2;

    printf("Ingresar el numero de filas de la primera matriz: ");
    scanf("%i", &filas1);
    printf("Ingresar el numero de columnas de la primera matriz: ");
    scanf("%i", &columnas1);

    matriz1 = (int **)malloc(filas1 * sizeof(int *));

    for (i = 0; i < filas1; i++)
    {
        matriz1[i] = (int *)malloc(columnas1 * sizeof (int));
    }

    for (i = 0; i < filas1; i++)
    {
        for (j=0; j < columnas1; j++)
        {
            printf("Ingresa valor de elemento de la fila %i columna %i: ", i+1, j+1);
            scanf("%i", &matriz1[i][j]);
        }
    }
    printf("\nMatriz %ix%i: \n", filas1, columnas1);
    for (i = 0; i < filas1; i++)
    {
        for (j=0; j < columnas1; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }


    printf("\n-----------------------------\n");

    printf("Ingresar el numero de filas de la segunda matriz: ");
    scanf("%i", &filas2);
    printf("Ingresar el numero de columnas de la segunda matriz: ");
    scanf("%i", &columnas2);

    matriz2 = (int **)malloc(filas2 * sizeof(int *));

    for (i = 0; i < filas2; i++)
    {
        matriz2[i] = (int *)malloc(columnas2 * sizeof (int));
    }

    for (i = 0; i < filas2; i++)
    {
        for (j=0; j < columnas2; j++)
        {
            printf("Ingresa valor de elemento de la fila %i columna %i: ", i+1, j+1);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\nMatriz %ix%i: \n", filas2, columnas2);
    for (i = 0; i < filas2; i++)
    {
        for (j=0; j < columnas2; j++)
        {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    Suma(matriz1, matriz2, filas1, columnas1, filas2, columnas2);
    Resta(matriz1, matriz2, filas1, columnas1, filas2, columnas2);
    Multi(matriz1, matriz2, filas1, columnas1, filas2, columnas2);

    for (i=0; i<filas1; i++)
    {
        free(matriz1[i]);
    }
    free(matriz1);

    for (i=0; i<filas2; i++)
    {
        free(matriz2[i]);
    }
    free(matriz2);

    return 0;
}


void Suma(int** m1, int** m2, int f1, int c1, int f2, int c2)
{
    if (f1 == f2 && c1 == c2)
    {
        int **mt;
        int i, j;

        mt = (int **)malloc(f1 * sizeof(int *));

        for (i = 0; i < f1; i++)
        {
        mt[i] = (int *)malloc(c1 * sizeof (int));
        }

        for (i=0; i<f1; i++)
        {
            for (j=0; j<c1; j++)
            {
                mt[i][j] = m1[i][j] + m2[i][j];
            }
        }

        printf("\nEl resultado de la suma es la matriz %ix%i: \n", f1, c1);
        for (i = 0; i < f1; i++)
        {
            for (j=0; j < c1; j++)
                {
                    printf("%d ", mt[i][j]);
                }
        printf("\n");
    }

    for (i=0; i<f1; i++)
    {
        free(mt[i]);
    }
    free(mt);
    }
    else
        printf("Las matrices no tienen el mismo orden, no se puede realizar la suma");
}

void Resta(int** m1, int** m2, int f1, int c1, int f2, int c2)
{
    if (f1 == f2 && c1 == c2)
    {
        int **mt;
        int i, j;

        mt = (int **)malloc(f1 * sizeof(int *));

        for (i = 0; i < f1; i++)
        {
        mt[i] = (int *)malloc(c1 * sizeof (int));
        }

        for (i=0; i<f1; i++)
        {
            for (j=0; j<c1; j++)
            {
                mt[i][j] = m1[i][j] - m2[i][j];
            }
        }

        printf("\nEl resultado de la resta es la matriz %ix%i: \n", f1, c1);
        for (i = 0; i < f1; i++)
        {
            for (j=0; j < c1; j++)
                {
                    printf("%d ", mt[i][j]);
                }
        printf("\n");
    }

    for (i=0; i<f1; i++)
    {
        free(mt[i]);
    }
    free(mt);
    }
    else
        printf("Las matrices no tienen el mismo orden, no se puede realizar la resta");
}

void Multi(int** m1, int** m2, int f1, int c1, int f2, int c2)
{
    if (c1==f2)
    {
        int i, j, k;
        int **mt;

        mt = (int **)malloc(f1 * sizeof(int *));

        for (i = 0; i < f1; i++)
        {
        mt[i] = (int *)malloc(c1 * sizeof (int));
        }

        for (i=0; i<f1; i++)
        {
            for (j=0; j<c2; j++)
            {
                mt[i][j]=0;
                for (k = 0; k < c1; k++)
                {
                    mt[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        printf("\nEl resultado de la multiplicacion es la matriz %ix%i: \n", f1, c2);
        for (i = 0; i < f1; i++)
        {
            for (j=0; j < c2; j++)
                {
                    printf("%d ", mt[i][j]);
                }
        printf("\n");
    }

    for (i=0; i<f1; i++)
    {
        free(mt[i]);
    }
    free(mt);
    }
    else
        printf("La multiplicacion de matrices no es posible");
}
