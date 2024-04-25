#include <iostream>

using namespace std;

// Función para calcular el factorial de un número
unsigned long long calcularFactorial(int n) {
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numero;

    // Verificar si el número ingresado es válido
    if (numero < 0) {
        cout << "No se puede calcular el factorial de un número negativo." << endl;
    }
    else {
        //  Este es el resultado
        unsigned long long factorial = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
