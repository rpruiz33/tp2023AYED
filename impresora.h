#ifndef IMPRESORA_H_INCLUDED
#define IMPRESORA_H_INCLUDED
#include "pila.h"
struct impresoraE;
typedef struct impresoraE * Impresora;
Impresora crearImpresora(char documentos[20],char nombreImpresora[20], int nroImpresora,char modelo[20]);
void liberarImpresora(Impresora i);
void mostrarImpresora(Impresora i);
void mostrarElementoDesApilado(Pila p);

#endif // IMPRESORA_H_INCLUDED
