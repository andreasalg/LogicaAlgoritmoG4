/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

int main()
{
    int variableN, suma = 0;

    cout << "Escriba un valor para n: " << endl;
    cin >> variableN;

    for (int i = 1; i <= variableN; i++)
    {
        suma += i;
    }

    cout << "La suma de los valores desde 1 hasta el " << variableN << " es " << suma << endl;
}