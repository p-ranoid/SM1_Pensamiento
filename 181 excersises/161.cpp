#include <iostream>
#include <cmath>
using namespace std;

double factorialStirling(int n) {
    if (n == 0) return 1;
    return sqrt(2 * M_PI * n) * pow(n / M_E, n);
}

int main() {
    int n;
    cout << "Ingresa n: ";
    cin >> n;
    cout << "Aproximacion de " << n << "! ≈ " << factorialStirling(n) << endl;
    return 0;
}