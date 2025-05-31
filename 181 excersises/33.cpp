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

    int maxCount = 0, numMax = nums[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            numMax = nums[i];
        }
    }

    cout << "El número que más se repite es: " << numMax << " (se repite " << maxCount << " veces)" << endl;

    return 0;
}
