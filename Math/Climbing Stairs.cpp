// Problem Link: https://leetcode.com/problems/climbing-stairs/
// MY Solution: 
// Time Complexity: O(N)
// Space Complexity: O(N); can be done in O(1)
class Solution {
public:
    int climbStairs(int n) {
        
        vector<int>v(n+1);
        v[0] = 1;
        v[1] = 1;

        for(int i=2;i<=n;i++) v[i] = v[i-1]+v[i-2];

        return v[n];

    }
};