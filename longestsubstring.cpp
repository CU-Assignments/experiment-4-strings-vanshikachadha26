#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex; // Store last seen index of characters
    int maxLength = 0;
    int left = 0; // Left pointer of the window

    for (int right = 0; right < s.length(); right++) {
        if (charIndex.find(s[right]) != charIndex.end() && charIndex[s[right]] >= left) {
            left = charIndex[s[right]] + 1; // Move left pointer to avoid duplicates
        }
        charIndex[s[right]] = right; // Update the last seen index of current character
        maxLength = max(maxLength, right - left + 1); // Update max length
    }

    return maxLength;
}
int main(){}



















int main() {
    string s = "abcabcbb";
    cout << "Longest Substring Length: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
