#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingresa el primer número: ";
    cin >> n1;
    cout << "Ingresa el segundo número: ";
    cin >> n2;

    int suma = 0;
    for (int i = n1 + 1; i < n2; ++i) {
        cout << i << " ";
        suma += i;
    }

    cout << "\nLa suma de los números comprendidos entre " << n1 << " y " << n2 << " es: " << suma << endl;

    return 0;
}
