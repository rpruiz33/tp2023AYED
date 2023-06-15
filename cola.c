#include<stdio.h>
#include<stdlib.h>
#include "cola.h"

struct NodoE{
        void * item;
        Nodo prox;
    };

struct ColaE {
        Nodo inicio;
        int tam;
    };



Cola crearCola() {
        Cola cola = malloc(sizeof(*cola));
            if (cola == NULL){
            return NULL;
        }
        cola->inicio = NULL;
        cola->tam = 0;
        return cola;
    }

int liberarCola(Cola cola) {
        if (cola == NULL){
            return NULL;
        }
        while(!estaVacia(cola)){
            desencolar(cola);
        }
        free(cola);
        cola->inicio = NULL;
        return OK;
    }

int estaVacia(Cola cola) {
        if (cola == NULL){
            return NULL;
        }
        if (cola->inicio == NULL){
            return TRUE;
        }
        return FALSE;
    }


int encolar(Cola cola, void * item) {
        int pos = cola->tam;
        if (cola == NULL){
            return NULL;
        }
        if (pos < 0 || pos > cola->tam){
        return NULL;
        }
        if (pos == 0) {
            if (cola == NULL){
                return NULL;
            }
            Nodo  nuevoNodo = crearNodo(item, cola->inicio);
            if (nuevoNodo == NULL){
                return NULL;
            }
            cola->inicio = nuevoNodo;
            cola->tam++;
            return 1;




        }
        else {
            // prepara para inserir
            Nodo  aux;
            aux = cola->inicio;
            for(int i = 0; i < pos - 1; i++) {
                aux = aux->prox;
            }
            // adiciona o n�
            Nodo nuevoNodo = crearNodo(item, aux->prox);
                if (nuevoNodo == NULL)
            return NULL;
            aux->prox = nuevoNodo;
        }
        cola->tam++;
        return OK;
    }

int desencolar(Cola cola) {
        if (cola == NULL)
            return NULL;
        if (estaVacia(cola)){
            printf("\nError: La cola esta vacia\n");
            return NULL;
        }
        Nodo  aux = cola->inicio;
        cola->inicio = aux->prox;
        free(aux);
        aux = NULL;
        cola->tam--;
        return OK;
    }


int obtenerElemento(Cola cola, void* item, int pos) {
        if (cola == NULL){
            return NULL;
        }
        if (estaVacia(cola)){
            return NULL;
        }
        if (pos < 0 || pos >= cola->tam){
            return NULL;
        }
        if (item == NULL){
            return NULL;
        }
        Nodo  aux;
        aux = cola->inicio;
        for(int i = 0; i < pos; i++) {
            aux = aux->prox;
        }
        item = aux->item;

        return OK;
    }
void* obtenerDato (Nodo e){
        return e->item;//retora el dato
    };
int obtenerTamanio(Cola cola, int* tam) {
        if (cola == NULL){
            return NULL;
        }
        if (tam == NULL){
            return NULL;
        }
        *tam = cola->tam;




        return OK;
    }

Nodo getNodo(Cola cola){
        return cola->inicio;
    };

int getTamanio(Cola cola){
        return cola->tam;
    };
