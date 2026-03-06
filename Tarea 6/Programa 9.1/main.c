#include <stdio.h>
#include <stdlib.h>

/*
El programa escribe caracteres en un archivo.
*/

int main()
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w");
    if (ar != NULL)
    {
        while ((p1=getchar()) != '\n')
            fputc(p1, ar);
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    return 0;
}
