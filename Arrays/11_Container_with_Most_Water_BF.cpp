// Problem: Container with Most Water
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/container-with-most-water/
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Approach: Brute Force Solution

#include <iostream>
using namespace std;

int maxArea(int height[], int size) {
    int w, ht, area, maxArea = 0;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            w = j-i;
            ht = min(height[i], height[j]);
            area = w * ht;
            maxArea = max(maxArea, area);
        }
    }
    return maxArea;
}

int main() {

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(height)/sizeof(height[0]);

    cout << "Maximum Water: " << maxArea(height, size) << " Units" << endl;

    return 0;
}