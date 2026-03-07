#ifndef lists
#define lists

typedef struct nodo{
    nodo *siguiente;
    nodo *anterior;
    char *palabra;
} nodo;

nodo* crear_nodo(char pal[]);


typedef struct lista{
    nodo *nodoinicial;
    nodo *nodofinal;
}lista;

lista* crear_lista(nodo *nodo_inicial);


lista* push(lista *l,nodo *n);
void pop(lista *l,char *buffer,size_t buffer_size);

#endif // Lists