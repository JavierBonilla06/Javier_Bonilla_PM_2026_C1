#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
El programa recibe un archivo formado por cadenas de caracteres y
determina el numero de letras minusculas y mayusculas que hay en el
archivo.
*/

void minymay(FILE *);

int main()
{
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL)
    {
        minymay(ap);
        fclose(ap);
    }
    else
        printf("\nNo se puede abrir el archivo");
    return 0;
}

void minymay(FILE *ap1)
{
    char cad[30];
    int i=0, mi=0, ma=0;
    while (!feof(ap1))
    {
        fgets(cad,30,ap1);
        while (cad[i] != '\0')
        {
            if (islower(cad[i]))
                mi++;
            else
                if (isupper(cad[i]))
                    ma++;
            i++;
        }
    }
    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);
}
