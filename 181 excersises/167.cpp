#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int mcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int mcdConjunto(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int resultado = nums[0];
    for (int num : nums) {
        resultado = mcd(resultado, num);
        if (resultado == 1) break;
    }
    return resultado;
}

int main() {
    vector<int> nums = {12, 18, 24};
    cout << "MCD: " << mcdConjunto(nums) << endl;
    return 0;
}