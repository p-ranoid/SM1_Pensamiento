//Encontrar el número que falta en una secuencia del 1 al N.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Encontrar número que falta en la secuencia 1..N\n";
    int n;
    cout << "Ingrese N: ";
    cin >> n;

    vector<int> nums(n - 1);
    cout << "Ingrese " << n - 1 << " números de la secuencia (sin repetidos):\n";
    for (int i = 0; i < n - 1; ++i) {
        cin >> nums[i];
    }

    int total = n * (n + 1) / 2;
    int suma = 0;
    for (int x : nums) suma += x;

    cout << "El número que falta es: " << total - suma << "\n";

    return 0;
}
