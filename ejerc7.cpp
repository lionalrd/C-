#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(const string& palabra) {
    int izquierda = 0;
    int derecha = palabra.length() - 1;

    // Recorrer la palabra desde ambos extremos hacia el centro
    while (izquierda < derecha) {
        // Ignorar los caracteres que no sean letras
        while (!isalpha(palabra[izquierda])) {
            izquierda++;
        }
        while (!isalpha(palabra[derecha])) {
            derecha--;
        }

        char charIzquierda = tolower(palabra[izquierda]);
        char charDerecha = tolower(palabra[derecha]);

        // Si los caracteres son diferentes, la palabra no es un palíndromo
        if (charIzquierda != charDerecha) {
            return false;
        }

        // Moverse al siguiente par de caracteres
        izquierda++;
        derecha--;
    }

    // Si se recorrió toda la palabra sin encontrar diferencias, es un palíndromo
    return true;
}

int main() {
    string palabra;

    // Solicitar al usuario que ingrese una palabra
    cout << "Ingrese una palabra para verificar si es un palindromo: ";
    cin >> palabra;

    // Verificar si la palabra es un palíndromo
    if (esPalindromo(palabra)) {
        cout << palabra << " es un palindromo." << endl;
    } else {
        cout << palabra << " no es un palindromo." << endl;
    }

    return 0;
}

