#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"
#include "sistema.h"
#include "impresora.h"
#include "pila.h"
#include "sistema.h"
#include <string.h>
#include "documento.h"
struct documentoE{
char nombreDocumento[30];
char fechaModificacion[30];


};
Documento crearDocumento(){
Documento d=malloc(sizeof (struct documentoE));
printf("\ningrese el nnombre del documeto\n");
fflush(stdin);
gets(d->nombreDocumento);
printf("\ningrese la fecha de modificacion dd/mm/yyyy");
fflush(stdin);
gets(d->fechaModificacion);

return d;
};
void destruir (Documento d){

free(d);

};
void mostrarDocumento(Documento d){
printf("El nombre del documento es %s\n---la fecha de modificacion es %s \n",d->nombreDocumento,d->fechaModificacion);


};

int mostrarElementoDesencolado(Cola c){
if (getTamanio(c)==0){
    return ESTRUCTURA_VACIA;
}

Documento a= *((Documento*)obtenerDato(getNodo(c) ));

mostrarDocumento(a);
printf("\n");
};
