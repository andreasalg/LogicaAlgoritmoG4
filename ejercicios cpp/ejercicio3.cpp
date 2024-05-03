/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100. */

#include <iostream>

using namespace std;

int main()
{
    int sumaCuadrados = 0;

    for (int i = 1; i <= 100; ++i)
    {
        sumaCuadrados += i * i;
    }

    cout << "La suma de los cuadrados de los numeros del 1 al 100 es igual a: " << endl;
    cout << sumaCuadrados;
}