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
char documento[20];
char nombreImpresora[20];
int nroImpresora;
char modelo[20];
Documento d;
};
Impresora crearImpresora(char documento[20],char nombreImpresora[20], int nroImpresora,char modelo[20]){
Impresora i=malloc(sizeof (struct impresoraE));

strcpy(i->documento,documento);
strcpy(i->nombreImpresora,nombreImpresora);
strcpy(i->modelo,modelo);
i->nroImpresora=nroImpresora;
i->d=crearDocumento();

return i;


};
void liberarImpresora(Impresora i){
free (i);

};
void mostrarImpresora(Impresora i){
printf("nombre impresora-->%s\nmodelo-->%s\nnroImpresora-->%d\nel docuemento a imprimir es-->%s",i->nombreImpresora,i->modelo,i->nroImpresora,i->documento);


};

void mostrarElementoDesApilado(Pila p){

Impresora a= *((Impresora*)obtenerDatoP(getNodoP(p) ));
printf("----------------------------1111\n");
mostrarImpresora(a);
printf("\n");
};

