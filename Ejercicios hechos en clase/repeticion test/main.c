#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    /*
    for(int i = -10;i <= 10;i++)
    {
        if(i != 1 && i != -1)
        {
         printf("\nValor de i= %i", i);
        }
    }

    int i = -10;
    while(i <= 10)
    {
               if(i != 1 && i != -1)
        {
         printf("\nValor de i= %i", i);
        }
        i++;
    }
*/
    i = -10;
    do
    {
                       if(i != 1 && i != -1)
        {
         printf("\nValor de i= %i", i);
        }
        i++;
    }while(i <= 10);
    printf("\n---------FIN----------");
    return 0;
}
