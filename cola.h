#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED


#define TRUE 1
#define FALSE 0
#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA -2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4



// Declaramos la estructura del nodo, prox es un puntero al siguiente nodo
struct NodoE;

typedef struct NodoE * Nodo;

struct ColaE ;

typedef struct ColaE * Cola;




Cola crearCola();

int liberarCola(Cola cola);
int estaVacia(Cola cola);


int encolar(Cola cola, void* item);

int desencolar(Cola cola);

Nodo getNodo(Cola cola);
int obtenerElemento(Cola cola, void* item, int pos);
int obtenerTamanio(Cola cola, int* tam);

void* obtenerDato (Nodo e);
void* getData (Nodo actual);
void imprimir(Cola cola);
//int getTamanio(Cola cola);
#endif // COLA_H_INCLUDED
