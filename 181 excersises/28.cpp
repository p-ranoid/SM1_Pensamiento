#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n; 
    cout << "cuantos numeros vas a ingresar? "; 
    cin >> n;

    vector<int> nums(n);
    cout << "Ingresa los numeros:\n";
    for (int &x : nums) cin >> x;

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int num : nums) {
        if (num > max1) max2 = max1, max1 = num;
        else if (num > max2 && num < max1) max2 = num;
    }

    if (max2 == INT_MIN)
        cout << "no hay segundo numero más grande.\n";
    else
        cout << "el segundo numero más grande es: " << max2 << "\n";

    return 0;
}
