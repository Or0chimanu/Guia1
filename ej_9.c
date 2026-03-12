#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include "lists.h"
#include <windows.h>

lista *nombres = NULL;

int verificar_largo(char string[]){
    if (strchr(string, '\n') == NULL)
        {
            printf("El nombre es demasiado largo\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
            return 0;
        }
    return 1;

}

void handler(int sig){
    char buffer[100];
    int i = 0;
    int n = size_lista(nombres);
    printf("Los nombres incorrectos ingresados fueron:\n");
    if(n>0){
        for(i = 0;i<n;i++){
            pop(nombres,buffer,100,0);
            printf("%s",buffer);
        }
    }
    exit(0);

}

int verificar_string(char string[])
{
    int esvalido = 1;
    for (int i = 0; i < strlen(string) - 1; i++)
    {
        printf("Posicion del vector numero: %d letra: %c ",i,string[i]);
        printf("\n");
        if (!((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')))
           {puts("Caracter invalido");
            esvalido = 0;
        }
    }
    return esvalido;
}

void upper(char *string){
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
           {string[i] = string[i] - ' ';
        }
    }  
}

int main(void)
{
    char nombre[10];
    nombre[0] = '\0';

    signal(SIGINT, handler);

    while (nombre[0] == '\0')
    {
        printf("Ingrese su nombre: ");
        fgets(nombre, 10, stdin);
        if(verificar_largo(nombre) == 0){puts("El nombre que ingreso es demasiado largo");nombre[0]='\0';continue;}
        if(verificar_string(nombre) == 0){puts("El nombre contiene caracteres especiales");nombres = push(nombres,nombre);nombre[0]='\0';continue;}
        nombre[sizeof(nombre)- 1] = '\0';
        upper(nombre);
        printf("El nombre correctamente ingresado es %s \n",nombre);
    }

    while(1) {
        Sleep(1);
    }


    return 0;
}