// Problem: Contains Duplicate
// Difficulty: Easy
// Topic: Array, Sorting
// LeetCode Link: https://leetcode.com/problems/contains-duplicate/
// Time Complexity: O(nlogn)
// Space Complexity: O(1)
// Approach: Sorting Approach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
   sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == nums[i+1]) {
            return true;
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