#include "stClientes.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


stCliente cargaCliente()
{
    stCliente c;

    printf("\nIngrese el numero de cliente: ");
    scanf("%d", &c.nroCliente);
    printf("\nIngrese el nombre del cliente: ");
    fflush(stdin);
    gets(c.nombre);
    printf("\nIngrese el apellido del cliente: ");
    fflush(stdin);
    gets(c.apellido);
    printf("\nIngrese el DNI del cliente: ");
    fflush(stdin);
    gets(c.dni);
    printf("\nIngrese el email del cliente: ");
    fflush(stdin);
    gets(c.email);
    printf("\nIngrese el domicilio del cliente: ");
    fflush(stdin);
    gets(c.domicilio);
    printf("\nIngrese el telefono del cliente: ");
    fflush(stdin);
    gets(c.telefono);
    printf("\nIngrese el estado actual del cliente: ");
    fflush(stdin);
    scanf("%d", &c.eliminado);

    return c;
}

void muestraUnCliente(stCliente c)
{
    printf("\nNro. de cliente..........: %d ", c.nroCliente);
    printf("\nNombre...................: %s ", c.nombre);
    printf("\nApellido.................: %s ", c.apellido);
    printf("\nDNI......................: %s ", c.dni);
    printf("\nEmail....................: %s ", c.email);
    printf("\nDomicilio................: %s ", c.domicilio);
    printf("\nTelefono.................: %s ", c.telefono);
    printf("\nEstado actual............: %d ", c.eliminado);
    printf("\n========================================================");
}

int cargaListadoDeClientes(stCliente c[], int DIM)
{
    int i=0;
    char opcion=0;

    while(i<DIM && opcion !=27)
    {
        system("cls");
        c[i] = cargaCliente();
        i++;

        printf("\nESC para finalizar, cualquier tecla para continuar.");
        opcion = getch();
    }

    return i;
}

void muestraListadoDeClientes(stCliente c[], int v)
{
    for(int i=0; i<v; i++)
    {
        muestraUnCliente(c[i]);
    }
}
