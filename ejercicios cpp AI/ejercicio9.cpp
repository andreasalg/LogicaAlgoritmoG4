/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;

void leerMatriz(int matriz[][10], int& filas, int& columnas)
{
    cout << "Ingrese el número de filas y columnas de la matriz (hasta 10): ";
    cin >> filas >> columnas;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void multiplicarMatrices(int matrizA[][10], int matrizB[][10], int resultado[][10], int filasA, int columnasA, int filasB, int columnasB)
{
    for (int i = 0; i < filasA; i++)
    {
        for (int j = 0; j < columnasB; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < columnasA; k++)
            {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void mostrarMatriz(int matriz[][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrizA[10][10];
    int matrizB[10][10];
    int resultado[10][10];
    int filasA, columnasA, filasB, columnasB;

    leerMatriz(matrizA, filasA, columnasA);
    leerMatriz(matrizB, filasB, columnasB);

    if (columnasA != filasB)
    {
        cout << "Las matrices no son compatibles para la multiplicación." << endl;
    }
    else
    {
        multiplicarMatrices(matrizA, matrizB, resultado, filasA, columnasA, filasB, columnasB);
        cout << "La matriz resultante es:" << endl;
        mostrarMatriz(resultado, filasA, columnasB);
    }

    return 0;
}