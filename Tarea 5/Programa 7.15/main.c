#include <stdio.h>
#include <ctype.h>

/*
El programa decodifica una cadena de caracteres compuesta por numeros y letras.
*/

void interpreta(char *);

int main()
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
    return 0;
}

void interpreta(char *cad)
{
    int i=0, j, k;
    while (cad[i] != '\0')
    {
        if (isalpha(cad[i]))
        {
            k = cad[i - 1] - 48;
            for (j=0; j<k; j++)
                putchar(cad[i]);
        }
        i++;
    }
}
