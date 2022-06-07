#include "stConsumos.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

stConsumos cargaConsumo()
{
    stConsumos Consumo;

    printf("\nIngrese el ID Cliente: ");
    scanf("%d", &Consumo.idCliente);
    printf("\nIngrese el anio: ");
    scanf("%d", &Consumo.anio);
    printf("\nIngrese el mes: ");
    scanf("%d", &Consumo.mes);
    printf("\nIngrese el dia: ");
    scanf("%d", &Consumo.dia);
    printf("\nIngrese los datos consumidos: ");
    scanf("%d", &Consumo.datosConsumidos);
    printf("\nIngrese el estado actual del cliente: ");
    scanf("%d", &Consumo.baja);

    return Consumo;

}

void muestraConsumo(stConsumos Consumo)
{
    printf("\nID Cliente.........................: &d ", Consumo.idCliente);
    printf("\nAnio...............................: &d ", Consumo.anio);
    printf("\nMes................................: &d ", Consumo.mes);
    printf("\nDia................................: &d ", Consumo.dia);
    printf("\nDatos consumidos...................: &d ", Consumo.datosConsumidos);
    printf("\nEstado actual del cliente..........: &d ", Consumo.baja);
}

void cargaArchivoConsumos(char nombreArchivo[])
{
    stConsumos c;
    char opcion=0;

    FILE *Consumos = fopen(nombreArchivo, "ab");
    if(Consumos)
    {
        while(opcion !=27)
        {
            system("cls");
            c = cargaConsumo();
            fwrite(&c, sizeof(stConsumos), 1, Consumos);

            printf("\nESC para finalizar, cualquier tecla para continuar.");
            opcion = getch();
        }
        fclose(Consumos);
    }
}

void muestraArchivoConsumos(char nombreArchivo[])
{
    stConsumos c;

    FILE *Consumos = fopen(nombreArchivo, "rb");
    if(Consumos)
    {
        while(fread(&c, sizeof(stConsumos), 1, Consumos) > 0)
        {
            muestraConsumo(c);
        }
        fclose(Consumos);
    }
}
