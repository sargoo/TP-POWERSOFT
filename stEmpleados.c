#include "stEmpleados.h"
#define ESC 27
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define archiEMpleados "ARCHIVO_EMPLEADO.DAT"


stEmpleado cargarUnEmpleado()
{
    stEmpleado e;
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
    printf("\n Ingrese el estado del empleado: ");
    fflush(stdin);
    scanf("%i", &e.estado);

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
    return i;
}

void mostrarUnEmpleado(stEmpleado e)
{
        printf("\n id: %i", e.id);
        printf("\n Apellido: %s", e.apellido);
        printf("\n Nombre: %s", e.nombre);
        printf("\n DNI: %s", e.dni);
        printf("\n Telefono: %s", e.telefono);
        printf("\n Email: %s", e.mail);
        printf("\n Estado: %i", e.estado);
        printf("\n------------------------");
}

void mostrarEmpleados(stEmpleado e[], int v)
{
    for(int i = 0; i < v; i ++)
    {
        mostrarUnEmpleado(e[i]);
    }
}

void cargarArchivoEmpleado(char nombreArchivo[])
{
    FILE *archiEMpleados = fopen(nombreArchivo, "ab");
    stEmpleado empleado;
    char opcion;
    int id = 0;

    if(archi)
    {
        id = incrementarIdEmpleado(archiEMpleados);
        do
        {
            id ++;
            empleado = cargarUnEmpleado();
            fwrite(&empleado,sizeof(stEmpleado), 1, archi);
            contarTitulo("SEGUIR CARGANDO EMPLEADOS?");
            contarTitulo("ESC PARA SALIR O CUALQ. TECLA PARA CONTINUAR");
            printf("\n\t\t\t\t\t\t\t\t");
            opcion = getch();
            system("cls");        }
        while(opcion!=ESC);
    }
    else
    {
        printf("No se pudo abrir el archivo.");

    }
    fclose(archi);
}

void mostrarArchivoEmpleado(char nombreArchivo[])
{
     FILE *archi = fopen(nombreArchivo, "rb");
     stEmpleado e;

     if(archi)
     {
        while(fread(&e,sizeof(stEmpleado), 1, archi)> 0)
        {
            mostrarUnEmpleado(e);
        }
        fclose(archi);
     }
}


void buscarporDatoInt(char nombreArchivo[], int dato)
{
    FILE *archiEMpleados = fopen(nombreArchivo,"rb");
    int flag = 0;
    stEmpleado e;

    if (archiEMpleados)
    {
        while(fread(&e,sizeof(stEmpleado), 1, archiEMpleados) > 0 && flag == 0)
        {
            if(e.id == dato)
            {
                mostrarUnEmpleado(e);
                flag = 1;
            }


        }
        fclose(archiEMpleados);
    }

}

void buscarporDatosInt(char nombreArchivo[], int dato)
{
    FILE *archiEmpleados = fopen(nombreArchivo,"rb");
    stEmpleado e;

    if (archiEMpleados)
    {
        while(fread(&e,sizeof(stEmpleado), 1, archiEMpleados) > 0 && e.estado == dato)
        {
            mostrarUnEmpleado(e);
        }
        fclose(archiEMpleados);
    }

}

int incrementarIdEmpleado (char nombreArchivo[])
{
    int id = 0;

    stEmpleado e;

    FILE *archiEmpleados = fopen(nombreArchivo, "rb");

    if(archiEmpleados)
    {
        fseek(archiEmpleados, -1 * sizeof(archiEmpleados),SEEK_END);
        if(fread(&e, sizeof(stEmpleado),1, archiEmpleados) > 0)
        {
            id = e.id;
        }
    }
    fclose(archiEmpleados);

    return id;
}

