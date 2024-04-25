#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string cadena;

    // Solicitar al usuario que ingrese una cadena
    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    // Organizar las letras en orden alfabético
    sort(cadena.begin(), cadena.end());

    // Imprimir la cadena ordenada
    cout << "La cadena ordenada en orden alfabetico es: " << cadena << endl;

    return 0;
}

