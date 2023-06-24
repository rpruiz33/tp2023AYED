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
#include <time.h>
#include "fecha.h"
struct documentoE{
        char nombreDocumento[30];
        char fechaModificacion[30];
        FechaP f;

    };
Documento crearDocumento(){
        Documento d=malloc(sizeof (struct documentoE));
        printf("\ningrese el nombre del documento\n");
        fflush(stdin);
        gets(d->nombreDocumento);
        d->f=crearFecha();
        return d;
    };
void destruir (Documento d){

        free(d);

    };

void mostrarDocumento(Documento d){
        printf("\n*********************MOSTRAR DOCUMENTOS***********************\n");
        printf("El nombre del documento es %s\n",d->nombreDocumento);
        mostrarFecha(d->f);
        printf("\n**************************************************************\n");
    };

int mostrarElementoEncolado(Cola c){
        if (getTamanio(c)==0){
            return ESTRUCTURA_VACIA;
        }
        Documento a= *((Documento*)obtenerDato(getNodo(c) ));
        mostrarDocumento(a);
        printf("\n");
        return 1;
    };



