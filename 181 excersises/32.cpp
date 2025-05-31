#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout << "tamaño primera lista:\n";
    cin >> n1;
    vector<int> lista1(n1);
    cout << "elementos primera lista:\n";
    for (int &x : lista1) cin >> x;

    cout << "Tamaño de la segunda lista:\n ";
    cin >> n2;
    vector<int> lista2(n2);
    cout << "Ingresa los elementos de la segunda lista:\n";
    for (int &x : lista2) cin >> x;
    lista1.insert(lista1.end(), lista2.begin(), lista2.end());

    cout << "Lista conectada:\n";
    for (int num : lista1) cout << num << " ";
    cout << endl;

    return 0;
}
