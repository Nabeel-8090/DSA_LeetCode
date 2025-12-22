// Problem: Merge Sorted Array
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/merge-sorted-array/
// Time Complexity: O(m+n)
// Space Complexity: O(1)
// Approach: Two Pointers

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int ptr1 = m-1;
    int ptr2 = n-1;
    int i = m+n-1;
    while(ptr2 >= 0) {
        if(ptr1 >= 0 && nums1[ptr1] > nums2[ptr2]) {
            nums1[i] = nums1[ptr1];
            ptr1--;
        } else {
            nums1[i] = nums2[ptr2];
            ptr2--;
        }
        i--;
    }
}

int main() {

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    cout << "Merge Sorted Array: ";
    merge(nums1, m, nums2, n);
    for(int n : nums1) {
        cout << n << " ";
    }

    return 0;
}