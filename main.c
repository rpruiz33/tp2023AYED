#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"
#include "sistema.h"
#include "impresora.h"
#include "pila.h"
#include "sistema.h"
#include <string.h>
#include <time.h>



int main()
{
        srand(time(0));
        printf("\n***********************TP 2023 ROBERTO ANDRES RUIS PEREIRA DNI 37762826*********************\n\n\n");
        int op=0;
        Cola c=crearCola();
        Pila p=crearPila();
        Impresora i1;
        Sistema s;
        char nombreNavegador[20];
        char version[20];
        char paginasVisitadas[20];
        int encontrado=-1;
        char documento[20];
        char nombreImpresora[20];
        int nroImpresora;
        char modelo[20];
        do{
            printf("\n<><><><><><><>ingrese 1 para cargar los datos del sistema operativo y empezar<><><><><><><>\n");
            printf("\n<><><><><><><>ingrese 2 para apagar el sistema<><><><><><><><><><><><><><><><><><><><><><><>\n");
            printf("\n\n\n********************************************************************************************\n");
            scanf("%d",&op);
            switch(op){
                case 1:
                    iniciarSistema();
                break;
                case 2:
                    printf ("<><><><><><><>presione una tecla para apagar el sistema.....<><><><><><><><>");
                    system("pause");
                return 0;
                break;
            }
        }while(op!=0);
        return 0;
    }
