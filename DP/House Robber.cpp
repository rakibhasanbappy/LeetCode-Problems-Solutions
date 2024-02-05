// Problem Link: https://leetcode.com/problems/house-robber
// My Solution: (Need to revise later)
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};