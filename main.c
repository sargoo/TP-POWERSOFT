#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 27
#define ANCHO 118
#define DIM 50


int main()
{
    int opcion = 0, ejercicio = 0;
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
            contarTitulo("1-Hacer una funcion que permita ingresar varios elementos a una pila, tanto como quiera el usuario. ");
            ///cargarPila (&pila);
            ///imprimirPila(pila);
            break;

        case 2:
            contarTitulo("2-Hacer una funcion que pase todos los elementos de una pila a otra.");

            ///cargarPilaRandom(&pila, limite);
            ///int superior = tope(&pila);
            contarTitulo("PILA: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            ///pasarPila (&pila, &otra);
            contarTitulo("OTRA PILA: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(otra);
            ///pasarPila (&otra, &pila);
            break;

        case 3:
            contarTitulo("3-Hacer una funcion que pase todos los elementos de una pila a otra, pero conservando el orden.");
            ///cargarPilaRandom(&pila, limite);
            contarTitulo("PILA: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            ///pasarPilaIgual (&pila, &otra);
            contarTitulo("OTRA: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            break;

        case 4:
            contarTitulo("4. Hacer una funcion que encuentre el menor elemento de una pila y lo retorna.");
            contarTitulo("La misma debe eliminar ese dato de la pila.");
            ///cargarPilaRandom(&pila, limite);
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            ///menor = encontrarMenor (&pila);
            contarTitulo("EL elemento menor de la pila es: ");
            ///printf("\t\t\t\t\t\t\t%i\n", menor);
            contarTitulo("PILA SIN EL MENOR ELEMENTO: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);

            break;

        case 5:
            contarTitulo("Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.");
            contarTitulo(" Usar la funcion del ejercicio 4. (Ordenamiento por seleccion)");
            ///cargarPilaRandom(&pila, limite);
            contarTitulo("PILA ANTES DE LA ORDENACION: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            ///apilarOrdenado(&pila);
            contarTitulo("PILA DESPUES DE LA ORDENACION: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            break;

        case 6:
            contarTitulo("6. Hacer una funcion que inserta en una pila ordenada un nuevo elemento, conservando el orden de esta. ");
            ///cargarPilaRandom(&pila, limite);
            ///insertarElementoEnOrdenada(&pila);
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            break;

        case 7:
            contarTitulo("7. Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.");
            contarTitulo("Usar la funcion del ejercicio 6.  (Ordenamiento por insercion).");
            ///cargarPilaRandom(&pila, limite);
            contarTitulo("PILA -PILA-: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(pila);
            ///pasarPilaDeMenorAMayor (&pila, &otra);
            contarTitulo("PILA -OTRA-: ");
            printf("\t\t\t\t\t\t");
            ///imprimirPila(otra);
            ///pasarPila(&otra, &pila);
            break;

        case 8:
            contarTitulo("8- Hacer una funcion que sume y retorne los dos primeros elementos de una pila (tope y anterior),");
            contarTitulo(" sin alterar su contenido. ");
            ///cargarPilaRandom(&pila, limite);
            printf("\t\t\t\t\t\tPILA : \n");
            printf("\t\t\t\t\t");
            ///imprimirPila(pila);
            ///suma = sumarElementos (pila);
            ///printf("\n \t\t\t\t\t\tLA SUMA DE LOS VALORES  es: %i \n", suma);
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
