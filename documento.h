#ifndef DOCUMENTO_H_INCLUDED
#define DOCUMENTO_H_INCLUDED

struct documentoE;
typedef struct documentoE *Documento;
Documento crearDocumento();
void destruir (Documento d);
void mostrarDocumento(Documento d);
int mostrarElementoEncolado(Cola c);
void mostrarFecha();
#endif // DOCUMENTO_H_INCLUDED
