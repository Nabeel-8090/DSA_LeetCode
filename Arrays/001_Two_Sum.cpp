// Problem: Two Sum
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/two-sum/
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Approach: Brute Force Solution

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[i]+nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return {i, j};
            }
        }
    }
    return {};
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    twoSum(nums, target);

    return 0;
}