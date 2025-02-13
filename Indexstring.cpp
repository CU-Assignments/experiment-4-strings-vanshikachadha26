#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // Edge case: if needle is empty, return 0
        if (needle.empty()) {
            return 0;
        }

        // Find the first occurrence of needle in haystack
        int index = haystack.find(needle);

        // If not found, return -1
        return (index != string::npos) ? index : -1;
    }
};

int main() {
    Solution solution;

    // Test cases
    string haystack = "hello";
    string needle = "ll";
    cout << solution.strStr(haystack, needle) << endl;  // Output: 2

    haystack = "aaaaa";
    needle = "bba";
    cout << solution.strStr(haystack, needle) << endl;  // Output: -1

    haystack = "hello";
    needle = "";
    cout << solution.strStr(haystack, needle) << endl;  // Output: 0

    return 0;
}
