#include <iostream>

using namespace std;

// Funci�n para calcular el factorial de un n�mero
unsigned long long calcularFactorial(int n) {
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;

    // Solicitar al usuario ingresar un n�mero
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numero;

    // Verificar si el n�mero ingresado es v�lido
    if (numero < 0) {
        cout << "No se puede calcular el factorial de un n�mero negativo." << endl;
    }
    else {
        //  Este es el resultado
        unsigned long long factorial = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
