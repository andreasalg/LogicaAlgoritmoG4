/*Dado un número natural n se desea calcular la suma de los números naturales desde 1 hasta n. Codifica el programa que resuelva este planteamiento.Dado un número natural n se desea calcular la suma de los números naturales desde 1 hasta n. 
Codifica el programa que resuelva este planteamiento.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Introduce el valor de n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "La suma de números desde 1 hasta " << n << " es: " << sum << endl;
    return 0;
}