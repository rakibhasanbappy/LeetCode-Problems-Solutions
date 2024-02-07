// Problem Link: 
// My Solution:
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int,char>>pq;

        for(int i=0;i<s.size();i++) mp[s[i]]++;

        for(auto i:mp){
            pq.push(make_pair(i.second, i.first));
        }

        string ans="";

        while(!pq.empty()){
            ans+=string(pq.top().first, pq.top().second);
            pq.pop();
        }

        return ans;

    }
};