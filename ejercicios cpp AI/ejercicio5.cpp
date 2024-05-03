/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>

using namespace std;

int main() {
    int notas[8];
    int aprobados = 0;
    int reprobados = 0;
    float promedio;

    cout << "Ingrese las notas de los 8 estudiantes: " << endl;

    for (int i = 0; i < 8; i++) {
        cin >> notas[i];
        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = (float) (notas[0] + notas[1] + notas[2] + notas[3] + notas[4] + notas[5] + notas[6] + notas[7]) / 8;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}