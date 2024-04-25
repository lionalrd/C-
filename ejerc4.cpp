#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declarar variables para los atributos del vehículo
    string marca, modelo;
    int ano;
    float velocidadMaxima;
    bool esDeportivo;
    char categoriaEmision;

    // Solicitar al usuario que ingrese los atributos del vehículo
    cout << "Ingrese la marca del vehiculo: ";
    getline(cin, marca);

    cout << "Ingrese el modelo del vehiculo: ";
    getline(cin, modelo);

    cout << "Ingrese el ano del vehiculo: ";
    cin >> ano;

    cout << "Ingrese la velocidad maxima del vehiculo (en km/h): ";
    cin >> velocidadMaxima;

    cout << "¿Es un vehiculo deportivo? (1 para Si, 0 para No): ";
    cin >> esDeportivo;

    cout << "Ingrese la categoria de emision del vehiculo (A, B, C,): ";
    cin >> categoriaEmision;

    // Imprimir la ficha técnica divertida con los datos introducidos
    cout << "\n--- Ficha Tecnica Divertida ---" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Años: " << ano << endl;
    cout << "Velocidad Maxima: " << velocidadMaxima << " km/h" << endl;
    cout << "Es un vehiculo deportivo: " << (esDeportivo ? "Si" : "No") << endl;
    cout << "Categoria de Emision: " << categoriaEmision << endl;

    return 0;
}

