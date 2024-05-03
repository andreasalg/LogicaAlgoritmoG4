/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int vectorSuma[n];

    cout << "Ingrese los elementos del primer vector: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        vectorSuma[i] = vector1[i] + vector2[i];
    }

    cout << "El vector resultado es: " << endl;

    for (int i = 0; i < n; i++) {
        cout << vectorSuma[i] << " ";
    }

    return 0;
}