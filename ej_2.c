// Librerias
#include <stdio.h>
#include <stdint.h>

// Definiciones
#define SIZE_NUM ((uint8_t)5)    // Cantidad de numeros que deberia ingresar
#define SIZE_INPUT ((uint8_t)11) // Cantidad de caracteres que deberia ingresar

void bubblesort(int *vector, int size)
{
    /*
    Algoritmo bubble sort para un vector de enteros, hay que pasarle
    el tamaño como un valor aparte ya que C no lo guarda. Solo funciona
    con vectores int
    */
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (vector[i] > vector[j])
            {
                vector[i] ^= vector[j];
                vector[j] ^= vector[i];
                vector[i] ^= vector[j];
            }
        }
    }
}

float promedio(int *vector, float size)
{
    /*
    Calcula el promedio de numeros en un vector de tipo int
    */
    int suma = 0;
    for (int i = 0; i < size; i++)
    {
        suma += vector[i];
    }
    return (suma / size);
}

int main()
{
    char input[SIZE_INPUT]; // Entrada de caracteres
    int numeros[SIZE_NUM];  // Numeros a analizar
    int input_analysis;     // Analiza el ingreso de numeros
    int input_comas = 0;    // Analiza el ingreso de comas
    int valid = 1;          // Bool para salir del ciclo
    printf("Ingrese 5 numeros enteros separados por una coma:\n");
    while (valid)
    {
        fgets(input, SIZE_INPUT, stdin);
        // Valido las comas
        for (int i = 1; i < SIZE_INPUT - 1; i += 2)
        {
            if (input[i] != ',')
            {
                input_comas = 1;
            }
        }
        input_analysis = sscanf(input, "%d,%d,%d,%d,%d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);
        // Valido la entrada de 5 numeros y el ingreso de datos
        if (input_analysis < 5 || input_analysis == '\n' || input_comas)
        {
            printf("Tuvo un error en el ingreso, por favor vuelva a ingresar 5 numeros enteros separados por coma\n");
        }
        else
        {
            printf("Entrada de datos exitosa\n");
            valid = 0;
        }
    }
    // Hago el ordenamiento del vector
    bubblesort(numeros, SIZE_NUM);
    // Muestro el vector ordenado
    printf("El vector ordenado es:\n");
    for (int i = 0; i < SIZE_NUM; i++)
    {
        printf("%d,", numeros[i]);
    }
    // Calculo y muestro el promedio del vector
    float resultado = promedio(numeros, SIZE_NUM);
    printf("\n");
    printf("El promedio de los numeros es: %f\n", resultado);
    return 0;
}