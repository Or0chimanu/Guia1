#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculo_promedio(int numeros[], int vuelta, int cont)
{
    float suma = 0;
    int div;

    if (vuelta == 0)
    {
        div = cont + 1;
    }
    else
    {
        div = 10;
    }

    for (int i = 0; i < 10; i++)
    {
        suma += numeros[i];
    }

    printf("El promedio de los ultimos 10 numeros es: %.2f\n", (float)(suma / div));
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

int main()
{
    char x[6] = "HOLA";
    int numeros[10] = {0};
    int i = 0;
    int vuelta = 0;
    char *restodelstring;
    int imputcheck;

    while (strcmp(x, "EXIT") != 0)
    {
        printf("Ingrese un numero hasta 99999\n");
        fgets(x, 6, stdin);
        if (strchr(x, '\n') == NULL)
        {
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
        }

        numeros[i] = strtol(x, &restodelstring, 10);

        printf("%d\n", i);
        printf("El numero ingresado es: %d\n", numeros[i]);
        printf("restodelstring: %s\n", restodelstring);
        if (strcmp(x, "EXIT") == 0)
        {
            puts("Saliendo del programa...");
            break;
        }
        /*if (strcmp(restodelstring, "") != 0)
        {
            puts("Entrada no valida, ingrese un numero o EXIT para salir");
            continue;
        }*/
        else
        {
            calculo_promedio(numeros, vuelta, i);
            if (i < 9)
            {
                i++;
            }
            else
            {
                i = 0;
                vuelta++;
            }
        }
    }

    return 0;
}