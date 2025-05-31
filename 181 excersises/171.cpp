#include <iostream>
#include <string>
using namespace std;

int contarCaracteres(const string& cadena) {
    return cadena.length();
}

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    
    cout << "El texto tiene " << contarCaracteres(texto) << " caracteres." << endl;
    return 0;
}