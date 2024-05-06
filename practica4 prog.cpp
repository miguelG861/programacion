#include <iostream>
using namespace std;

int main() {
    int cantidadNumeros;
    double numero, suma = 0.0;

    cout << "Ingrese la cantidad de números a sumar: ";
    cin >> cantidadNumeros;

    for (int i = 1; i <= cantidadNumeros; ++i) {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}
