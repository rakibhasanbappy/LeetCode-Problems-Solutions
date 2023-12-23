// Problem Link: https://leetcode.com/problems/palindrome-number/

// My Solution:
class Solution {
public:
    bool isPalindrome(int x) {

        long ans = 0;

        int n = x;

        if(x<0) return false;
        while(x){
            ans = (ans*10)+(x%10);
            x = x/10;
        }
        if(n == ans) return true;
        else return false;


    }
};
