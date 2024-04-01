// Problem Link: https://leetcode.com/problems/majority-element/description/
// Time Complexity: O(n)
// Space Complexity: O(n)
// My Solution:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto i:nums){
            mp[i]++;
            if(mp[i]>nums.size()/2) return i;
        }

        return -1;
    }
};

// Follow-up question solution alogorithm: Moore Voting Algorithm
// Intuition: If we had some way of counting instances of the majority element as +1 and instances of any other element as -1, summing them would make it obvious that the majority element is indeed the majority element.
// Solution:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        n = n/2;
        for(auto x: m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};