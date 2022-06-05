#ifndef STEMPLEADOS_H_INCLUDED
#define STEMPLEADOS_H_INCLUDED

typedef struct
{
    int id;
    char apellido [20];
    char nombre[20];
    char dni[10];
    char telefono [12];
    char mail [45];
} stEmpleado;


stEmpleado cargarUnEmpleado();
int cargarEmpleados (stEmpleado e[], int dim);
void mostrarUnEmpleado(stEmpleado e);
void mostrarEmpleados(stEmpleado e[], int v);


#endif // STEMPLEADOS_H_INCLUDED
