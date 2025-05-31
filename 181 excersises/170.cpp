#include <iostream>
#include <algorithm>
using namespace std;

bool esPalindromo(string palabra) {
    string original = palabra;
    reverse(palabra.begin(), palabra.end());
    return original == palabra;
}

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;
    
    if (esPalindromo(palabra)) {
        cout << "La palabra ES un palindromo 🐘." << endl;
    } else {
        cout << "La palabra NO es un palindromo :C ." << endl;
    }
    
    return 0;
}