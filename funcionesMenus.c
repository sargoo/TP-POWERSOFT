#include "funcionesMenus.h"
#include "centrarTitulos.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ARCHI_EMPLEADOS "empleados.dat"
#define ANCHO 118


void mostrarMenuLogueo()
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
            while(eleccionLogueo == 1)
            {
                system("cls");
                contarTitulo("Usuario logueado ok.");
                contarTitulo("ELIJA UNA OPCION:");
                contarTitulo("1- ALTA DE EMPLEADO.");
                contarTitulo("2- BAJA DE EMPLEADO.");
                contarTitulo("3- MODIFICACION DE EMPLEADO.");
                contarTitulo("4- CONSULTA DE EMPLEADO.");
                contarTitulo("5- IR HACIA ATRAS.");
                scanf("%i", &eleccionOpcion);
                system("cls");

                switch(eleccionOpcion)
                {

                case 1:
                    system("cls");
                    contarTitulo("1- ALTA DE EMPLEADO.");
                    cargarArchivoEmpleado(ARCHI_EMPLEADOS);
                    break;

                case 2:

                    contarTitulo("2- BAJA DE EMPLEADO.");
                    contarTitulo("INDIQUE COMO DESEA BUSCAR AL EMPLEADO: ");
                    contarTitulo("1- BUSCAR POR ID.");
                    contarTitulo("2- BUSCAR POR DNI.");
                    contarTitulo("3- BUSCAR POR APELLIDO.");
                    eleccionOpcion = 0;
                    scanf("%i", &eleccionOpcion);
                    system("cls");
                    break;

                case 3:

                    contarTitulo("3- MODIFICACION DE EMPLEADO.");
                    contarTitulo("INDIQUE COMO DESEA BUSCAR AL EMPLEADO: ");
                    contarTitulo("1- BUSCAR POR ID.");
                    contarTitulo("2- BUSCAR POR DNI.");
                    contarTitulo("3- BUSCAR POR APELLIDO.");
                    contarTitulo("4- BUSCAR POR ESTADO.");
                    eleccionOpcion = 0;
                    scanf("%i", &eleccionOpcion);
                    system("cls");

                    switch(eleccionOpcion)
                    {
                    case 1:
                        contarTitulo("INGRESE ID: ");
                        scanf("%i", &buscaPorId);
                        buscarporDatoInt(ARCHI_EMPLEADOS, buscaPorId);
                        system("pause");
                        system("cls");
                        break;

                    case 2:

                        break;

                    case 3:

                        break;

                    case 4:

                        contarTitulo("INGRESE ESTADO: ");
                        scanf("%i", &buscaPorEstado);
                        buscarporDatosInt(ARCHI_EMPLEADOS, buscaPorEstado);
                        system("pause");
                        system("cls");
                        break;

                    default:
                        contarTitulo("OPCION   NO DISPONILE O INCORRECTA.");
                    }
                    break;

                case 4:

                    break;

                case 5:

                    mostrarMenuLogueo();
                    break;

                default:
                    contarTitulo("OPCION  NO DISPONILE O INCORRECTA.");
                    system("pause");
                }
            }
        }
        else
        {
            contarTitulo("USUARIO NO EXISTE O INCORRECTO");
            system("pause");
            system("cls");
        }
        break;

    case 2:
        contarTitulo("LOGUEO DE EMPLEADO");
        contarTitulo("INGRESE NOMBRE DE USUARIO: ");
        scanf("%s", &verificarUsu);

        if(strcmp(verificarUsu, usuEmpleado1) == 0 || strcmp(verificarUsu, usuEmpleado2) == 0 || strcmp(verificarUsu, usuEmpleado3) == 0 || strcmp(verificarUsu, usuEmpleado4) == 0)
        {
            system("cls");
            contarTitulo("Usuario logueado ok.");
            contarTitulo("ELIJA UNA OPCION:");
            contarTitulo("1- ALTA DE CLIENTE.");
            contarTitulo("2- BAJA DE CLIENTE.");
            contarTitulo("3- MODIFICACION DE CLIENTE.");
            contarTitulo("4- CONSULTA DE CLIENTE.");
            contarTitulo("5- IR HACIA ATRAS.");
            scanf("%i", &eleccionOpcion);

            switch(eleccionOpcion)
            {
            case 1:
                contarTitulo("1- BUSCAR POR ID.");
                break;

            case 2:
                contarTitulo("2- BUSCAR POR DNI.");
                break;

            default:
                contarTitulo("OPCION  NO DISPONILE O INCORRECTA.");
                system("pause");
            }
        }
        else
        {
            contarTitulo("usuario no existe o incorrecto.");
        }

        break;

    default:
        contarTitulo(" OPCION NO DISPONILE O INCORRECTA.");

    }

    contarTitulo("TOQUE CUALQUIER TECLA PARA VOLVER AL MENU");
    opcion = getch();
    system("cls");
    mostrarMenuLogueo();
}
