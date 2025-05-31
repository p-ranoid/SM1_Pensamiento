#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    int freq[26] = {0};

    for (char c : texto)
        if (isalpha(c)) freq[tolower(c) - 'a']++;

    for (int i = 0; i < 26; ++i)
        if (freq[i] > 0)
            cout << char('a' + i) << ": " << freq[i] << endl;

    return 0;
}
