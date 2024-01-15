// Problem Link: https://leetcode.com/problems/find-players-with-zero-or-one-losses

// My Solution:
// Time Complexity: O(NlogN)
// Space Complexity: O(N)
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int>lossCount;

        vector<int>noLost;
        vector<int>oneLost;

        for(vector v:matches){
            lossCount[v[1]]++;
        }

        for(vector v:matches){
            if(lossCount[v[0]] == 0){
                noLost.push_back(v[0]);
                lossCount[v[0]] = 2;
            }
            if(lossCount[v[1]] == 1) oneLost.push_back(v[1]);
        }

        sort(noLost.begin(),noLost.end());
        sort(oneLost.begin(),oneLost.end());

        return {noLost,oneLost};    

    }
};
