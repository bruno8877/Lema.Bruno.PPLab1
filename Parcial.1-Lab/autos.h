#include <stdio.h>

typedef struct
{
    int id;
    char nombreMarca[21];

} eMarca;

typedef struct
{
    int id;
    char nombreColor[21];
} eColor;

typedef struct
{
    int id;
    char patente[21];
    int idMarca;
    int idColor;
    int modelo;
    int isEmpty;

} eAuto;


int InicializarAutos(eAuto* lista, int tam);
int buscarLibre(eAuto* lista, int tam);
int altaAuto(int idX,eAuto* lista, int tam,eMarca* marca, int tamMarca,eColor* colores,int tamColores);

int cargarDescripcionMarca(char tipo[],int id, eMarca* tiposMarca, int tamMarca);
void mostrarDescripcionMarca(eMarca* tiposMarca,int tamMarca);

int cargarDescripcionColor(char color[],int id, eColor* colores, int tamColores);
void mostrarDescripcionColores(eColor* colores,int tamColores);

void mostrarAuto(eAuto x,eMarca* marca,int tamMarcas,eColor* colores, int tamColores);
void mostrarAutos(eAuto x[],int tamAutos,eMarca* marca,int tamMarca,eColor* colores, int tamColores);

int buscarAutoXpatente(char patente[], eAuto* vec, int tam);
void modificarAuto(eAuto* vec,int tamAutos,eMarca* marcas,int tamTipos,eColor* colores, int tamColores);

void bajaAuto(eAuto* vec,int tamAutos,eMarca* marcas,int tamTiposMarca,eColor* colores, int tamColores);

void listarAutos(eAuto* vec,int tamAutos,eMarca* marcas,int tamTiposMarca,eColor* colores, int tamColores);
