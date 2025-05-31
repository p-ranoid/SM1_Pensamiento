#include <iostream>
#include <algorithm>
using namespace std;
int mayorn(int a, int b, int c) {
    return max({a, b, c});}

int main() {
    int a, b, c;
    cout << "Ingresa tres numeros enteros:\n";
    cin >> a >> b >> c;
    int mayor = mayorn(a, b, c);
    cout << "El mayor es: " << mayor << endl;

    return 0;
}