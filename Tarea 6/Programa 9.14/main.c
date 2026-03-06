#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
El programa recibe como dato un archivo formado por cadenas de
caracteres y determina el numero de letras minusculas y mayusculas que
hay en el archivo
*/

void minymay(FILE *);

int main()
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        fclose(ar);
    }
    else
        printf("No se pudo abrir el archivo");
    return 0;
}

void minymay(FILE *arc)
{
    int min = 0, may = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);
        if (islower(p))
            min++;
        else
            if (isupper(p))
                may++;
    }
    printf("\nNumero de minusculas: %d", min);
    printf("\nNumero de mayusculas: %d", may);
}
