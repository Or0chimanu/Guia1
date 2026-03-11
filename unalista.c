#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void){

    char *a = "Hola";
    char *b = "Chau";

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

