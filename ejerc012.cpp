#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(const string& cadena) {
    int izquierda = 0;
    int derecha = cadena.length() - 1;

    // Recorrer la cadena desde ambos extremos hacia el centro
    while (izquierda < derecha) {
        // Ignorar los caracteres que no sean letras
        while (!isalpha(cadena[izquierda])) {
            izquierda++;
        }
        while (!isalpha(cadena[derecha])) {
            derecha--;
        }

        // Convertir ambos caracteres a minúsculas para ignorar mayúsculas
        char charIzquierda = tolower(cadena[izquierda]);
        char charDerecha = tolower(cadena[derecha]);

        // Si los caracteres son diferentes, la cadena no es un palíndromo
        if (charIzquierda != charDerecha) {
            return false;
        }

        // Moverse al siguiente par de caracteres
        izquierda++;
        derecha--;
    }

    // Si se recorrió toda la cadena sin encontrar diferencias, es un palíndromo
    return true;
}

int main() {
    string cadena;

    // Solicitar al usuario que ingrese una cadena
    cout << "Ingrese una cadena para verificar si es un palindromo: ";
    getline(cin, cadena);

    // Verificar si la cadena es un palíndromo
    if (esPalindromo(cadena)) {
        cout << "La cadena '" << cadena << "' es un palindromo." << endl;
    } else {
        cout << "La cadena '" << cadena << "' no es un palindromo." << endl;
    }

    return 0;
}
