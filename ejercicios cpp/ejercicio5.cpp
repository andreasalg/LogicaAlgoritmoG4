/*Para un grupo de clase de 8 estudiantes, realice un programa que
    permita calcular y dar como salida lo siguiente:

✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo */

#include <iostream>
using namespace std;

int main()
{
    const int estudiantes = 8;
    int suma = 0;
    int aprobados = 0;
    int reprobados = 0;
    int notas[estudiantes];
    float promedio;

    cout << "Ingrese las notas de los " << estudiantes << " estudiantes:" << endl;
    for (int i = 0; i < estudiantes; ++i)
    {
        cout << "Ingrese la nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
        if (notas[i] > 100) {
            notas[i] = 100;
        }
        suma += notas[i];
    }

    promedio = suma / estudiantes;

    for (int i = 0; i < estudiantes; ++i)
    {
        if (notas[i] >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    // Mostrar resultados
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
}