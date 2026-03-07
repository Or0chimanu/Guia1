#ifndef lists
#define lists

typedef struct nodo{
    nodo *siguiente;
    nodo *anterior;
    char *palabra;
} nodo;

nodo* crear_nodo(char *pal);


typedef struct lista{
    nodo *nodoinicial;
    nodo *nodofinal;
}lista;

lista* crear_lista(nodo *nodo_inicial);

lista* pop(lista *l);
lista* push(lista *l,nodo *n);

#endif // Lists