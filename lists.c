#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

nodo* crear_nodo(char pal[]){
    nodo *n = malloc(sizeof *n);
    if (n == NULL){puts("Fallo la creacion de un nodo");return NULL;}
    n->siguiente = NULL;
    n->anterior = NULL;
    n->palabra = malloc(strlen(pal)+1);
    if (n->palabra == NULL){puts("Fallo la creacion de palabra");free(n);return NULL;}
    strcpy(n->palabra,pal);
    return n;

}

lista* crear_lista(char *palabra){
    nodo *nodo_inicial = crear_nodo(palabra);
    lista *l = malloc(sizeof *l);
    if (l == NULL){puts("Falla en la creacion de la lista");return NULL;}
    l->nodoinicial = nodo_inicial;
    l->nodofinal = nodo_inicial;
    nodo_inicial->anterior = NULL;
    nodo_inicial->siguiente = NULL;
    return l;
}


lista* push(lista *l,char *n){
    if (n == NULL){puts("Para que agregas un nodo vacio?");return l;}
    if (l == NULL){return crear_lista(n);}
    nodo *new = crear_nodo(n);
    if(l->nodofinal == NULL){
        l->nodoinicial = new;
        l->nodofinal = new;
        new->anterior = NULL;
    }
    else{
    l->nodofinal->siguiente = new;
    new->anterior = l->nodofinal;
    l->nodofinal = new;}
    new->siguiente = NULL;
    return l;
}

void pop(lista *l,char *buffer,size_t buffer_size,int print){
    if(buffer == NULL){if(print){puts("No se puede popear la lista porque no hay un buffer adecuado");}return;}
    if(l==NULL){if(print){puts("No podes popear una lista que no existe");}return;}
    if(l->nodofinal == NULL){if(print){puts("La lista ya esta vacia, no se puede popear");}return;}
    nodo *aux = l->nodofinal;
    if(strlen(aux->palabra) + 1 > buffer_size){if(print){puts("El buffer es demasiado chico para almacenar el pop");}return;}
    strcpy(buffer,aux->palabra);
    if(l->nodofinal == l->nodoinicial){
        
        l->nodoinicial = NULL;
        l->nodofinal = NULL;
        free(aux->palabra);
        free(aux);
        if(print){
        puts("La lista ahora esta vacia");}
        return;
    }
    l->nodofinal = aux->anterior;
    l->nodofinal->siguiente = NULL;
    free(aux->palabra);
    free(aux);
}

int size_lista(lista *l){
    if (l == NULL){return -1;}
    if (l->nodoinicial == NULL){return 0;}
    nodo *n = l->nodoinicial;
    int i = 1;
    while(n->siguiente != NULL){
        i++;
        n = n->siguiente;
    }
    return i;
}