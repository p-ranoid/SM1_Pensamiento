#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << "°C equivale a " << fahrenheit << "°F" << endl;
    return 0;
}
