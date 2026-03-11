#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void){

    nodo *a = crear_nodo("Hola");
    nodo *b = crear_nodo("Manu");

    int i = 0;
    char buffer[100];

    lista *l = crear_lista(a);
    
    push(l,b);
   
    
    for (i = 0; i < 2;i++){
        
        pop(l,buffer,50,0);
        printf("%s en el nodo %d\n",buffer,i);

    }


    return 0;
}

