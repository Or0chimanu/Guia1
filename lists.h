#ifndef lists
#define lists

typedef struct nodo{
    char *siguiente;
    char *anterior;
    char nodo[50];
} nodo;

typedef struct lista{
    nodo *nodoinicial;
    nodo *nodofinal;
}lista;

lista pop(lista a);
lista add(lista a,char palabra[]);

#endif // Lists