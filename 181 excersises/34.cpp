#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cout << "primera palabra: ";
    cin >> s1;
    cout << "segunda palabra: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "no son anagramas" << endl;
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "son anagramas" << endl;
    else
        cout << "no son anagramas" << endl;

    return 0;
}
