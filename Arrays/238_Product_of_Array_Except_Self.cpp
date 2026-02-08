// Problem: Product of Array Except Self
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/product-of-array-except-self/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Prefix Sum

#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach - O(n^2)
// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int> answer;
//     for(int i=0; i<nums.size(); i++) {
//         int product = 1;
//         for(int j=0; j<nums.size(); j++) {
//             if(nums[i] != nums[j]) {
//                 product *= nums[j];
//             }
//         }
//         answer.push_back(product);
//     }
//     return answer;
// }

// Prefix & Suffix Approach - Space Complexity O(n)
// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> answer(n, 1);
//     vector<int> prefix(n, 1);
//     vector<int> suffix(n, 1);
//     for(int i=1; i<n; i++) {
//         prefix[i] = prefix[i-1] * nums[i-1];
//     }
//     for(int j=n-2; j>=0; j--) {
//         suffix[j] = suffix[j+1] * nums[j+1];
//     }
//     for(int k=0; k<n; k++) {
//         answer[k] = prefix[k] * suffix[k];
//     }
//     return answer;
// }

// Prefix Sum - Space Complexity O(1)
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1);
    for(int i=1; i<n; i++) {
        answer[i] = answer[i-1] * nums[i-1];
    }

    int suffix = 1;
    for(int j=n-2; j>=0; j--) {
        suffix *= nums[j+1];
        answer[j] *= suffix;
    }
    return answer;
}

int main() {

    vector<int> nums = {1, 2, 3, 4};

    vector<int> answer = productExceptSelf(nums);

    cout << "Rotated Array: ";
    for(int val : answer) {
        cout << val << " ";
    }

    return 0;
}