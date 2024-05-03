/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida*/

#include <iostream>
using namespace std;

int main() {
  int matriz[5][5];
  int transpuesta[5][5];

  // Ingresar los elementos de la matriz
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "Ingrese el elemento en la fila " << i + 1 << " y columna " << j + 1 << ": ";
      cin >> matriz[i][j];
    }
  }

  // Calcular la transpuesta
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      transpuesta[j][i] = matriz[i][j];
    }
  }

  // Imprimir la matriz transpuesta
  cout << "\nMatriz transpuesta:" << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << transpuesta[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}