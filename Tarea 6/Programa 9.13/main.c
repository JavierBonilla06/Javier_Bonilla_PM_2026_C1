#include <stdio.h>
#include <stdlib.h>

/*
El programa recibe un archivo de texto y un caracter, y cuenta el numero
de veces que se encuentra el caracter en el archivo.
*/

int cuenta(char);

int main()
{
    int res;
    char car;
    printf("Ingrese el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);
    if (res != -1)
        printf("\n\nEl caracter %c se encuentra en el archivo %d veces", car, res);
    else
        printf("No se pudo abrir el archivo");
    return 0;
}

int cuenta(char car)
{
    int res, con = 0;
    char p;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)
        {
            while (!feof(ar))
            {
                p = getc(ar);
                if (p == car)
                    con++;
            }
            fclose(ar);
            res = con;
        }
        else
            res = -1;
        return (res);
}
