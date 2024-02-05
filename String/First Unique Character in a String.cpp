// Problem Link: https://leetcode.com/problems/first-unique-character-in-a-string
// My Solution:
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int>mp;
        queue<char>q;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            q.push(s[i]);
        }

        char ans = 'A';

        for(int i=0;i<s.size();i++){
            char c = q.front();
            if(mp[c] == 1){
                ans = c;
                break;
            }
            q.pop();
        }

        for(int i=0;i<s.size();i++){
            if(ans == s[i]) return i;
        }

        return -1;
    }
};