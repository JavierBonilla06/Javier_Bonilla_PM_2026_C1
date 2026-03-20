#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val_inicial, val_final, depre_acu, depre_mensual,tasa;
    int j, tiempo;
    FILE *ar;

    printf("Ingrese el valor inicial del vehiculo: ");
    scanf("%f", &val_inicial);
    printf("Ingrese el valor final del vehiculo: ");
    scanf("%f", &val_final);
    printf("Ingrese el tiempo de depreciacion en años: ");
    scanf("%d", &tiempo);
    j = tiempo;
    tasa = (((val_inicial - val_final)/tiempo)/val_inicial)*100;
    depre_mensual = ((val_inicial - val_final)/tiempo)/12; //Depreciacion mensual
    depre_acu = 0;

    if ((ar = fopen("archivo.txt", "w")) != NULL)
    {
    printf("| Mes | Valor | Tasa de depreciacion | Depreciacion acumulada |");
    fprintf(ar, "| Mes | Valor | Tasa de depreciacion | Depreciacion acumulada |");

    printf("\n| 0   | %f | %.4f % | %f |", val_inicial, tasa, depre_acu);
    fprintf(ar, "\n| 0   | %f | %.4f % | %f |", val_inicial, tasa, depre_acu);
    for (tiempo=1; tiempo<j*12; tiempo++)
    {
        val_inicial = val_inicial - depre_mensual;
        depre_acu += depre_mensual;
        printf("\n| %d   | %f | %.4f % | %f |", tiempo, val_inicial, tasa, depre_acu);
        fprintf(ar, "\n| %d   | %f | %.4f % | %f |", tiempo, val_inicial, tasa, depre_acu);
    }
        printf("\n| %d   | %f | %.4f % | %f |", tiempo, val_final, tasa, depre_acu+depre_mensual);
        fprintf(ar, "\n| %d   | %f | %.4f % | %f |", tiempo, val_final, tasa, depre_acu+depre_mensual);
        fclose(ar);
    }else
    printf("El archivo no se puede abrir");
    return 0;
}
