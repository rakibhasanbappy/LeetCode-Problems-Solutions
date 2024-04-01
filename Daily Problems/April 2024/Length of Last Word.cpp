// Problem Link: https://leetcode.com/problems/length-of-last-word
// Date: 01 April 2024
// My Solution in C++:
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int length = 0;

        for(int i=s.size()-1;i>=0;i--){

            if(s[i]==' '){
                if(length) break;
            }
            else length++;
        }

        return length;

    }
};
// Time Complexity: O(N)
// Space Complexity: O(1)

