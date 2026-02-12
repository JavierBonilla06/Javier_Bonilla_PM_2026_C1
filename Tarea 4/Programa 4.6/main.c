#include <stdio.h>
#include <stdlib.h>
/*
Prueba de parametros por referencia
*/
int f1(int *);

void main(void)
{
    int I, K = 4;
    for (I=1; I<=3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K despues de llamar a la funcion: %d", f1(&K));
    }
}

int f1(int *R)
/*
La funcion recibe un parametro por referencia. Cada vez que el parametro
se utiliza en la funcion debe ir precedido por el operador *
*/
{
    *R += *R;
    return *R;
}

/*
Cuando escribi el programa tal y como esta en el libro me dio un error
en la linea 14, cambia la funcion f1 para corregirlo
*/
