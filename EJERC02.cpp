#include <iostream>

using namespace std;

int main() {
    // Declarar variables para almacenar los dos números
    double num1, num2;

    // Solicitar al usuario que ingrese los dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Realizar las operaciones
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;
    double division = num1 / num2;

    // Mostrar los resultados
    cout << "Suma: " << num1 << " + " << num2 << " = " << suma << endl;
    cout << "Resta: " << num1 << " - " << num2 << " = " << resta << endl;
    cout << "Multiplicacion: " << num1 << " * " << num2 << " = " << multiplicacion << endl;

    // Verificar si el divisor es diferente de cero para evitar divisiones por cero
    if (num2 != 0) {
        cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
    } else {
        cout << "Division: No se puede dividir por cero." << endl;
    }

    return 0;
}

