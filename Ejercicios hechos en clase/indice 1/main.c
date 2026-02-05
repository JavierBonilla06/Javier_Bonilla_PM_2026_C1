#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4];
    a[0]=5;
    a[1]=56;
    a[2]=100;
    a[3]=250;

    for(int i = 0 ; i < 4 ; i++)
    {
        if(a[i]== 56)
        {
          printf("\nValor encontrado en a[%i] = %i", i, a[i]);
        }else{
            printf("\nValor no encontrado en a[%i]", i);
        }
    }

    return 0;
}
