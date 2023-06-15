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
        system("cls");
        Cola p= crearCola();
        Impresora i=malloc(sizeof (struct impresoraE));
        int op=0;
        printf("\n************************carga de datos impresora********************************************\n");
        printf("\ningrese nombre de la impresora\n");
        fflush(stdin);
        gets(i->nombreImpresora);
        printf("ingrese el numero de la impresora\n");
        scanf("%d",&i->nroImpresora);
        printf("\ningrese el modelo de la impresora\n");
        fflush(stdin);
        gets(i->modelo);
        printf("\n*************************carga de datos impresora*******************************************\n");
        system("cls");
        do{
            printf("\n****************************MENU PARA ENCOLAR DOCUMENTOS************************************\n");
            printf("\ningrese 1 para encolar documentos en impresora y mostrarlo\n");
            printf("\ningrese 2 para desencolarar documentos en la impresora\n");
            printf("\ningrese 3 para volver\n");
            printf("\n********************************************************************************************\n");
            scanf("%d",&op);
            switch(op){
                case 1:
                    i->d=crearDocumento();
                    encolar( p, &i->d);
                    printf("\n******************************ELEMENTO ENCOLADO***********************************\n");
                    mostrarElementoEncolado(p);
                    printf("\n**********************************************************************************\n");
                    system ("PAUSE()");
                    system("cls");
                break;
                case 2:
                    desencolar(p);
                break;
                case 3:
                    system("cls");
                    op=0;
                break;
            }
        }while(op!=0);
        system("cls");
        return i;


    };
void liberarImpresora(Impresora i){
        free (i);
    };

void mostrarImpresora(Impresora i){
        printf("nombre impresora-->%s\nmodelo-->%s\nnroImpresora-->%d\n",i->nombreImpresora,i->modelo,i->nroImpresora);
    };

void mostrarElementoApilado(Pila p){
        Impresora a= *((Impresora*)obtenerDatoP(getNodoP(p) ));
        mostrarImpresora(a);
        printf("\n");
    };

