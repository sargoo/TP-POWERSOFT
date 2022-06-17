#ifndef STCLIENTES_H_INCLUDED
#define STCLIENTES_H_INCLUDED

typedef struct
{
    int id; /// campo único y autoincremental
    int nroCliente;
    char nombre[30];
    char apellido[30];
    char dni[10];
    char email[30];
    char domicilio[45];
    char telefono[12];
    int eliminado; /// 0 si está activo - 1 si está eliminado

} stCliente;

stCliente cargaCliente();
void muestraUnCliente(stCliente c);
int cargaListadoDeClientes(stCliente c[], int DIM);
void muestraListadoDeClientes(stCliente c[], int v);
void cargarArchivoCliente(char nombreArchivo[]);
#endif // STCLIENTES_H_INCLUDED
