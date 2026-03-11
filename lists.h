#ifndef lists
#define lists

typedef struct nodo{
    struct nodo *siguiente;
    struct nodo *anterior;
    char *palabra;
} nodo;

nodo* crear_nodo(char pal[]);


typedef struct lista{
    nodo *nodoinicial;
    nodo *nodofinal;
}lista;

lista* crear_lista(char *palabra);


lista* push(lista *l,char *n);
void pop(lista *l,char *buffer,size_t buffer_size,int print);
int size_lista(lista *l);

#endif // Lists