#include <iostream>
using namespace std;

struct Bezout {
    int mcd, x, y;
};

Bezout euclidesExtendido(int a, int b) {
    if (b == 0) return {a, 1, 0};
    auto recur = euclidesExtendido(b, a % b);
    return {recur.mcd, recur.y, recur.x - (a/b) * recur.y};
}

int main() {
    int a, b;
    cout << "Ingrese a y b: ";
    cin >> a >> b;
    auto resultado = euclidesExtendido(a, b);
    cout << "MCD: " << resultado.mcd << endl;
    cout << "Coeficientes (x, y): (" << resultado.x << ", " << resultado.y << ")" << endl;
    return 0;
}