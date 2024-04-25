#include <iostream>

using namespace std;

int main() {
    int inicio, fin, tamGrupo;
    char continuar;

    // Solicitar al usuario los valores de inicio y fin
    cout << "Ingrese el valor de inicio: ";
    cin >> inicio;
    cout << "Ingrese el valor de fin: ";
    cin >> fin;

    // Solicitar al usuario el tama�o del grupo
    cout << "Ingrese el tama�o del grupo a visualizar: ";
    cin >> tamGrupo;

    // Escribir los n�meros en grupos
    for (int i = inicio; i <= fin; i++) {
        cout << i << " ";

        // Mostrar un grupo completo de n�meros
        if (i % tamGrupo == 0) {
            cout << endl;
            cout << "�Desea continuar visualizando el siguiente grupo? (S/N): ";
            cin >> continuar;

            // Salir del bucle si el usuario no desea continuar
            if (continuar == 'N' || continuar == 'n') {
                break;
            }
        }
    }

    return 0;
}
