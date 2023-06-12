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


};

Sistema crearSistema(char nombre[20],char ultimaActualizacion[20], int anioLanzamiento,int cantidadMemoriaRamMinimaEnGigas ){
    Sistema s=malloc(sizeof(struct sistemaE ));
    int op;

    Impresora i1;



    Cola c=crearCola();
    Pila p=crearPila();





    strcpy(s->nombre,nombre);
    strcpy(s->ultimaActualizacion,ultimaActualizacion);
    s->anioLanzamiento=anioLanzamiento;
    s->cantidadMemoriaRamMinimaEnGigas=cantidadMemoriaRamMinimaEnGigas;
    do{
        printf("\ningrese 1 para apilar impresora\n");
        printf("\ningrese 2 para desapilar  impresora\n");
        printf("\ningrese 3 para ver la informacion del sistema\n");

        scanf("%d",&op);
        switch(op){
            case 1:

                i1=crearImpresora();
                apilar(p,&i1);

            break;
            case 2:
                if(c!=NULL){
                    mostrarElementoDesApilado(p);
                    desapilar(p);
                }

            break;
            case 3:
                mostrarSistema(s);
            break;
        }
    }while(op!=0);

return s;


}



void iniciarSistema(){
    char nombre[20];
    char ultimaActualizacion[20];
    int anioLanzamiento;
    int cantidadMemoriaRamMinimaEnGigas;

    printf("\ningrese el nombre del sistema completo ejemplo.. windows 10..CentOS Stream 8\n");
    fflush(stdin);
    gets(nombre);
    printf("\nla ultima fecha de actualiazacion de \n");
    fflush(stdin);
    gets(ultimaActualizacion);
    printf("\ningrese el anio de lanzamiento\n");
    scanf("%d",&anioLanzamiento);
    printf("\ningrese  la cantidad de  Memoria Ram Minima En Gigas\n");
    scanf("%d",&cantidadMemoriaRamMinimaEnGigas);
    crearSistema(nombre,ultimaActualizacion,anioLanzamiento,cantidadMemoriaRamMinimaEnGigas);
}

void liberarSistema(Sistema s){
free(s);

};
void mostrarSistema(Sistema s){
printf("\nel nombre del sistema es %s\nla fecha de la ultima actualizacion es %s\nel anio de lanzamiennto es %d\nla cantidad Memoria Ram Minima En Gigas es %d \n",s->nombre,s->ultimaActualizacion,s->anioLanzamiento,s->cantidadMemoriaRamMinimaEnGigas);


};



