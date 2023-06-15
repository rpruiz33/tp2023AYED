#ifndef IMPRESORA_H_INCLUDED
#define IMPRESORA_H_INCLUDED
#include "pila.h"
struct impresoraE;
typedef struct impresoraE * Impresora;
Impresora crearImpresora();
void liberarImpresora(Impresora i);
void mostrarImpresora(Impresora i);
void mostrarElementoApilado(Pila p);

#endif // IMPRESORA_H_INCLUDED
