#ifndef __NODO_H__
#define __NODO_H__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct Nodo Nodo;

Nodo{
    void *info;
    Nodo *sig;
    Nodo *ant;
};

Nodo *nodo_crear(void *infno, size_t size);
void nodo_eliminar(nodo *nodo);
bool nodo_actualizar(Nodo *nodo, void *info, size_t size);

#endif