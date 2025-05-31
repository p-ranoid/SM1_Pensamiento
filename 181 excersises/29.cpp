#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿cuantos numeros vas a ingresar? ";
    cin >> n;

    vector<int> nums(n);
    cout << "ingresa los numeros:\n";
    for (int &x : nums) cin >> x;

    if (n > 1) {
        int ultimo = nums[n - 1];
        for (int i = n - 1; i > 0; i--) {
            nums[i] = nums[i - 1];
        }
        nums[0] = ultimo;
    }

    cout << "lista rotada a la derecha:\n";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
