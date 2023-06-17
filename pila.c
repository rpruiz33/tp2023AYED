#include <stdio.h>
#include <stdlib.h>
#include "pila.h"



struct PilaE{
        Nodo primero;
    };


struct NodoE {
        void* dato;
        struct NodoE *sgte;
    };




Pila crearPila(){
        Pila pila= malloc(sizeof(struct PilaE));
        pila->primero= NULL;
        return pila;
    };

Pila destruirPila(Pila pila){

        while(!pilaVacia(pila)){

            void* dato=NULL;
            void* nodoEliminar=NULL;
            nodoEliminar=pila->primero;
            dato=getDatoP(nodoEliminar);
            pila->primero=pila->primero->sgte;
            destruirNodo(nodoEliminar);
        }
        free(pila);

       return NULL;
    };

int pilaVacia(Pila pila){
        // Una lista está vacía cuando lista->Primero==NULL
        return (pila->primero==NULL);
    };



void * getUltimo(Pila pila){

        void* datoADesapilar=NULL;

        if(pila->primero!=NULL){

            datoADesapilar=getDatoP(pila->primero);
        }
        return datoADesapilar;
    };


void * desapilar(Pila pila){

        void * datoADesapilar=NULL;
        if (pila == NULL){
            return -1;
        }
        if (estaVaciaP(pila)){
            printf("\nError: La pila esta vacia\n");
            system("PAUSE()");
            system("cls");
            return -1;
        }
        if(pila->primero!=NULL){
            datoADesapilar=getDatoP(pila->primero);
            void * nodoEliminar=NULL;
            nodoEliminar=pila->primero;
            pila->primero=pila->primero->sgte;
            destruirNodo(nodoEliminar);
        }
        return datoADesapilar;
    };





void apilar(Pila pila, void * dato){

        Nodo nuevoNodo=crearNodo(dato);
        setSiguiente(nuevoNodo,pila->primero);
        pila->primero=nuevoNodo;
    };



Nodo crearNodo(void * dato){
        Nodo nodo=(Nodo)malloc(sizeof(struct NodoE));
        nodo->dato=dato;
        nodo->sgte=NULL;
        return nodo;
    };


Nodo destruirNodo(Nodo nodo){
        // la destrucción del dato queda por cuenta del usuario
        free(nodo);
        return NULL;
    };



void setDato(Nodo nodo, void* dato){
        nodo->dato=dato;
    };


void * getDatoP(Nodo nodo){
        return nodo->dato;
    };


void setSiguiente(Nodo esteNodo, Nodo siguienteNodo){
        esteNodo->sgte=siguienteNodo;
    };


Nodo getSiguiente(Nodo nodo){
        return nodo->sgte;
    };
void* obtenerDatoP (Nodo e){
        return e->dato;//retora el dato
    };
Nodo getNodoP(Pila pila){
        return pila->primero;


    };

int estaVaciaP(Pila pila){
        if (pila == NULL){
            return ESTRUCTURA_NO_INICIALIZADA;
        }
        if (pila->primero == NULL){
            return TRUE;
        }
        return FALSE;
    };
