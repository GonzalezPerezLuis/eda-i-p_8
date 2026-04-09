#include "lista_ligada.h"

DLista* lista_crear(){
    DLista* l = (DLista*)malloc(sizeof(DLista));
    if(l!=NULL){
        l->head = l->tail = NULL;
    }
    return l;
}

bool lista_insertar_vacia(DLista *l, void *info, size_t size){
 if(l==NULL) return false;
 Nodo *n = nodo_crear(info, size);
 l->head = l->tail = n;
 return true;
}

bool lista_insertar_inicio(DLista *l, void *info, size_t size){
    if(!l) return false;
    Nodo* nuevo = nodo_crear(info, size);
    nuevo->sig = l->head;
    l->head->ant = nuevo;
    l->head = nuevo;
    return true;
}

bool lista_insertar_fin(DLista *l, void *info, size_t size){
    if(!l) return false;
    Nodo* nuevo = nodo_crear(info, size);
    nuevo->ant = l->tail;
    l->tail->sig = nuevo;
    l->tail = nuevo;
    return true;
}

bool lista_insertar_x_pos(DLista *l, int pos, void *info, size_t s){
    if (!l) return false;
    if (lista_es_vacia(l)) return lista_insertar_vacia (l, info, s);
    if (pos == 0) return lista_insertar_inicio (l, info, s);
    if (pos == lista) //PENDIENTE
    if (pos >= 1 && pos <= (lista_num_nodos(l)-1)){
        Nodo* nuevo = 
    }
}