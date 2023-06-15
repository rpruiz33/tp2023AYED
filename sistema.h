#ifndef SISTEMA_H_INCLUDED
#define SISTEMA_H_INCLUDED

struct sistemaE;
typedef struct sistemaE * Sistema;
Sistema crearSistema(char nombre[20],char ultimaActualizacion[20], int anioLanzamiento,int cantidadMemoriaRamMinimaEnGigas );
void liberarSistema(Sistema s);
void mostrarSistema(Sistema s);
int validarSistema(char nombreSistema[30]);
int validarResolucion(char nombreSistema[30]);
int validarAnioCompra(int anioCompro);
int validarRam(int cantidadMemoriaRamMinimaEnGigas);
#endif // SISTEMA_H_INCLUDED
