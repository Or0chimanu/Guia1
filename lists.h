#ifndef lists
#define lists

typedef struct nodo{
    nodo *siguiente;
    nodo *anterior;
    char nodo[50];
} nodo;

typedef struct lista{
    nodo *nodoinicial;
    nodo *nodofinal;
}lista;

lista pop(lista a);
lista add(lista a,char palabra[50]);

#endif // Lists