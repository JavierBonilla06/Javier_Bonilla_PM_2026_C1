#include <stdio.h>
#include <string.h>

void intercambia(char FRA[][30], int);

void lBufIn(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int i, n;
    char FRA[20][30];
    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Ingrese la linea de texto numero %d: ", i+1);
        lBufIn();
        gets(FRA[i]);
    }
    printf("\n\n");
    intercambia(FRA, n);
    for (i=0; i<n; i++)
    {
        printf("Impresion de la linea de texto %d: ", i+1);
        puts(FRA[i]);
    }
    return 0;
}

void intercambia(char FRA[][30], int n)
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i=0; i<(n/2); i++)
    {
        strcpy(cad, FRA[i]);
        strcpy(FRA[i], FRA[j]);
        strcpy(FRA[j], cad);
        j--;
    }
}
