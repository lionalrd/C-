#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarMatriz(int **matriz, int filas, int columnas) {
    srand(time(0)); // Inicializar la semilla para generar números aleatorios

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 11; // Generar números aleatorios entre 0 y 10
        }
    }
}

void mostrarMatriz(int **matriz, int filas, int columnas) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int sumaTotal(int **matriz, int filas, int columnas) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j];
        }
    }
    return suma;
}

int sumaPares(int **matriz, int filas, int columnas) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] % 2 == 0) {
                suma += matriz[i][j];
            }
        }
    }
    return suma;
}

int sumaImpares(int **matriz, int filas, int columnas) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] % 2 != 0) {
                suma += matriz[i][j];
            }
        }
    }
    return suma;
}

void sumaColumnas(int **matriz, int filas, int columnas) {
    cout << "Suma de cada columna:" << endl;
    for (int j = 0; j < columnas; j++) {
        int suma = 0;
        for (int i = 0; i < filas; i++) {
            suma += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << suma << endl;
    }
}

void sumaFilas(int **matriz, int filas, int columnas) {
    cout << "Suma de cada fila:" << endl;
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j];
        }
        cout << "Fila " << i + 1 << ": " << suma << endl;
    }
}

int sumaDiagonalPrincipal(int **matriz, int filas, int columnas) {
    int suma = 0;
    int limite = min(filas, columnas);
    for (int i = 0; i < limite; i++) {
        suma += matriz[i][i];
    }
    return suma;
}

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    // Crear matriz dinámica
    int **matriz = new int *[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    llenarMatriz(matriz, filas, columnas);
    mostrarMatriz(matriz, filas, columnas);

    cout << "Suma total de la matriz: " << sumaTotal(matriz, filas, columnas) << endl;
    cout << "Suma de números pares: " << sumaPares(matriz, filas, columnas) << endl;
    cout << "Suma de números impares: " << sumaImpares(matriz, filas, columnas) << endl;
    sumaColumnas(matriz, filas, columnas);
    sumaFilas(matriz, filas, columnas);
    cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal(matriz, filas, columnas) << endl;

    // Liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}

