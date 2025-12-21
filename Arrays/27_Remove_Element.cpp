// Problem: Remove Element
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/remove-element/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Fast & Slow

#include <iostream>
#include <vector>
using namespace std;

int removeElemnt(vector<int>& nums, int val) {
    int k = 0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] != val) {
            nums[k++] = nums[i]; 
        }
    }
    return k;
}

int main() {

    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    cout << "k: " << removeElemnt(nums, val) << endl;


    return 0;
}