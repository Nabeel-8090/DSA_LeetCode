// Problem: Rotate Array
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/rotate-array/
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Approach: 

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& nums, int st, int end) {
    while(st < end) {
        swap(nums[st], nums[end]);
        st++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    reverse(nums, 0, nums.size()-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, nums.size()-1);
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated Array: ";
    for(int val : nums) {
        cout << val << " ";
    }

    return 0;
}