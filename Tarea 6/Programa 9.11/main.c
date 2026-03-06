#include <stdio.h>
#include <stdlib.h>

/*
El programa incrementa el salario de los empleados de una empresa
si sus ventas son superiores al millon de pesos anuales. Actualiza el archivo
*/

typedef struct
{
    int clave;
    int departamento;
    float salario;
    float ventas[12];
}empleado;

void incrementa(FILE *);

int main()
{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL)
        incrementa(ar);
    else
        printf("\nEl archivo no se puede abrir");
    rewind(ar); //Esta funcion no tiene ningun uso en el programa

    fclose(ar);
    return 0;
}

void incrementa(FILE *ap)
{
    int i, j, t;
    float sum;
    empleado emple;

    t = sizeof(empleado);

    fread(&emple, sizeof(empleado), 1, ap);

    while(!feof(ap))
    {
        i = ftell(ap) / t;
        sum = 0;
        for (j=0; j<12; j++)
            sum += emple.ventas[j];

        if (sum>1000000)
        {
            emple.salario = emple.salario * 1.10;
            fseek(ap, (i-1)*sizeof(empleado), 0);
            fwrite(&emple, sizeof(empleado), 1, ap);
            fseek(ap, i*sizeof(empleado), 0);
        }
        fread(&emple, sizeof(empleado), 1, ap);
    }
}
