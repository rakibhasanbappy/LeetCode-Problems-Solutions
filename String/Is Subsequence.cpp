// Problem Link: https://leetcode.com/problems/is-subsequence/

// My Solution:

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int sl = s.length();
        int st = t.length();

        if(st<sl) return false;

        if(sl == 0 or st == 0) return true;

        int flag = 0;

        for(int i=0,j=i;j<st;j++){

            if(s[i] == t[j]){
                i++;
            }

            if(i==sl){
                flag=1;
                break;
            }

        }

        if(flag) return true;
        else return false;

    }
};
