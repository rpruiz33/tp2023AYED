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
#include "fecha.h"
#include <time.h>



struct FechaE{
        int  fechaEmision;
        char fechaJuego[30];
        char * formato;
        int bytesEscritos;

    };

FechaP crearFecha(){
        FechaP f=malloc(sizeof(struct FechaE));
        return f;


    }

void mostrarFecha(FechaP f){
        FILE *a=fopen("archivo1.txt","a");
        time_t t = time(NULL);
        struct tm tiempoLocal = *localtime(&t);
        char fechaHora[20];
        f->formato="%Y-%m-%d %H:%M:%S";
        f->bytesEscritos=strftime(fechaHora, sizeof  fechaHora, f->formato, &tiempoLocal);
        if (f->bytesEscritos != 0) {
            printf("\nFecha y hora: %s\n", fechaHora);
            f->fechaEmision= (tiempoLocal.tm_wday);
            switch(f->fechaEmision){
                case 0:
                    printf("\nel dia de la impresion es domingo\n");
                fprintf(a,"\ndia de la impresion es domingo\n");
                break;
                case 1:
                    printf("\ndia de la impresion es lunes\n");
                    fprintf(a,"\ndia de la impresion es lunes\n");
                break;
                case 2:
                    printf("\ndia de la impresion martes\n");
                    fprintf(a,"\nedia de la impresion es martes\n");
                break;
                case 3:
                    printf("\ndia de la impresion miercoles\n");
                    fprintf(a,"\ndia de la impresion es miercoles\n");
                break;
                case 4:
                    printf("\ndia de la impresion es jueves\n");
                    fprintf(a,"\ndia de la impresion es jueves\n");
                break;
                case 5:
                    printf("\ndia de la impresion es viernes\n");
                    fprintf(a,"\ndia de la impresion es viernes\n");
                break;
                case 6:
                    printf("\ndia de la impresion es sabado\n");
                    fprintf(a,"\ndia de la impresion es sabado\n");
                break;


            }

        }else{
            printf("\nError formateando fecha\n");
        }
        strcpy(f->fechaJuego,"domingo");
        printf(a,"\nfecha de juego %s\n",f->fechaJuego);
        fprintf(a,"\n fecha de emision %s\n",fechaHora);
        fclose(a);
    }

void destructorFecha(FechaP f){
        free(f);
    }
