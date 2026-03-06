#include <stdio.h>
#include <stdlib.h>

/*
El programa escribe cadenas de caracteres en un archivo
*/

void lBufIn(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    char cad[50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        printf("\n¿Desea ingresar una cadena de caracteres? Si-1 No-0: ");
        scanf("%d", &res);
        while (res)
        {
            lBufIn();
            printf("Ingrese la cadena: ");
            gets(cad);
            fputs(cad, ar);
            printf("\n¿Desea ingresar otra cadena de caracteres? Si-1 No-0: ");
            scanf("%d", &res);
            if (res)
                fputs("\n", ar);
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    return 0;
}
