#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "centrarTitulos.h"
#include "stEmpleados.h"
#define ARCHI_EMPLEADOS "empleados.dat"

#define ESC 27
#define ANCHO 118
#define DIM 50


void cargarArchivoEmpleado(char nombreArchivo[]);
void mostrarArchivoEmpleado(char nombreArchivo[]);

int main()
{
    int opcion = 0, eleccionLogueo = 0, eleccionOpcion = 0;
    char verificarUsu[DIM];
    char usuAdmin [DIM] = "admin";
    char usuEmpleado1 [DIM] = "aguera";
    char usuEmpleado2 [DIM] = "lochocki";
    char usuEmpleado3 [DIM] = "tambascia";
    char usuEmpleado4 [DIM] = "blanco";
    while (opcion != ESC)
    {

        ///imprimirTecho(ANCHO);
        printf("SISTEMA DE GESTION POWERSOFT\n");
        ///imprimirTecho(ANCHO);
        printf("INGRESE EL NUMERO DEL USUARIO CON EL QUE SE QUIERE LOGUEAR\n");
        ///imprimirTecho(ANCHO);
        printf("1- LOGUARSE COMO ADMIN.\n");
        ///imprimirTecho(ANCHO);
        printf("2- LOGUEARSE COMO EMPLEADO.\n");
        ///imprimirTecho(ANCHO);
        scanf("%i", &eleccionLogueo);
        system("cls");
        switch(eleccionLogueo)
        {
        case 1:
            printf("LOGUEO DE ADMIN\n");
            printf("INGRESE NOMBRE DE USUARIO: \n");
            scanf("%s", &verificarUsu);

            if(strcmp(verificarUsu, usuAdmin) == 0 )
            {

            printf("Usuario logueado ok.\n");
            printf("ELIJA UNA OPCION:\n");
            printf("1- ALTA DE EMPLEADO.\n");
            printf("2- BAJA DE EMPLEADO.\n");
            printf("3- MODIFICACION DE EMPLEADO.\n");
            printf("4- CONSULTA DE EMPLEADO.\n");
            scanf("%i", &eleccionOpcion);
            }
            else
            {
                printf("usuario no existe o incorrecto.");
            }



            switch(eleccionOpcion)
            {

            case 1:

                printf("1- ALTA DE EMPLEADO.\n");
                cargarArchivoEmpleado(ARCHI_EMPLEADOS);
                system("cls");
                mostrarArchivoEmpleado(ARCHI_EMPLEADOS);


                break;

            default:

                printf(" OPCION NO DISPONILE O INCORRECTA.\n");


            }
            break;

        case 2:
            printf("LOGUEO DE EMPLEADO\n");
            printf("INGRESE NOMBRE DE USUARIO: \n");
            scanf("%s", &verificarUsu);

            if(strcmp(verificarUsu, usuEmpleado1) == 0 || strcmp(verificarUsu, usuEmpleado2) == 0 || strcmp(verificarUsu, usuEmpleado3) == 0 || strcmp(verificarUsu, usuEmpleado4) == 0)
            {
                printf("Usuario logueado ok.");
            }
            else
            {
                printf("usuario no existe o incorrecto.");
            }

            break;

        default:
            printf(" OPCION NO DISPONILE O INCORRECTA.\n");

        }
        ///printf("QUIERE VER OTRO EJERCICIO?\n");
        ///printf("CUALQ.TECLA: SI.\n");
        ///printf("ESC: NO.\n");
        opcion = getch();
        system("cls");
    }

    return 0;
}

void cargarArchivoEmpleado(char nombreArchivo[])
{
    FILE *archi = fopen(nombreArchivo, "wb");
    stEmpleado empleado;
    char opcion;

    if(archi)
    {
        do
        {
            system("cls");
            empleado = cargarUnEmpleado();
            fwrite(&empleado,sizeof(stEmpleado), 1, archi);
            printf("ESC PARA SALIR O CUALQ. TECLA PARA CONTINUAR");
            opcion = getch();
        }
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
     }
     fclose(archi);

}




