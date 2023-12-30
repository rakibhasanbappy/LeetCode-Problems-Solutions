// Problem Link: https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/

// My Solution:

class Solution {
public:
    bool makeEqual(vector<string>& words) {

        unordered_map<char, int>mp;

        if(words.size() == 1) return true;

        int cnt = 0;

        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                mp[words[i][j]]++;
                cnt++;
            }
        }

        if(cnt % words.size() != 0) return false;

        for(auto i:mp){
            cout<<i.second<<endl;
            if(i.second % words.size()!=0) return false;
        }

        return true;

    }
};
