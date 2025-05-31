#include <iostream>
#include <vector>
using namespace std;

vector<int> secuenciaLucas(int n) {
    if (n == 0) return {};
    if (n == 1) return {2};
    if (n == 2) return {2, 1};
    
    vector<int> seq = {2, 1};
    for (int i = 2; i < n; i++) {
        seq.push_back(seq[i-1] + seq[i-2]);
    }
    return seq;
}

int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    auto seq = secuenciaLucas(n);
    for (int num : seq) {
        cout << num << " ";
    }
    return 0;
}