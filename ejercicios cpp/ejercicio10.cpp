/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>

using namespace std;

#define FILAS 5
#define COLUMNAS 5

int matriz[FILAS][COLUMNAS];
int transpuesta[FILAS][COLUMNAS];
int filas, columnas;

void ingresar()
{
    int num;
    cout << endl;
    for (int x = 0; x < filas; x++)
    {
        for (int y = 0; y < columnas; y++)
        {
            cout << "ingresar numero en fila " << x + 1 << ", columna " << y + 1 << ": ";
            cin >> num;
            matriz[x][y] = num;
        }
    }
}

void transponer()
{
    for (int x = 0; x < filas; x++)
    {
        for (int y = 0; y < columnas; y++)
        {
            transpuesta[y][x] = matriz[x][y];
        }
    }

    cout << "\nTransposicion de matriz ingresada:" << endl;
    for (int x = 0; x < columnas; x++)
    {
        cout << "[";

        for (int y = 0; y < filas; y++)
        {
            if (y == filas - 1)
            {
                cout << transpuesta[x][y] << "]" << endl;
            }
            else
            {
                cout << transpuesta[x][y] << ", ";
            }
        }
    }
}

main()
{
    cout << "\ningresar cantidad de filas: ";
    cin >> filas;
    cout << "ingresar cantidad de columnas: ";
    cin >> columnas;

    if (filas <= FILAS && columnas <= COLUMNAS)
    {
        ingresar();
        transponer();
    }
    else
    {
        cout << "\nLa cantidad de filas y columnas debe ser menor o igual a " << FILAS << " y " << COLUMNAS << " respectivamente." << endl;
    }
}