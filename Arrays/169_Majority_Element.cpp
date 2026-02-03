// Problem: Majority Element
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/majority-element/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Boyer-Moore Voting Algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force - O(n^2)
// int majorityElement(vector<int>& nums) {
//     int n = nums.size(), majElement = 0;
//     for(int val : nums) {
//         int freq = 0;
//         for(int el : nums) {
//             if(el == val) {
//                 freq++;
//             }
//         }
//         if(freq > n/2) {
//             return val;
//         }
//     }   
//     return -1;
// }

// Optimized - O(nlogn)
// int majorityElement(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     int freq = 1, ans = nums[0];
//     for(int i=1; i<nums.size(); i++) {
//         if(nums[i] == nums[i-1]) {
//             freq++;
//         } else {
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > nums.size()/2) {
//             return ans;
//         }
//     }
//     return ans;
// }

// Boyer-Moore Voting Algorithm
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    int count = 0;
    for(int val : nums) {
        if(val == ans) {
            count++;
        }
    }
    if(count > n/2) {
        return ans;
    }
    return -1;
}

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int majElement = majorityElement(nums);
    cout << "Majority Element: " << majElement << endl;

    return 0;
}