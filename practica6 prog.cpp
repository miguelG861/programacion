#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "\nEl número es par." << endl;
    } else {
        cout << "\nEl número es impar." << endl;
    }

    return 0;
}
