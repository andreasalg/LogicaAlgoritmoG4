/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;

#define FILAS 5
#define COLUMNAS 5

int matriz1[FILAS][COLUMNAS];
int matriz2[FILAS][COLUMNAS];
int producto[FILAS][COLUMNAS];
int filas1, filas2, columnas1, columnas2;

void ingresarMatriz(int numMatriz)
{
    int numFilas, numColumnas;
    int(*matriz)[COLUMNAS];
    string etiquetaMatriz;

    if (numMatriz == 1)
    {
        matriz = matriz1;
        numFilas = filas1;
        numColumnas = columnas1;
        etiquetaMatriz = "matriz 1";
    }
    else
    {
        matriz = matriz2;
        numFilas = filas2;
        numColumnas = columnas2;
        etiquetaMatriz = "matriz 2";
    }

    cout << "\nIngrese cantidad de filas para " << etiquetaMatriz << ": ";
    cin >> numFilas;
    cout << "Ingrese cantidad de columnas para " << etiquetaMatriz << ": ";
    cin >> numColumnas;
    cout << endl;

    for (int i = 0; i < numFilas; ++i)
    {
        for (int j = 0; j < numColumnas; ++j)
        {
            cout << etiquetaMatriz << ": Ingrese el numero en fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    if (numMatriz == 1)
    {
        filas1 = numFilas;
        columnas1 = numColumnas;
        ingresarMatriz(2);
    }
    else
    {
        filas2 = numFilas;
        columnas2 = numColumnas;
    }
}

void multiplicarMatrices()
{
    if (columnas1 != filas2)
    {
        cout << "\nLas matrices no son compatibles." << endl;
        return;
    }

    for (int i = 0; i < filas1; ++i)
    {
        for (int j = 0; j < columnas2; ++j)
        {
            producto[i][j] = 0;
            for (int k = 0; k < columnas1; ++k)
            {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nProducto de matrices ingresadas:" << endl;
    for (int i = 0; i < filas1; ++i)
    {
        cout << "[";
        for (int j = 0; j < columnas2; ++j)
        {
            cout << producto[i][j];
            if (j != columnas2 - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
}

int main()
{

    ingresarMatriz(1);
    multiplicarMatrices();

}