#include <iostream>
#include <cmath>
using namespace std;

bool esCuadradoPerfecto(int x) {
    if (x < 0) return false;
    int s = sqrt(x);
    return (s * s == x);
}

bool esFibonacci(int n) {

    if (n < 0) return false;
    int val = 5 * n * n;
    return esCuadradoPerfecto(val + 4) || esCuadradoPerfecto(val - 4);
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    
    if (esFibonacci(num)) {
        cout << num << " es un número Fibonacci" << endl;
    } else {
        cout << num << " NO es un número Fibonacci" << endl;
    }
    
    return 0;
}