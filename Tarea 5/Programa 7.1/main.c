#include <stdio.h>
#include <stdlib.h>

void lBufIn(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    char p1, p2, p3 = '$';
    printf("\nIngrese un caracter: ");
    p1=getchar();
    putchar(p1);
    printf("\n");
    lBufIn();

    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n");
    printf("\nIngrese otro caracter: ");
    lBufIn();
    scanf("%c", &p2);
    printf("%c", p2);
    return 0;
}
