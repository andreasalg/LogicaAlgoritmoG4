/* Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector. */

#include <iostream>
#include <vector>

using namespace std;

void sumaVectores();

int main()
{
   sumaVectores();
}

void sumaVectores()
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> sumaVector(longitud);

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; ++i)
    {
        sumaVector[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los dos vectores es:" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << sumaVector[i] << " ";
    }
}