// Problem: Jump Game II
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/jump-game-ii/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Greedy Approach

#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums) {
    int totalJumps = 0;
    int destination = nums.size()-1;
    int coverage = 0, lastJumpIdx = 0;
    if(nums.size() == 1) return 0;
    for(int i=0; i<nums.size(); i++) {
        coverage = max(coverage, i+nums[i]);
        if(i == lastJumpIdx) {
            lastJumpIdx = coverage;
            totalJumps++;

            if(coverage >= destination) {
                return totalJumps;
            }
        }
    }
    return totalJumps;
}

int main() {

    vector<int> nums = {2, 3, 1, 1, 4};
    
    cout << "Minimum Jumps: " << jump(nums) << endl;

    return 0;
}