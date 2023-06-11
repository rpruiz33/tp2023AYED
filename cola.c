
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
    if (cola == NULL)
        return NULL;
    cola->inicio = NULL;
    cola->tam = 0;
    return cola;
}

int liberarCola(Cola cola) {
    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    // remove todos os elementos da cola
    while(!estaVacia(cola)){
        desencolar(cola);}

    free(cola);
    cola->inicio = NULL;



    return OK;
}

int estaVacia(Cola cola) {
    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (cola->inicio == NULL)
        return TRUE;
    return FALSE;
}

Nodo crearNo(void * item, Nodo prox) {
	Nodo  no = malloc(sizeof(*no));
	if (no == NULL)
        return NULL;
	no->item = item;
	no->prox = prox;
	return no;
}


int encolar(Cola cola, void * item) {

    int pos = cola->tam;

    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (pos < 0 || pos > cola->tam)
        return INDICE_INVALIDO;


    if (pos == 0) {


        if (cola == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;

        Nodo  nuevoNodo = crearNodo(item, cola->inicio);

        if (nuevoNodo == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;

        cola->inicio = nuevoNodo;
        cola->tam++;
        return OK;




    } else {
        // prepara para inserir
        Nodo  aux;
        aux = cola->inicio;
        for(int i = 0; i < pos - 1; i++) {
            aux = aux->prox;
        }

        // adiciona o n�
        Nodo nuevoNodo = crearNodo(item, aux->prox);
        if (nuevoNodo == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;
        aux->prox = nuevoNodo;
    }
    cola->tam++;
    return OK;
}





int desencolar(Cola cola) {
    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(cola))
        return ESTRUCTURA_VACIA;
    Nodo  aux = cola->inicio;

    cola->inicio = aux->prox;
    free(aux);
    aux = NULL;
    cola->tam--;

    return OK;

}


int obtenerElemento(Cola cola, void* item, int pos) {

    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (estaVacia(cola))
        return ESTRUCTURA_VACIA;

    if (pos < 0 || pos >= cola->tam)
        return INDICE_INVALIDO;


    if (item == NULL)
        return PARAMETRO_INVALIDO;

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




    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (tam == NULL)
        return PARAMETRO_INVALIDO;

    *tam = cola->tam;




    return OK;
}

Nodo getNodo(Cola cola){
return cola->inicio;


};

/*void imprimir(Cola cola) {
    int qtdeElementos;
    obtenerTamanio(cola, &qtdeElementos);
    printf("[");
    for(int i = 0;i < qtdeElementos; i++) {
        Persona el;
        obtenerElemento(cola, &el, i);
        mostrarPersona(el);
    }
    printf("]\n");
}*/
int getTamanio(Cola cola){

return cola->tam;

};
