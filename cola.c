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
            return -1;
        }
        while(!estaVacia(cola)){
            desencolar(cola);
        }
        free(cola);
        cola->inicio = NULL;
        return OK;
    }
Nodo crearNodoC(void * item, Nodo prox) {
	Nodo  no = malloc(sizeof(*no));
	if (no == NULL)
        return NULL;
	no->item = item;
	no->prox = prox;
	return no;
}
int estaVacia(Cola cola) {
        if (cola == NULL){
            return -1;
        }
        if (cola->inicio == NULL){
            return TRUE;
        }
        return FALSE;
    }


int encolar(Cola cola, void * item) {
        int pos = cola->tam;
        if (cola == NULL){
            return -1;
        }
        if (pos < 0 || pos > cola->tam){
        return -1;
        }
        if (pos == 0) {
            if (cola == NULL){
                return -1;
            }
            Nodo  nuevoNodo = crearNodoC(item, cola->inicio);
            if (nuevoNodo == NULL){
                return -1;
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
            Nodo nuevoNodo = crearNodoC(item, aux->prox);
                if (nuevoNodo == NULL)
            return -1;
            aux->prox = nuevoNodo;
        }
        cola->tam++;
        return OK;
    }

int desencolar(Cola cola) {
        if (cola == NULL)
            return -1;
        if (estaVacia(cola)){
            printf("\nError: La cola esta vacia\n");
            return -1;
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
            return -1;
        }
        if (estaVacia(cola)){
            return -1;
        }
        if (pos < 0 || pos >= cola->tam){
            return -1;
        }
        if (item == NULL){
            return -1;
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
        return e->item;
    };
int obtenerTamanio(Cola cola, int* tam) {
        if (cola == NULL){
            return -1;
        }
        if (tam == NULL){
            return -1;
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
