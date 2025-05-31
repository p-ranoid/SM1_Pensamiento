#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "ingresa un numero para ver si es primo o no:\n";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " es primo." << endl;
    } else {
        cout << num << " no es primo." << endl;
    }

    return 0;
}
