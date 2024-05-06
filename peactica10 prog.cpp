#include <iostream>
#include <cmath> // Necesario para las funciones pow() y sqrt()
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        cout << "La ecuación no tiene soluciones reales." << endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "La solución única es x = " << x << endl;
    } else {
        double x1 = (-b - sqrt(discriminante)) / (2 * a);
        double x2 = (-b + sqrt(discriminante)) / (2 * a);
        cout << "Las dos soluciones reales son:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
