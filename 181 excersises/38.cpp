//Implementar el cifrado César
#include <iostream>
using namespace std;

int main() {
    string texto;
    int desplazamiento;
    cout << "Texto a cifrar: ";
    getline(cin, texto);
    cout << "Desplazamiento: ";
    cin >> desplazamiento;
    
    for (char &c : texto) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = base + (c - base + desplazamiento) % 26;
        }
    }
    cout << "cifrado cesar: " << texto << endl;
    return 0;
}