// Problem Link: https://leetcode.com/problems/intersection-of-two-arrays/

// My Solution:

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int>mp;
        set<int>result;
        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]] > 0) result.insert(nums2[i]);
        }

        for(auto i:result) ans.push_back(i);
        return ans;

    }
};
