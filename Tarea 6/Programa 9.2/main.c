#include <stdio.h>
#include <stdlib.h>

/*
El programa lee caracteres de un archivo.
*/

int main()
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)
    {
        while (!feof(ar))
        {
            p1 = fgetc(ar); //Lee el caracter
            putchar(p1); //Pone el caracter en pantalla
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    return 0;
}
//Copie y pegue el archivo del ejercicio anterior para probar que este programa funcionara
