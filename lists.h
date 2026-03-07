#ifndef lists
#define lists

typedef struct nodo{
    nodo *siguiente;
    nodo *anterior;
    char *palabra;
} nodo;

nodo crear_nodo(char *palabra);

typedef struct lista{
    nodo *nodoinicial;
    nodo *nodofinal;
}lista;

lista pop(lista a);
lista add(lista a,char *palabra);

#endif // Lists