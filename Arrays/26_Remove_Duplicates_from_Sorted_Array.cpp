// Problem: Remove Duplicates form Sorted Array
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Two Pointers

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 1;
    for(int i=1; i<nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << "k: " << removeDuplicates(nums) << endl;
    for(int val : nums) {
        cout << val << " ";
    }

    return 0;
}