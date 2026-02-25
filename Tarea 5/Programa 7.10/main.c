#include <stdio.h>
#include <stdlib.h>
/*
El programa recibe varias cadenas de caracteres que contienen
reales, los suma y obtiene el promedio de los mismos
*/

void lBufIn(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();
    while (c == 'S')
    {
        printf("\nIngrese la cadena de caracteres: ");
        lBufIn();
        gets(cad);
        i++;
        sum += atof(cad);
        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }
    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);
    return 0;
}
