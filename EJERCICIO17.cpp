#include <iostream>
#include <vector>

using namespace std;

int main()




{
    int numero;
    vector<int> numeros;
    int contador = 0;
    int maxRepeticiones = 0;
    int numeroMasRepetido;

    cout << "Ingrese n�meros (0 para terminar):" << endl;

    // Leer n�meros hasta que se introduzca 0
    while (true) {
        cin >> numero;
        if (numero == 0) {
            break;
        }
        numeros.push_back(numero);
        contador++;
    }

    // Calcular la mayor secuencia de n�meros consecutivos iguales
    int repeticionesActuales = 1;
    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] == numeros[i - 1]) {
            repeticionesActuales++;
        } else {
            if (repeticionesActuales > maxRepeticiones) {
                maxRepeticiones = repeticionesActuales;
                numeroMasRepetido = numeros[i - 1];
            }
            repeticionesActuales = 1;
        }
    }
    // Verificar si la �ltima secuencia es la mayor
    if (repeticionesActuales > maxRepeticiones) {
        maxRepeticiones = repeticionesActuales;
        numeroMasRepetido = numeros[numeros.size() - 1];
    }

    // Mostrar resultados
    cout << "El n�mero de introducciones efectuadas es: " << contador << endl;
    cout << "El n�mero m�s repetido es el " << numeroMasRepetido << " y se ha escrito " << maxRepeticiones << " veces." << endl;

    return 0;
}
