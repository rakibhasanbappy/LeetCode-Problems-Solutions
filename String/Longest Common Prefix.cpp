// Problem Link: https://leetcode.com/problems/longest-common-prefix/

// My Solution:

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int cn = 0;
        string ans = "";
        char s;

        for(int i=0;i<strs[0].size();i++){

            for(auto& x:strs){
                if(!cn){
                    s = x[i];
                    cn++;
                    continue;
                }

                if(s != x[i]){
                    cn = -1;
                    break;
                }

            }

            if(cn == -1) break;
            else{
                ans += s;
                cn = 0;
            }
        }
        return ans;
    }
};
