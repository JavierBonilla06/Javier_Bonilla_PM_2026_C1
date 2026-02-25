#include <stdio.h>
#include <ctype.h>

/*
El programa recibe una frase y determina el numero de letras
minusculas y mayuscuas que existen en la frase.
*/

int main()
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;
    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    gets(cad);
    while (cad[i] != '\0')
    {
        if (islower (cad[i]))
            mi++;
        else
            if (isupper(cad[i]))
                ma++;
        i++;
    }
    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);
    return 0;
}
