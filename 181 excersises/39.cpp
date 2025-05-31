//Torres de Hanoi
#include <iostream>
#include <functional>
using namespace std;

int main() {
    cout << "Torres de Hanoi\n";
    int n;
    cout << "Ingresa el número de discos: ";
    cin >> n;

    function<void(int, char, char, char)> hanoi = [&](int discos, char origen, char destino, char auxiliar) {
        if (discos == 1) {
            std::cout << "Mover disco 1 de " << origen << " a " << destino << "\n";
            return;
        }
        hanoi(discos - 1, origen, auxiliar, destino);
        cout << "Mover disco " << discos << " de " << origen << " a " << destino << "\n";
        hanoi(discos - 1, auxiliar, destino, origen);
    };

    hanoi(n, 'A', 'C', 'B');
    return 0;
}
