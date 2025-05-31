#include <iostream>
#include <random>
using namespace std;

vector<double> generarUniforme(int n, double min, double max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(min, max);
    
    vector<double> resultado;
    for (int i = 0; i < n; i++) {
        resultado.push_back(dist(gen));
    }
    return resultado;
}

int main() {
    auto nums = generarUniforme(5, 0, 1);
    for (double num : nums) {
        cout << num << " ";
    }
    return 0;
}