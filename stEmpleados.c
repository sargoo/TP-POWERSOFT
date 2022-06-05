#include "stEmpleados.h"
#define ESC 27
#define ANCHO 118
#define DIM 50
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



stEmpleado cargarUnEmpleado()
{
    stEmpleado e;
    printf("\n Ingrese el id del empleado: ");
    fflush(stdin);
    scanf("%i", &e.id);
    printf("\n Ingrese apellido del empleado: ");
    fflush(stdin);
    gets(e.apellido);
    printf("\n Ingrese nombre del empleado: ");
    fflush(stdin);
    gets(e.nombre);
    printf("\n Ingrese el dni del empleado: ");
    fflush(stdin);
    gets(e.dni);
    printf("\n Ingrese el telefono del empleado: ");
    fflush(stdin);
    gets(e.telefono);
    printf("\n Ingrese el mail del empleado: ");
    fflush(stdin);
    gets(e.mail);

    return e;
}

int cargarEmpleados (stEmpleado e[], int dim)
{
    int opcion = 0;
    int i = 0;
    while(opcion != ESC && i < dim )
    {
        e[i] = cargarUnEmpleado();
        i++;
        printf("Seguir cargando empleados? CUALQ.TECLA: SI / ESC: NO");
        opcion = getch();
        system("cls");
    }
}

void mostrarUnEmpleado(stEmpleado e)
{
        printf("\n id: %i", e.id);
        printf("\n Apellido: %s", e.apellido);
        printf("\n Nombre: %s", e.nombre);
        printf("\n DNI: %s", e.dni);
        printf("\n Telefono: %s", e.telefono);
        printf("\n Email: %s", e.mail);
        printf("\n------------------------");
}

void mostrarEmpleados(stEmpleado e[], int v)
{
    for(int i = 0; i < v; i ++)
    {
        mostrarUnEmpleado(e[i]);
    }
}
