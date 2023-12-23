// Problem Link: https://leetcode.com/problems/repeated-substring-pattern/

// My Solution:

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int l = s.length();

        int flag = 0;
        int flagi = 0;

        for(int i=0,j=i+1;i<l/2 and j<l;){

            if(s[i] == s[j] and !flag){
                flag = j;
                flagi = i;
                i++;
                j++;
            }
            else if(s[i] == s[j]){
                i++;
                j++;
            }
            else if(s[i] != s[j]){
                if(flag){
                    j = flag+1;
                    i = flagi;
                    flag = 0;
                }
                else
                    j++;
            }

        }

        string sb,res;

        if(!flag) return false;
        else if(l % flag != 0) return false;
        else{

            for(int i=0;i<flag;i++) sb+=s[i];

            int n = l/flag;

            for(int i=0;i<n;i++)  res+=sb;
        }

        cout<<res<<endl;

        if(res == s) return true;
        return false;

    }
};
