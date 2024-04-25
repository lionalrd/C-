#include <iostream>
#include <string>

using namespace std;

// Funci�n para reducir un n�mero a un solo d�gito sumando sus d�gitos
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

// Funci�n para calcular el n�mero m�gico
int calcularNumeroMagico(const string& fechaNacimiento) {
    int suma = 0;

    // Sumar todos los d�gitos de la fecha de nacimiento
    for (char c : fechaNacimiento) {
        if (isdigit(c)) {
            suma += c - '0';
        }
    }

    // Reducir la suma a un solo d�gito
    return reducirASoloDigito(suma);
}

int main() {
    string fechaNacimiento;

    // Solicitar al usuario ingresar su fecha de nacimiento
    cout << "Ingrese su fecha de nacimiento en formato DD/MM/AAAA: ";
    getline(cin, fechaNacimiento);

    // Calcular y mostrar el n�mero m�gico
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

