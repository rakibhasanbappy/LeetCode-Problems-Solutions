// Problem Link: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/

// My Solution:

class Solution {
public:
    int minOperations(string s) {

        int start0 = 0, start1 = 0;


        for(int i=0;i<s.length();i++){

            if(i%2 == 0){
                if(s[i] == '0') start1++;
                else start0++;
            }
            else{
                if(s[i] == '0') start0++;
                else start1++;
            }

        }

        return min(start0, start1);


    }
};
