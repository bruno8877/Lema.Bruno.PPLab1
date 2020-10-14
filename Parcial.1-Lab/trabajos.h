#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int id;
    char descripcion[26];
    float precio;

} eServicio;

typedef struct
{
    int id;
    char patente[20];
    int idServicio;
    eFecha fecha;
    int isEmpty;

} eTrabajo;

void mostrarDescripcionServicios(eServicio* servicios,int tamServicio);
float cargarDescripcionServicio(char servicio[],float* precio,int id, eServicio servicios[], int tamServicios);

void inicializarTrabajos(eTrabajo* vec,int tam);
int buscarLibreTrabajo(eTrabajo* vec,int tam);

int altaTrabajo(int idX,eTrabajo* vec, int tamTrabajo,eServicio* servicios,int tamServicios,eAuto* list, int tamAutos,eMarca* marcas,int tamMarcas,eColor* colores,int tamColores);

void mostrarTrabajo(eTrabajo x,eServicio servicios[], int tamServicios);
void mostrarTrabajos(eTrabajo x[],int tamTrabajos,eServicio servicios[],int tamServicios);
