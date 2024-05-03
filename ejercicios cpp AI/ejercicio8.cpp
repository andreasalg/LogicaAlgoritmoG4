/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int productoPunto = 0;

    cout << "Ingrese los elementos del primer vector: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto punto es: " << productoPunto << endl;

    return 0;
}