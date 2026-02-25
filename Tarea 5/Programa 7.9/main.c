#include <stdio.h>
#include <stdlib.h>

/*
El programa recibe una cadena de caracteres y un caracter, y cuenta
cuantas veces se encuentra el caracter en la cadena.
*/

int cuenta(char *, char);

void lBufIn(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    char car, cad[50];
    int res;
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    lBufIn();
    printf("\nIngrese el caracter: ");
    car = getchar();
    res = cuenta(cad, car);
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
    return 0;
}

int cuenta(char *cad, char car)
{
    int i = 0, r = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == car)
            r++;
        i++;
    }
    return (r);
}
