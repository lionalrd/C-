#include <iostream>

using namespace std;

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Función para calcular el coeficiente binomial (binomio de Newton)
unsigned long long coeficienteBinomial(int n, int k) {
    if (k < 0 || k > n) {
        return 0; // Si k es mayor que n o negativo, el coeficiente binomial es 0
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;

    // Solicitar al usuario que ingrese los valores de n y k
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de k: ";
    cin >> k;

    // Calcular el coeficiente binomial
    unsigned long long coefBinomial = coeficienteBinomial(n, k);

    // Imprimir el resultado
    cout << " Este es el Resultado El coeficiente binomial C    gracia (" << n << ", " << k << ") es: " << coefBinomial << endl;

    return 0;
}

