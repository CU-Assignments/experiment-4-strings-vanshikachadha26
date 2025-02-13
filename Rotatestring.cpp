#include <iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        // If the lengths are different, return false
        if (s.length() != goal.length()) {
            return false;
        }

        // Concatenate s with itself and check if goal is a substring of s + s
        string doubledS = s + s;
        return doubledS.find(goal) != string::npos;
    }
};

int main() {
    Solution solution;

    // Test cases
    string s = "abcde";
    string goal = "cdeab";
    cout << solution.rotateString(s, goal) << endl;  // Output: true

    s = "abcde";
    goal = "abced";
    cout << solution.rotateString(s, goal) << endl;  // Output: false

    return 0;
}
