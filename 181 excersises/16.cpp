#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números vas a ingresar?\n";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que cero." << endl;
        return 1;
    }

    vector<int> numeros(n);
    cout << "Ingresa " << n << " números:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int minimo = *min_element(numeros.begin(), numeros.end());
    int maximo = *max_element(numeros.begin(), numeros.end());

    cout << "El numero minimo es: " << minimo << endl;
    cout << "El numero maximo es: " << maximo << endl;

    return 0;
}

