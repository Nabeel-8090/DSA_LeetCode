// Problem: Remove Duplicates form Sorted Array II
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Two Pointers

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0; int k = 0;
    while(i < nums.size()) {
        int curr = nums[i]; 
        int j = i;
        while(j < nums.size() && nums[j] == curr) {
            j++;
        }
        int allowed = min(2, j-i);
        for(int x=0; x<allowed; x++) {
            nums[k++] = curr;
        }
        i = j;
    }
    return k;
}

int main() {

    vector<int> nums = {1, 1, 1, 2, 2, 3};

    cout << "k: " << removeDuplicates(nums) << endl;
    for(int val : nums) {
        cout << val << " ";
    }

    return 0;
}