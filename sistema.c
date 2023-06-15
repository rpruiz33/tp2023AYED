#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
#include "sistema.h"
#include "impresora.h"
#include "pila.h"
#include "sistema.h"
#include <string.h>
#include "sistema.h"

struct sistemaE{
char nombre[20];
char resolucion[20];
int anioCompro;
int cantidadMemoriaRamMinimaEnGigas;
Impresora i;


};

Sistema crearSistema(char nombre[20],char resolucion[20], int anioCompro,int cantidadMemoriaRamMinimaEnGigas ){
        system("cls");
        Sistema s=malloc(sizeof(struct sistemaE ));
        int op;
        Impresora i1;
        Pila p=crearPila();
        strcpy(s->nombre,nombre);
        strcpy(s->resolucion,resolucion);
        s->anioCompro=anioCompro;
        s->cantidadMemoriaRamMinimaEnGigas=cantidadMemoriaRamMinimaEnGigas;
        do{
            system("cls");
            printf("\n***********************************APILAR IMPRESORAS****************************************\n");
            printf("\ningrese 1 para apilar impresora\n");
            printf("\ningrese 2 para desapilar  impresora\n");
            printf("\ningrese 3 para ver la informacion del sistema\n");
            printf("\n*********************************************************************************************\n");
            scanf("%d",&op);
            system("cls");
            switch(op){
                case 1:
                    i1=crearImpresora();
                    apilar(p,&i1);
                    mostrarElementoApilado(p);
                break;
                case 2:
                    desapilar(p);
                break;
                case 3:
                    mostrarSistema(s);
                break;
            }
        }while(op!=0);
        return s;


    }



void iniciarSistema(){
        char nombre[30];
        char resolucion[20];
        int anioCompro;
        int cantidadMemoriaRamMinimaEnGigas;
        int resultado;
        int resultado1;
        int resultado2;
        system("cls");
        printf("\n*********************CARGAR DATOS SISTEMA OPERATIVO*****************************************\n");
        printf("\ningrese el nombre del sistema operativo completo <-- Windows -- Linux -- MacOs -->\n");
        fflush(stdin);
        gets(nombre);
        int r= validarSistema(nombre);
        while(r==-1){
            printf("\n!!VALIDACION INCORRECTA!!\n");
            printf("\ningrese de nuevo el nombre del sistema operattivo completo <-- Windows -- Linux -- MacOs -->\n");
            fflush(stdin);
            gets(nombre);
            r= validarSistema(nombre);
        }
        printf("\n!!VALIDACION CORRECTA!!!\n");
        printf("\nlingrese la resolucion de su sistema <-- x32--x86--x64-->\n");
        fflush(stdin);
        gets(resolucion);
        resultado= validarResolucion(resolucion);
        while(resultado==-1){
            printf("!!VALIDACION INCORRECTA!!");
            printf("\nlingrese de nuevo la resolucion de su sistema <-- x32--x86--x64-->\n");
            fflush(stdin);
            gets(resolucion);
            resultado= validarResolucion(resolucion);
        }
        printf("\n!!VALIDACION CORRECTA!!!\n");
        printf("\ningrese  el anio que compro el sistema de <--2010--a--2023-->\n");
        scanf("%d",&anioCompro);
        resultado1= validarAnioCompra(anioCompro);
        while(resultado1==-1){
            printf("!!VALIDACION INCORRECTA!!");
            printf("\ningrese de nuevo  el anio que compro el sistema de <--2010--a--2023-->\n");
            scanf("%d",&anioCompro);
            resultado1= validarAnioCompra(anioCompro);
        }
        printf("\n!!VALIDACION CORRECTA!!!\n");
        printf("\ningrese  la cantidad de  Memoria Ram Minima En Gigas <--2--4--8--16--32>\n");
        scanf("%d",&cantidadMemoriaRamMinimaEnGigas);
        resultado2= validarRam(cantidadMemoriaRamMinimaEnGigas);
        while(resultado2==-1){
            printf("!!VALIDACION INCORRECTA!!");
            printf("\ningrese  la cantidad de  Memoria Ram Minima En Gigas <--2--4--8--16--32>\n");
            scanf("%d",&cantidadMemoriaRamMinimaEnGigas);
            resultado2= validarRam(cantidadMemoriaRamMinimaEnGigas);
        }
        printf("\n!!VALIDACION CORRECTA!!!\n");
        printf("\n*********************FIN DE CARGA***********************************************************\n");
        system("PAUSE()");
        crearSistema(nombre,resolucion,anioCompro,cantidadMemoriaRamMinimaEnGigas);
        system("pause");

    }
void liberarSistema(Sistema s){
        free(s);

    };
void mostrarSistema(Sistema s){
        printf("\nel nombre del sistema es %s\nla resolucion del sistema es %s\nel anio de adquisicion del sistema es %d\nla cantidad Memoria Ram Minima En Gigas es %d \n",s->nombre,s->resolucion,s->anioCompro,s->cantidadMemoriaRamMinimaEnGigas);


    };

int validarSistema(char nombreSistema[30]){
int validar=-1;
        if(strcmp(nombreSistema,"Linux")==0){
            validar=1;
        }
        if(strcmp(nombreSistema,"Windows")==0){
            validar=1;
        }
        if(strcmp(nombreSistema,"MacOs")==0){
            validar=1;
        }
return validar;
};
int validarResolucion(char resolucion[30]){
        int validar=-1;
        if(strcmp(resolucion,"x32")==0){
            validar=1;
        }
        if(strcmp(resolucion,"x86")==0){
            validar=1;
        }
        if(strcmp(resolucion,"x64")==0){
            validar=1;
        }
return validar;
};

int validarAnioCompra(int anioCompro){
        int validar=-1;
            if(anioCompro>=2010 && anioCompro<=2023){
            validar=1;
        }
return validar;
};

int validarRam(int cantidadMemoriaRamMinimaEnGigas){
        int validar=-1;
        if(cantidadMemoriaRamMinimaEnGigas==2 || cantidadMemoriaRamMinimaEnGigas==4||cantidadMemoriaRamMinimaEnGigas==8||cantidadMemoriaRamMinimaEnGigas==16 ||cantidadMemoriaRamMinimaEnGigas== 32){
            validar=1;
        }
return validar;
};
