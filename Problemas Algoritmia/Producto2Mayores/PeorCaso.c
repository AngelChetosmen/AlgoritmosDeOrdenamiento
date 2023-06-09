/*
Autor: AngelChetosmen
Consultar la Licencia del Autor | Derechos Reservados EUVA B&T ©
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int Producto2Mayores(int *A, int n)
{
    int mayor1, mayor2, i, contador = 0;
    contador++; // Condicion
    if (A[0] > A[1])
    {
        mayor1 = A[0];
        contador++; // Asignacion
        mayor2 = A[1];
        contador++; // Asignaciom
    }
    else
    {
        mayor1 = A[1]; // Asignacion
        contador++;
        mayor2 = A[0];
        contador++; // Asignacion
    }
    i = 2;
    while (i < n)
    {
        contador++; // Condicion
        if (A[i] > mayor1)
        {
            mayor2 = mayor1;
            contador++; // Asignacion
            mayor1 = A[i];
            contador++; // Asignacion
        }
        else
        {
            if (A[i] > mayor2)
            {
                mayor2 = A[i];
            }
        }
        i++;
    }
    return contador;
}

int main(int narg, char **varg)
{
    int n, i;
    int *A;
    double promedio = 0;
    int auxiliar;

    if (narg != 2)
    {
        printf("\nIngresa una n");
        exit(1);
    }
    n = atoi(varg[1]);
    A = malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    auxiliar = Producto2Mayores(A, n);
    promedio = promedio + (float)auxiliar;
    printf("El promedio final de operaciones es %lf", promedio);

    return 0;
}
