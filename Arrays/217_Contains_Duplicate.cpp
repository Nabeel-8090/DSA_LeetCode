// Problem: Contains Duplicate
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/contains-duplicate/
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Approach: Brute Force Solution

#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
   for(int i=0; i<nums.size(); i++) {
    for(int j=i+1; j<nums.size(); j++) {
        if(nums[i] == nums[j]) {
            return true;
        }
    }
   }
   return false;
}

int main() {

    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    if(containsDuplicate(nums)) {
        cout << "Vector contains duplicate!" << endl;
    } else {
        cout << "All elements are distinct." << endl;
    }

    return 0;
}