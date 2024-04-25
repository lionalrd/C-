#include <iostream>
#include <climits>

using namespace std;

int main() {
    // Declarar variables
    int n;
    cout << "Ingrese la cantidad de numeros en el arreglo: ";
    cin >> n;

    // Declarar un arreglo de tamaño n
    int numeros[n];

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese los " << n << " numeros separados por espacios: ";
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Encontrar el menor y el mayor
    int menor = INT_MAX;
    int mayor = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    // Imprimir el menor y el mayor
    cout << "El menor numero es: " << menor << endl;
    cout << "El mayor numero es: " << mayor << endl;

    return 0;
}

