#ifndef SISTEMA_H_INCLUDED
#define SISTEMA_H_INCLUDED

struct sistemaE;
typedef struct sistemaE * Sistema;
Sistema crearSistema(char nombre[20],char ultimaActualizacion[20], int anioLanzamiento,int cantidadMemoriaRamMinimaEnGigas );
void liberarSistema(Sistema s);
void mostrarSistema(Sistema s);

#endif // SISTEMA_H_INCLUDED
