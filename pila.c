

#include <stdlib.h>
#include "pila.h"



struct PilaE{
    Nodo primero;
};


struct NodoE {
    void* dato; // dato almacenado
    struct NodoE *sgte; // puntero al siguiente
} ;


///PRIMITIVAS!!!!!!

Pila crearPila(){

    ///El constructor, lo de siempre :)
    Pila pila= malloc(sizeof(struct PilaE));

    pila->primero= NULL;


    return pila;
}

Pila destruirPila(Pila pila){

        while(!pilaVacia(pila)){

            void* dato=NULL;
            void* nodoEliminar=NULL;
            nodoEliminar=pila->primero;
            dato=getDato(nodoEliminar);
            pila->primero=pila->primero->sgte;
            destruirNodo(nodoEliminar);
        }
        free(pila);

       return NULL;
}

int pilaVacia(Pila pila){
    // Una lista está vacía cuando lista->Primero==NULL
    return (pila->primero==NULL);
}



void * getUltimo(Pila pila){

    void* datoADesapilar=NULL;

    if(pila->primero!=NULL){

            datoADesapilar=getDato(pila->primero);


    }
    return datoADesapilar;
}


void * desapilar(Pila pila){

    void * datoADesapilar=NULL;

    if(pila->primero!=NULL){

            datoADesapilar=getDato(pila->primero);



            void * nodoEliminar=NULL;

            nodoEliminar=pila->primero;


            pila->primero=pila->primero->sgte;
            destruirNodo(nodoEliminar);



    }
    return datoADesapilar;
}





void apilar(Pila pila, void * dato){
    // simplemente creamos el nodo, hacemos que el primero de la lista sea
    // su siguiente y lo ponemos como primero de la lista
    Nodo nuevoNodo=crearNodo(dato);
    setSiguiente(nuevoNodo,pila->primero);
    pila->primero=nuevoNodo;
}







///NODO

Nodo crearNodo(void * dato){
    Nodo nodo=(Nodo)malloc(sizeof(struct NodoE));
    nodo->dato=dato;
    nodo->sgte=NULL;
    return nodo;
}


Nodo destruirNodo(Nodo nodo){
    // la destrucción del dato queda por cuenta del usuario
    free(nodo);
    return NULL;
}



void setDato(Nodo nodo, void* dato){
    nodo->dato=dato;
}


void * getDato(Nodo nodo){
    return nodo->dato;
}


void setSiguiente(Nodo esteNodo, Nodo siguienteNodo){
    esteNodo->sgte=siguienteNodo;
}


Nodo getSiguiente(Nodo nodo){
    return nodo->sgte;
}
void* obtenerDatoP (Nodo e){


return e->dato;//retora el dato
};
Nodo getNodoP(Pila pila){
return pila->primero;


};
