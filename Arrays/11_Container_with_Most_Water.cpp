// Problem: Container with Most Water
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/container-with-most-water/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Two Pointers (Optimal)

#include <iostream>
using namespace std;

int maxArea(int height[], int left, int right) {
    int maxArea = 0;
    while(left < right) {
        int w = right-left;
        int ht = min(height[left], height[right]);
        int maxWater = w * ht;
        maxArea = max(maxArea, maxWater);

        height[left] < height[right] ? left++ : right--;
    }
    return maxArea;
}

int main() {

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(height)/sizeof(height[0]);

    cout << "Maximum Water: " << maxArea(height, 0, size-1) << " Units" << endl;

    return 0;
}