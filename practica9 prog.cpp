#include <iostream>
using namespace std;

long long int factorial1(int n) {
    long long int ret = 1;
    while (n > 1) {
        ret *= n--;
    }
    return ret;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << factorial1(i) << ", ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
