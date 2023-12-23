// Problem Link: https://leetcode.com/problems/valid-palindrome/

// My Solution:

class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.size();

        string s1 = "";

        for(int i=0;i<n;i++){

            if(s[i]>='a' and s[i]<='z') s1+=s[i];
            else if(s[i]>='A' and s[i]<='Z') s1+=(s[i]+32);
            else if(s[i]>='0' and s[i]<='9') s1+=s[i];

        }

        n = s1.size();

        for(int i=0,j=n-1;i<j;i++,j--){

            if(s1[i]!=s1[j]) return false;

        }

        return true;

    }
};
