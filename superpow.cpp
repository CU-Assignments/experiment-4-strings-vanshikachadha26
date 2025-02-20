#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1337;

// Function to compute (x^y) % mod using fast power
int modPower(int x, int y, int mod) {
    int result = 1;
    x = x % mod; // Reduce x mod m first

    while (y > 0) {
        if (y % 2 == 1) { // If y is odd, multiply x
            result = (result * x) % mod;
        }
        x = (x * x) % mod; // Square x
        y /= 2; // Divide exponent by 2
    }

    return result;
}

// Main function to compute (a^b) % 1337
int superPow(int a, vector<int>& b) {
    int result = 1;
    for (int digit : b) {
        result = modPower(result, 10, MOD) * modPower(a, digit, MOD) % MOD;
    }
    return result;
}

int main() {
    int a = 2;
    vector<int> b = {1, 0}; // Equivalent to 2^10
    cout << "Result: " << superPow(a, b) << endl; // Output: 1024 % 1337 = 1024
    return 0;
}
