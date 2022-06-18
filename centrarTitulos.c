#include "centrarTitulos.h"

void contarTitulo(char titulo[])
{
    int anchoTotal = 118;                           ///Creamos una variable con el ancho que queremos que use de la pantalla.
    int contador = 0;
    while (titulo[contador] != 0)                   ///Mientras el contador se vaya moviendo y haya algo en la posicion seguira contando.
    {
        contador ++;
    }
    int espacio = anchoTotal - contador;            /** esta variable guarda el espacio sobrante de esos 118 para mas adelante**/
    printf("||");                                   /**asignar la mitad a cada lado del string**/


    for(int i = 0; i < anchoTotal-4; i++)           /** imprimiremos espacios en blanco sin pasarnos de los 118 espacios disponibles**/
    {                                               /** y le descontamos 4 espacios por los 4 "|"(lineas 12 y 19) que pedimos que imprima**/
        printf(" ");
    }
    printf("||");
    printf("\n");
    printf("||");
    for(int i = 0; i < (espacio/2)-2; i++)          /** este es el renglon donde tenemos el string. asi que dividimos el **/
    {                                               /** espacio(variable que le dimos valor en la linea 11) en 2 y le restamos 2**/
        printf(" ");                                /** que estan siendo ocupados por los "|" de la linea 21**/
    }

    printf("%s", titulo);                           /**imprimimos el string**/


    if(espacio % 2 != 0)                            /**Entrara al if o else dependiendo de si la palabra es tiene cantidad de caracteres par**/
    {                                               /**o in para agregar los espacios en blancos correspondientes**/
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

    printf("||");                                   /**Agrega los 4 "|" faltantes **/
    printf("\n");
    printf("||");

    for(int i = 0; i < anchoTotal-4; i++)           /** imprimiremos espacios en blanco sin pasarnos de los 118 espacios disponibles**/
    {                                               /** y le descontamos 4 espacios por los 4 "|"(lineas 48 y 54) que pedimos que imprima**/
        printf(" ");
    }
    printf("||");
    printf("\n");
}

void imprimirTecho(int anchoTotal)                   /** imprimiremos "=" hasta completar lo que valga la variable anchototal**/
{

    for(int i = 0; i < anchoTotal; i++)
    {
        printf("=");
    }
    printf("\n");
}
