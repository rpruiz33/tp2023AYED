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
struct impresoraE{

char nombreImpresora[20];
int nroImpresora;
char modelo[20];
Documento d;
};
Impresora crearImpresora(){
Impresora i=malloc(sizeof (struct impresoraE));

int op=0;

printf("\ningrese nombre de la impresora\n");
fflush(stdin);
gets(i->nombreImpresora);
printf("ingrese el numero de la impresora\n");
scanf("%d",&i->nroImpresora);
printf("\ningrese el modelo de la impresora\n");
fflush(stdin);
gets(i->modelo);
    do{
        printf("\ningrese 1 para encolar documentos en impresora\n");
        printf("\ningrese 2 para desencolarar documentos en la impresora\n");
        printf("\ningrese 3 para ver el documento\n");
        printf("\ningrese 0 para volver\n");
        scanf("%d",&op);
        switch(op){

            case 1:
                i->d=crearDocumento();
                Cola p= crearCola();
                encolar( p, &i->d);
                mostrarElementoEncolado(p);
                break;
            case 2:
                desencolar(p);


            break;
            case 3:
                if(i->d && p==NULL){
                mostrarDocumento(i->d);
                }
                else{
                    printf("no se creo ningun documento");

                }
            break;

        }
    }while(op!=0);
return i;


};
void liberarImpresora(Impresora i){
free (i);

};
void mostrarImpresora(Impresora i){
printf("nombre impresora-->%s\nmodelo-->%s\nnroImpresora-->%d\n",i->nombreImpresora,i->modelo,i->nroImpresora);


};

void mostrarElementoDesApilado(Pila p){

Impresora a= *((Impresora*)obtenerDatoP(getNodoP(p) ));
printf("----------------------------1111\n");
mostrarImpresora(a);
printf("\n");
};

