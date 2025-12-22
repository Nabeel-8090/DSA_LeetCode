// Problem: Single Number
// Difficulty: Easy
// Topic: Array, Bit Manipulation
// LeetCode Link: https://leetcode.com/problems/single-number/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Bit Manipulation (XOR Operation)

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int val : nums) {
        ans = ans^val;
    }
    return ans;
}

int main() {

    vector<int> nums = {4, 1, 2, 1, 2};
    
    cout << "Single Number: " << singleNumber(nums) << endl;

    return 0;
}