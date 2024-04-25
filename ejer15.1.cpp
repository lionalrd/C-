#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un índice aleatorio no repetido
int generarIndiceNoRepetido(int numerosUsados[], int tamano) {
    int indice;
    do {
        indice = rand() % tamano;
    } while (numerosUsados[indice] == 1);
    numerosUsados[indice] = 1;
    return indice;
}

int main() {
    srand(time(0)); // Inicializar la semilla del generador de números aleatorios

    vector<string> nombres;
    vector<string> apellidos;

    // Solicitar al usuario ingresar nombres y apellidos
    cout << "Por favor, ingrese 8 nombres y apellidos separados por espacio:" << endl;
    for (int i = 0; i < 8; ++i) {
        string nombreApellido;
        getline(cin, nombreApellido);
        nombres.push_back(nombreApellido.substr(0, nombreApellido.find(' ')));
        apellidos.push_back(nombreApellido.substr(nombreApellido.find(' ') + 1));
    }

    // Generar nombres aleatorios
    vector<string> matrizNombres;
    int numerosUsados[8] = {0}; // Para asegurar que un nombre no se repita

    for (int i = 0; i < 8; ++i) {
        int indiceNombre = generarIndiceNoRepetido(numerosUsados, 8);
        int indiceApellido = generarIndiceNoRepetido(numerosUsados, 8);
        matrizNombres.push_back(nombres[indiceNombre] + " " + apellidos[indiceApellido]);
    }

    // Imprimir y guardar en matriz
    cout << "\nNombres generados:\n";
    for (int i = 0; i < 8; ++i) {
        cout << matrizNombres[i] << endl;
    }

    return 0;
}
