#include <stdio.h>
#include <stdlib.h>

void ordenar(FILE *, int);

int main()
{
    int min, max, n;
    int j;
    FILE *ar;
    if ((ar = fopen("archivo.txt", "w")) != NULL)
    {
    printf("Escriba el valor minimo del rango: ");
    scanf("%d", &min);

    printf("\nEscriba el valor maximo del rango: ");
    scanf("%d", &max);

    printf("\nEscriba cuantos numeros va a generar: ");
    scanf("%d", &n);

    for (j=0; j<=n; j++)
    {
        int numal = rand() % (max - min + 1) + min;
        printf("%d ", numal);
        fprintf(ar, "%d ", numal);
    }
    /*
    Desde el inicio de main hasta esta linea para generar los numeros casuales
    y guardarlos en el archivo de texto
    */
    fclose(ar);
    }

    ordenar(ar, n);
    /*
    La funcion ordenar lee los datos del archivo y los ordena utilizando el algoritmo
    bubblesort. Tambien se supone que agrega los numeros ordenados al final del
    archivo, pero por alguna razon no lo hace.
    */
    return 0;
}


void ordenar(FILE *ar, int n)
{
    int j, *i, cambio, buffer;
    if ((ar = fopen("archivo.txt", "r+")) != NULL)
    {
        i = (int *)malloc(n * sizeof(int));
        printf("\n\n");

        for (j=0; j<=n; j++)
        {
        fscanf(ar, "%d", &i[j]);
        }

        //Algoritmo bubblesort para ordenar los numeros generados
        cambio = 1;
        while (cambio == 1)
        {
            cambio = 0;
            for (j = 0; j <= n-2; j++)
            {
                if (i[j] > i[j+1])
                    {
                        buffer = i[j];
                        i[j] = i[j+1];
                        i[j+1] = buffer;
                        cambio = 1;
                    }
            }
        }
        printf("\n---------------------------------------------");
        fprintf(ar, "\n---------------------------------------------");
  for (j = 0; j <= n-1; j++)
  {
    printf("\nElemento %d: %d", j+1, i[j]);
    fprintf(ar, "\nElemento %d: %d", j+1, i[j]);
  }
  free(i);
    }
    else{
        printf("\nNo se puede abrir el archivo");
    }
    fclose(ar);
}
