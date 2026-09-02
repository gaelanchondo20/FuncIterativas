#include <iostream>
#include "Sumas.h"

using namespace std;

int main()
{
    const Sumas sumas;

    cout << "Prueba 2" << endl;
    cout << "Iterativa: " << sumas.sumaIterativa(2) << endl;
    cout << "Recursiva: " << sumas.sumaRecursiva(2) << endl;
    cout << "Directa:   " << sumas.sumaDirecta(2) << endl;

    cout << "Prueba 5" << endl;
    cout << "Iterativa: " << sumas.sumaIterativa(5) << endl;
    cout << "Recursiva: " << sumas.sumaRecursiva(5) << endl;
    cout << "Directa:   " << sumas.sumaDirecta(5) << endl;

    cout << "Prueba 10" << endl;
    cout << "Iterativa: " << sumas.sumaIterativa(10) << endl;
    cout << "Recursiva: " << sumas.sumaRecursiva(10) << endl;
    cout << "Directa:   " << sumas.sumaDirecta(10) << endl;

    cout << "Prueba 20" << endl;
    cout << "Iterativa: " << sumas.sumaIterativa(20) << endl;
    cout << "Recursiva: " << sumas.sumaRecursiva(20) << endl;
    cout << "Directa:   " << sumas.sumaDirecta(20) << endl;

    return 0;
}