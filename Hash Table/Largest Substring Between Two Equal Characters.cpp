// Problem Link: https://leetcode.com/problems/largest-substring-between-two-equal-characters

// My Solution:
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        unordered_map<char, int>cnt;
        unordered_map<char, int>first;
        unordered_map<char, int>last;

        for(int i=0;i<s.length();i++){
            
            if(cnt[s[i]]==0){
                first[s[i]] = i;
            }else{
                last[s[i]] = i;
            }
            cnt[s[i]]++;
        }

        int len = 0, flag = 0;;

        for(auto i:cnt){
            
            if(i.second > 1){
                flag = 1;
                int distance = last[i.first] - first[i.first];
                if(distance > len) len = distance;
            }

        }

        if(!flag) return -1;

        return len-1;

    }
};