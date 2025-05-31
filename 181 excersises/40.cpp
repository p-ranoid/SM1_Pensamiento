//Crear una función que invierta una lista sin usar .reverse().
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Invertir lista sin usar reverse()\n";
    int n;
    cout << "Cuántos números tendrá la lista? ";
    cin >> n;
    
    vector<int> lista(n);
    cout << "Ingrese " << n << " números:\n";
    for (int i = 0; i < n; ++i) {
        cin >> lista[i];
    }

    for (int i = 0; i < n / 2; ++i) {
        swap(lista[i], lista[n - i - 1]);
    }

    cout << "Lista invertida: ";
    for (int num : lista) {
        std::cout << num << " ";
    }
    cout << "\n";

    return 0;
}
