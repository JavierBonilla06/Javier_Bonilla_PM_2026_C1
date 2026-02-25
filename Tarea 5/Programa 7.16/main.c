#include <stdio.h>
#include <string.h>

/*
El programa recibe dos cadenas de caracteres, calcula e imprime cuantas
veces se encuentra la segunda en la primera
*/

int main()
{
    char cad1[50], cad2[50], *cad0 = " ";
    int i = 0;
    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\nIngrese la cadena a buscar: ");
    gets(cad2);
    strcpy(cad0, cad1);
    cad0 = strstr(cad0, cad2);
    while (cad0 != NULL)
    {
        cad0 = strstr (cad0 + 1, cad2);
        i++;
    }
    printf("\nEl numero de veces que aparece la segunda cadena es: %d", i);
    return 0;
}
