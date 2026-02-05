#include <stdio.h>
#include <math.h>
/*
El programa recibe un entero positivo, obtiene y escribe la serie
de ULAM.
*/
void main(void)
{
    int NUM=0;
    printf("Ingresa el numero para calcular la serie: ");
    scanf("%d", &NUM);
    if (NUM > 0)
    {
        printf("\nSerie de ULAM\n");
        printf("%d \t", NUM);
        while (NUM != 1)
        {
            if (pow(-1, NUM) > 0)
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1;
            printf("%d \t", NUM);
        }
    }
    else
        printf("\nNUM debe ser un entero positivo");
}
