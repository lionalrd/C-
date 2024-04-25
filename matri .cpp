
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int FILAS = 5;
    const int COLUMNAS = 6;
    int matriz[FILAS][COLUMNAS];
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // a) Almacena números aleatorios en la matriz
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = rand() % 11;  // Números aleatorios entre 0 y 10
            sumaTotal += matriz[i][j];
            if (matriz[i][j] % 2 == 0) {
                sumaPares += matriz[i][j];
            } else {
                sumaImpares += matriz[i][j];
            }
        }
    }

    // b) Recorre la matriz: mostrando sus elementos
    cout << "Matriz:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // c) Imprime la suma total
    cout << "Suma total: " << sumaTotal << endl;

    // d) Imprime la suma de los números pares
    cout << "Suma de números pares: " << sumaPares << endl;

    // e) Imprime la suma de los números impares
    cout << "Suma de números impares: " << sumaImpares << endl;

    // f) Imprime la suma de cada columna
    cout << "Suma de cada columna:" << endl;
    for (int j = 0; j < COLUMNAS; ++j) {
        int sumaColumna = 0;
        for (int i = 0; i < FILAS; ++i) {
            sumaColumna += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << sumaColumna << endl;
    }

    // g) Imprime la suma de cada fila
    cout << "Suma de cada fila:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        int sumaFila = 0;
        for (int j = 0; j < COLUMNAS; ++j) {
            sumaFila += matriz[i][j];
        }
        cout << "Fila " << i + 1 << ": " << sumaFila << endl;
    }

    // h) Imprime la suma de los elementos de la diagonal principal
    if (FILAS == COLUMNAS) {  // Solo si es una matriz cuadrada
        int sumaDiagonalPrincipal = 0;
        for (int i = 0; i < FILAS; ++i) {
            sumaDiagonalPrincipal += matriz[i][i];
        }
        cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal << endl;
    } else {
        cout << "La matriz no es cuadrada, no se puede calcular la suma de la diagonal principal." << endl;
    }

    return 0;
}

