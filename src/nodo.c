#include "nodo.h"

Nodo *nodo_crear(void *infno, size_t size){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo -> info = malloc(size);
    memcpy(nuevo->info, info, size);
    nuevo -> sig = nuevo ->ant = NULL;
    return nuevo;
}

void nodo_eliminar(nodo *nodo){
    if (nodo! = NULL){
        if(nodo -> sig == NULL && !nodo -> ant){
            free(nodo);
        }
    else{
        printf("El nodo no existe \n");
    }
    }
}

bool nodo_actualizar(Nodo *nodo, void *info, size_t size){
    nodo->info = realloc (nodo->info, size);
    if(!nodo->info) return false;
    memcpy(nodo->info, info, size);
}
