#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 27
#define ANCHO 118
#define DIM 50


int main()
{
    int opcion = 0, ejercicio = 0;
    char verificarUsu[];
    char usuEmpleado1["aguera"];
    char usuEmpleado2["lochocki"];
    char usuEmpleado3["tambascia"];
    char usuEmpleado4["blanco"];
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
        scanf("%i", &ejercicio);
        system("cls");
        switch(ejercicio)
        {
        case 1:
            contarTitulo("LOGUEO DE ADMIN");
            contarTitulo("INGRESE NOMBRE DE USUARIO: ");
            scanf("%s", &verificarUsu);
            if(verificarUsu == usuEmpleado1 || verificarUsu == usuEmpleado2 || verificarUsu == usuEmpleado3 verificarUsu == usuEmpleado4)
            {
                contarTitulo("Usuario loguiado ok.");
            }
            else
            {
                contarTitulo("usuario no existe o incorrecto.");
            }
            break;

        case 2:
            contarTitulo("2-Hacer una funcion que pase todos los elementos de una pila a otra.");


            contarTitulo("PILA: ");
            printf("\t\t\t\t\t\t");

            contarTitulo("OTRA PILA: ");
            printf("\t\t\t\t\t\t");

            break;

        default:
            printf(" EJERCICIO NO DISPONILE.\n");

        }
        printf("QUIERE VER OTRO EJERCICIO?\n");
        printf("CUALQ.TECLA: SI.\n");
        printf("ESC: NO.\n");
        opcion = getch();
        system("cls");
    }

    return 0;
}



typedef struct
{
    int id;
    char dni;
    char apellido[DIM];
    char nombre [DIM];
    char direccion [DIM];
    char telefono [DIM];

} stCliente;

void contarTitulo(char titulo[])
{
    int anchoTotal = 118;
    char* largo = titulo;
    int contador = 0;
    while (largo[contador] != 0)
    {
        contador ++;
    }
    int espacio = anchoTotal - contador;

    printf("||");
    for(int i = 0; i < anchoTotal-4; i++)
    {
        printf(" ");
    }
    printf("||");
    printf("\n");
    printf("||");
    for(int i = 0; i < (espacio/2)-2; i++)
    {
        printf(" ");
    }

    printf("%s", titulo);


    if(espacio % 2 != 0)
    {
        for(int i = 0; i < (espacio/2)-1; i++)
        {
            printf(" ");
        }
    }
    else
    {
        for(int i = 0; i < (espacio/2)-2; i++)
        {
            printf(" ");
        }

    }

    printf("||");
    printf("\n");
    printf("||");
    for(int i = 0; i < anchoTotal-4; i++)
    {
        printf(" ");
    }
    printf("||");
    printf("\n");
}

void imprimirTecho(int longitud)
{

    for(int i = 0; i < longitud; i++)
    {
        printf("=");
    }
    printf("\n");
}
