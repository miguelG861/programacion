#include <iostream>
#include <cmath> // Necesario para las funciones pow() y sqrt()
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son: " << x1 << " y " << x2 << endl;
    } else if (discriminante == 0) {
        double x1 = -b / (2 * a);
        cout << "La solución doble es: " << x1 << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son complejas: " << parteReal << " + " << parteImaginaria << "i y " << parteReal << " - " << parteImaginaria << "i" << endl;
    }

    return 0;
}
