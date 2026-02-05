#include <stdio.h>
#include <stdlib.h>
/*
El programa calcula y escribe los primeros 50 numeros de Fibonacci.
*/
void main(void)
{
    int I=3, PRI = 0, SEG = 1, SIG;
    printf("\t %d \t %d", PRI, SEG);
    for (I; I<= 50; I++);
    {
        SIG = PRI + SEG;
        PRI = SEG;
        SEG = SIG;
        printf("\t %d", SIG);
    }
}
