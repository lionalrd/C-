#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const string nombres[] = {"maria ", "luis", "Pedro", "lucia ", "mario", "esther", "mauel", "Sofia"};
const string apellidos[] = {"aquino", "perez", "martin", "Martinez", "sanchez", "Per", "Gusman", ""};

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

    string matrizNombres[8];
    int numerosUsadosNombres[8] = {0}; // Para asegurar que un nombre no se repita
    int numerosUsadosApellidos[8] = {0}; // Para asegurar que un apellido no se repita

    // Generar nombres aleatorios
    for (int i = 0; i < 8; ++i) {
        int indiceNombre = generarIndiceNoRepetido(numerosUsadosNombres, 8);
        int indiceApellido = generarIndiceNoRepetido(numerosUsadosApellidos, 8);
        matrizNombres[i] = nombres[indiceNombre] + " " + apellidos[indiceApellido];
    }

    // Imprimir y guardar en matriz
    for (int i = 0; i < 8; ++i) {
        cout << matrizNombres[i] << endl;
    }

    return 0;
}
