#include <stdio.h>
#include <stdlib.h>
/*
El programa calcula de manera recursiva la longitud de la cadena
sin utilizar la funcion strlen.
*/

int cuenta(char *);

int main()
{
    int i;
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d", i);
    return 0;
}

int cuenta(char *cadena)
{
    if (cadena[0] == '\0')
        return 0;
    else
        return (1 + cuenta(&cadena[1]));
}
