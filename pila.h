#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#define TRUE 1
#define FALSE 0
#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA -2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4
///Estructura y tipo de dato de la Pila
struct PilaE;
typedef struct PilaE* Pila;




///Estructura y tipo de dato del Nodo
struct NodoE;
typedef struct NodoE* Nodo;




Pila crearPila();
Pila destruirPila(Pila pila);
int pilaVacia(Pila pila);

void * desapilar(Pila pila);
void apilar(Pila pila, void *dato);


void * getUltimo(Pila pila);


///NODO

Nodo crearNodo(void* dato);
Nodo destruirNodo(Nodo nodo);
void setDato(Nodo nodo, void * dato);
void * getDatoP(Nodo nodo);
void setSiguiente(Nodo esteNodo, Nodo siguienteNodo);
Nodo getSiguiente(Nodo nodo);

void* obtenerDatoP (Nodo e);
Nodo getNodoP(Pila pila);

int estaVaciaP(Pila pila);

#endif // PILA_H_INCLUDED
