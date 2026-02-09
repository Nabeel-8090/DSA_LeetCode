// Problem: Jump Game
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/jump-game/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Greedy Approach

#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {

    int finalPosition = nums.size() - 1;
    for(int i=nums.size()-2; i>=0; i--) {
        if(i+nums[i] >= finalPosition) {
            finalPosition = i;
        }
    }

    return finalPosition == 0;
}

int main() {

    vector<int> nums = {3, 2, 1, 0, 4};
    if(canJump(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}