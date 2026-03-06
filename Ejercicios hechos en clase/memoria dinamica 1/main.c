#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i= 0;
    int a[20];
    int *p;
    int *p2;

    p = (int *)malloc(sizeof(int));
    p2 = (int *)malloc(10 * sizeof(int));

    *p = 56;
    printf("\nValor contenido en p: %i", *p);
    free(p);

    for (i = 0; i<10; i++)
    {
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &p2[i]);
    }
    printf("\nNumeros almacenados: \n");

    for(i=0; i<10; i++)
    {
        printf("%d ", p2[i]);
    }
    p2 = (int *)realloc(p2, 20 * sizeof(int));

    printf("\nNumeros almacenados: \n");

    for(i=0; i<20; i++)
    {
        printf("%d ", p2[i]);
    }
    free(p2);
    return 0;
}
