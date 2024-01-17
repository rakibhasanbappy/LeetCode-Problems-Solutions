// Problem Link: https://leetcode.com/problems/unique-number-of-occurrences
// My Solution: 
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>s;

        for(int i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            s.insert(i.second);
        }

        return mp.size() == s.size();
    }
};
