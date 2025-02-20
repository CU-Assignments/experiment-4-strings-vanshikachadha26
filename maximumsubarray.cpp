#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0]; // Start with first element
    int maxSum = nums[0]; // Initialize maxSum with first element

    for (int i = 1; i < nums.size(); i++) {
        // Either add current element to the existing subarray or start fresh
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum); // Update maxSum if currentSum is larger
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
