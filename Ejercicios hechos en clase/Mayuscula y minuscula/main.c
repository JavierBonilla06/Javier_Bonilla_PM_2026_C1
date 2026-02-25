#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("\nIngresa una letra:");
    a = getchar();

    if(a >= 'a' && a <= 'z')
    {
        putchar(a-32);
    }else if(a >= 'A' && a <= 'Z')
    {
        putchar(a+32);
    }
    return 0;
}
