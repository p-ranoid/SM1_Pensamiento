#include <iostream>
#include <vector>
using namespace std;

vector<pair<double, double>> conjuntoCantor(double inicio, double fin, int iteraciones) {
    vector<pair<double, double>> resultado;
    resultado.push_back({inicio, fin});
    
    for (int i = 0; i < iteraciones; i++) {
        vector<pair<double, double>> nuevo;
        for (auto [a, b] : resultado) {
            double tercio = (b - a) / 3;
            nuevo.push_back({a, a + tercio});
            nuevo.push_back({b - tercio, b});
        }
        resultado = nuevo;
    }
    return resultado;
}

int main() {
    auto cantor = conjuntoCantor(0, 1, 3);
    for (auto [a, b] : cantor) {
        cout << "[" << a << ", " << b << "]" << endl;
    }
    return 0;
}