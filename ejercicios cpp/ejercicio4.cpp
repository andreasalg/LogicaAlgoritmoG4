/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/


#include <iostream>

using namespace std;

int main()
{
    const int estudiantes = 10;
    float suma = 0;
    float notas[estudiantes];
    float promedio;

    cout << "Ingrese las notas de cada uno de los " << estudiantes << " estudiantes:" << endl;
    for (int i = 0; i < estudiantes; ++i)
    {
        cout << "Nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
        if (notas[i] > 100) {
            notas[i] = 100;
        }
        suma += notas[i];
    }

    promedio = suma / estudiantes;

    cout << "El promedio general de la seccion es: " << promedio;
}