#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

nodo* crear_nodo(char *pal){
    nodo *n = malloc(sizeof *n);
    if (n == NULL){puts("Fallo la creacion de un nodo");return NULL;}
    n->siguiente = NULL;
    n->anterior = NULL;
    n->palabra = malloc(strlen(pal)+1);
    if (n->palabra == NULL){puts("Fallo la creacion de palabra");free(n);return NULL;}
    strcpy(n->palabra,pal);
    return n;

}

lista* crear_lista(nodo *nodo_inicial){
    lista *l = malloc(sizeof *l);
    if (l == NULL){puts("Falla en la creacion de la lista");return NULL;}
    l->nodoinicial = nodo_inicial;
    l->nodofinal = nodo_inicial;
    return l;
}
lista pop(lista a){
    nodo final

}

lista add(lista a,char *palabra){
    nodo 
    malloc()


}