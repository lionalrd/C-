#include <iostream>
#include <string>
using namespace std;

// Función para calcular el número mágico
int calcular(const string& fechaNacimiento);
int main() {
    string fechaNacimiento;



    // Solicitar al usuario ingresar la fecha de nacimiento
    cout << "Ingrese su fecha de nacimiento (en formato dd/mm/aaaa): ";
    getline(cin, fechaNacimiento);

    // Calcular el número mágico
    int numeroMagico = calcular(fechaNacimiento);

    // Mostrar el resultado
    cout << "El numero mágico de su fecha de nacimiento es: " << numeroMagico << endl;

    return 0;
}
int calcular(const string& fechaNacimiento) {
    int sumaTotal = 0;


   for (size_t i = 0; i < fechaNacimiento.size(); ++i) {
        char c = fechaNacimiento[i];
        if (isdigit(c)) {
            sumaTotal += c - '0';
        }
    }


    while (sumaTotal > 9) {
        int nuevaSuma = 0;
        while (sumaTotal > 0) {
            nuevaSuma += sumaTotal % 10;
            sumaTotal /= 10;
        }
        sumaTotal = nuevaSuma;
    }

    return sumaTotal;
}
