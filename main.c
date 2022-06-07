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

        imprimirTecho(ANCHO);
        contarTitulo("SISTEMA DE GESTION POWERSOFT");
        imprimirTecho(ANCHO);
        contarTitulo("INGRESE EL NUMERO DEL USUARIO CON EL QUE SE QUIERE LOGUEAR");
        imprimirTecho(ANCHO);
        contarTitulo("1- LOGUARSE COMO ADMIN.");
        imprimirTecho(ANCHO);
        contarTitulo("2- LOGUEARSE COMO EMPLEADO.");
        imprimirTecho(ANCHO);
        scanf("%i", &eleccionLogueo);
        system("cls");
        switch(eleccionLogueo)
        {
        case 1:
            contarTitulo("LOGUEO DE ADMIN");
            contarTitulo("INGRESE NOMBRE DE USUARIO: ");
            scanf("%s", &verificarUsu);
            imprimirTecho(ANCHO);

            if(strcmp(verificarUsu, usuAdmin) == 0 )
            {
            system("cls");
            contarTitulo("Usuario logueado ok.");
            contarTitulo("ELIJA UNA OPCION:");
            contarTitulo("1- ALTA DE EMPLEADO.");
            contarTitulo("2- BAJA DE EMPLEADO.");
            contarTitulo("3- MODIFICACION DE EMPLEADO.");
            contarTitulo("4- CONSULTA DE EMPLEADO.");
            scanf("%i", &eleccionOpcion);
            }
            else
            {
                contarTitulo("usuario no existe o incorrecto.");
            }



            switch(eleccionOpcion)
            {

            case 1:

                contarTitulo("1- ALTA DE EMPLEADO.");
                cargarArchivoEmpleado(ARCHI_EMPLEADOS);
                system("cls");
                mostrarArchivoEmpleado(ARCHI_EMPLEADOS);


                break;

            default:

                contarTitulo(" OPCION NO DISPONILE O INCORRECTA.");


            }
            break;

        case 2:
            contarTitulo("LOGUEO DE EMPLEADO");
            contarTitulo("INGRESE NOMBRE DE USUARIO: ");
            scanf("%s", &verificarUsu);

            if(strcmp(verificarUsu, usuEmpleado1) == 0 || strcmp(verificarUsu, usuEmpleado2) == 0 || strcmp(verificarUsu, usuEmpleado3) == 0 || strcmp(verificarUsu, usuEmpleado4) == 0)
            {
                contarTitulo("Usuario logueado ok.");
            }
            else
            {
                contarTitulo("usuario no existe o incorrecto.");
            }

            break;

        default:
            contarTitulo(" OPCION NO DISPONILE O INCORRECTA.\n");

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




