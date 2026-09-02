#include "Sumas.h"

// Suma de 1 hasta n con un ciclo.
// Complejidad: O(n)
int Sumas::sumaIterativa(int n) const
{
    int suma = 0;

    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }

    return suma;
}

// Suma de 1 hasta n mediante recursividad.
// Complejidad: O(n).
int Sumas::sumaRecursiva(int n) const
{
    if (n == 1)
    {
        return 1;
    }

    return n + sumaRecursiva(n - 1);
}

// Suma de 1 hasta n con la fórmula n(n + 1) / 2.
// Complejidad: O(1).
int Sumas::sumaDirecta(int n) const
{
    return n * (n + 1) / 2;
}

