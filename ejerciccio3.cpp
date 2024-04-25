#include <iostream>

using namespace std;

int main() {
    float naturales, sociales, matematica, lengua, p;
    cout << "Digite la nota de naturales:" << endl;
    cin >> naturales;
    cout << "Digite la nota de sociales:" << endl;
    cin >> sociales;
    cout << "Digite la nota de matematica:" << endl;
    cin >> matematica;
    cout << "Digite la nota de lengua:" << endl;
    cin >> lengua;
    p = (naturales + sociales + matematica + lengua) / 4;
    cout << "el promedio de la nota es :" << p
        << endl;




    return 0;
}
