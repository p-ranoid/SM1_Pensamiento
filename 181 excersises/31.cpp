#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cout << "¿cuantos numeros vas a ingresar? ";
    cin >> n;

    vector<int> nums(n);
    cout << "ingresa los numeros:\n";
    for (int &x : nums) cin >> x;

    cout << "numero a buscar: ";
    cin >> target;

    int count = 0;
    for (int num : nums) {
        if (num == target)
            count++;
    }

    cout << "El número " << target << " aparece " << count << " veces." << endl;

    return 0;
}
