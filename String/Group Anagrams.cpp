// Problem Link: https://leetcode.com/problems/group-anagrams/
// My Solution:
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>ans;

        unordered_map<string, vector<string>> mp;

        for(string s: strs){
            string t = s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }

        for(auto i:mp){
            ans.push_back(i.second);
        }

        return ans;

    }
};

// Read the solution with counting sort:
// https://leetcode.com/problems/group-anagrams/solutions/19200/c-unordered-map-and-counting-sort

// Complete the list from here for better understanding:
// https://leetcode.com/problems/group-anagrams/solutions/3687735/beats-100-c-java-python-beginner-friendly/
