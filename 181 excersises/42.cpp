//Comprimir una cadena eliminando caracteres repetidos consecutivos.
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Comprimir cadena (eliminar repetidos consecutivos)\n";
    string s;
    cout << "Ingrese una cadena: ";
    cin >> s;

    string resultado;
    for (size_t i = 0; i < s.size(); ++i) {
        if (i == 0 || s[i] != s[i - 1]) {
            resultado += s[i];
        }
    }

    cout << "Cadena comprimida: " << resultado << "\n";

    return 0;
}
