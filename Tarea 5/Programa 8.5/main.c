#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lBufIn(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

union datos
{
    char celular[15];
    char correo[20];
};

typedef struct
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a);

int main()
{
    alumno a1 = {120, "María", "Contabilidad", 8.9, "5-158-40-50"}, a2, a3;

    printf("Alumno 2\n");
    printf("Ingrese la matricula: ");
    scanf("%d", &a2.matricula);
    lBufIn();
    printf("Ingrese el nombre: ");
    gets(a2.nombre);
    lBufIn();
    printf("Ingrese la carrera: ");
    gets(a2.carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    lBufIn();
    printf("Ingrese el correo electronico: ");
    gets(a2.personales.correo);

    printf("Alumno 3\n");
    Lectura(&a3);

    /*Impresion de resultado*/
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    strcpy(a1.personales.correo, "hgimenez@hotmail.com");

    puts(a1.personales.celular);
    puts(a1.personales.correo);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular); //Basura
    puts(a2.personales.correo);

    printf("Ingrese el telefono celular del alumno 2: ");
    lBufIn();
    gets(a2.personales.celular);

    puts(a2.personales.celular); //Escribe el telefono ingresado
    puts(a2.personales.correo); //Ahora es basura

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo); //Basura
    return 0;
}

void Lectura(alumno *a)
{
    printf("Ingrese la matricula: ");
    scanf("%d", &(*a).matricula);
    lBufIn();
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    lBufIn();
    printf("Ingrese la carrera: ");
    gets((*a).carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    printf("Ingrese el telefono celular: ");
    lBufIn();
    gets(a->personales.celular);
}
