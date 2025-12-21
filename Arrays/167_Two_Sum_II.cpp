// Problem: Two Sum II - Input Array is Sorted
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Two Pointers

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int st = 0, end = numbers.size()-1;
    while(st < end) {
        int currSum = numbers[st] + numbers[end];
        if(currSum == target) {
            return {st+1, end+1};
        } else if(currSum < target) {
            st++;
        } else {
            end--;
        }
    }
    return {};
}

int main() {

    vector<int> numbers = {2, 7, 11, 15};
    int target = 13;

    for(int idx : twoSum(numbers, target)) {
        cout << idx << " ";
    }

    return 0;
}