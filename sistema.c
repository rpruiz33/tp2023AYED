#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"
#include "sistema.h"
#include "impresora.h"
#include "pila.h"
#include "sistema.h"
#include <string.h>


#include "sistema.h"

struct sistemaE{
char nombre[20];
char ultimaActualizacion[20];
int anioLanzamiento;
int cantidadMemoriaRamMinimaEnGigas;
Impresora i;


};;

Sistema crearSistema(char nombre[20],char ultimaActualizacion[20], int anioLanzamiento,int cantidadMemoriaRamMinimaEnGigas ){
    Sistema s=malloc(sizeof(struct sistemaE ));
    int op;

    Impresora i1;



    Cola c=crearCola();
    Pila p=crearPila();

    char nombreNavegador[20];
    char version[20];
    char paginasVisitadas[20];

    char documento[20];
    char nombreImpresora[20];
    int nroImpresora;
    char modelo[20];
    char fecha [20];

    strcpy(s->nombre,nombre);
    strcpy(s->ultimaActualizacion,ultimaActualizacion);
    s->anioLanzamiento=anioLanzamiento;
    s->cantidadMemoriaRamMinimaEnGigas;
    do{
        printf("\ningrese 2 para encolar documentos en impresora\n");
        printf("\ningrese 3 para desencolarar documentos en la impresora\n");
        printf("\ningrese 4 para mostrar la cola de impresion \n");
        printf("\ningrese 5 para apilar paginas en el historial de navegacion\n");
        printf("\ningrese 6 para desapilar paginas en el historial de navegacion\n");
        printf("\ningrese 7 para mostrar la pila de navegacion\n");
        scanf("%d",&op);
        switch(op){
            case 2:

                i1=crearDocumento();
                encolar(c,&i1);

            break;
            case 3:
                desencolar(c);
 mostrarElementoDesencolado(c);
            break;
            case 4:


            break;
            case 5:



                i1=crearDocumento();
                Pila p= crearPila();
                apilar( p, &i1);


            break;
            case 6:

                desapilar(p);
                mostrarElementoDesApilado(p);
                printf("-222222222222222222222-");

            break;
            case 7:


            break;

        }
    }while(op!=0);

return s;


}
void agregarImpresoras(Sistema s){
 Cola c=crearCola();
 encolar( c,&s->i);


}

void liberarSistema(Sistema s);
void mostrarSistema(Sistema s);

void iniciarSistema(){
    char nombre[20];
    char ultimaActualizacion[20];
    int anioLanzamiento;
    int cantidadMemoriaRamMinimaEnGigas;

    printf("\ningrese el nombre del sistema completo ejemplo.. windows 10..CentOS Stream 8\n");
    fflush(stdin);
    gets(nombre);
    printf("\la ultima fecha de actualiazacion de \n");
    fflush(stdin);
    gets(ultimaActualizacion);
    printf("\ningrese el anio de lanzamiento\n");
    scanf("%d",&anioLanzamiento);
    printf("\ningrese  la cantidad de  Memoria Ram Minima En Gigas\n");
    scanf("%d",&cantidadMemoriaRamMinimaEnGigas);
    Sistema s=crearSistema(nombre,ultimaActualizacion,anioLanzamiento,cantidadMemoriaRamMinimaEnGigas);
}




