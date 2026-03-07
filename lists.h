#ifndef lists
#define lists

typedef struct nodo{
    char *siguiente;
    char *anterior;
    char nodo[];
} nodo;

typedef struct lista{
    nodo nodoinicial;
}lista;

lista pop(lista a);
lista add(lista a,char palabra[]);

#endif // Lists