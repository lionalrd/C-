#include <iostream>
#include <string>

using namespace std;

// Función para reducir un número a un solo dígito sumando sus dígitos
int reducirASoloDigito(int numero) {
    while (numero > 9) {
        int sumaDigitos = 0;
        while (numero != 0) {
            sumaDigitos += numero % 10;
            numero /= 10;
        }
        numero = sumaDigitos;
    }
    return numero;
}

// Función para calcular el número mágico
int calcularNumeroMagico(const string& fechaNacimiento) {
    int suma = 0;

    // Sumar todos los dígitos de la fecha de nacimiento
    for (char c : fechaNacimiento) {
        if (isdigit(c)) {
            suma += c - '0';
        }
    }

    // Reducir la suma a un solo dígito
    return reducirASoloDigito(suma);
}

int main() {
    string fechaNacimiento;

    // Solicitar al usuario ingresar su fecha de nacimiento
    cout << "Ingrese su fecha de nacimiento en formato DD/MM/AAAA: ";
    getline(cin, fechaNacimiento);

    // Calcular y mostrar el número mágico
    int sumaDigitos = 0;
    for (char c : fechaNacimiento) {
        if (isdigit(c)) {
            sumaDigitos += c - '0';
        }
    }
    int numeroMagico = reducirASoloDigito(sumaDigitos);
    cout << "El numero magico de su fecha de nacimiento es: " << numeroMagico << endl;

    return 0;
}

