// Problem Link: https://leetcode.com/problems/valid-parentheses/description/
// My Solution:
class Solution {
public:
    bool isValid(string s) {
        
        int len = s.size();

        stack<int>openingPar;

        for(int i=0;i<len;i++){

            if(s[i] == '(' or s[i] == '{' or s[i] == '[') openingPar.push(s[i]);
            else{
                if(openingPar.empty()) return false;
                else{
                    char c = openingPar.top();
                    if((c=='(' and s[i]!=')') or (c=='{' and s[i]!='}') or (c=='[' and s[i]!=']')) return false;
                    openingPar.pop();
                }
            }

        }
        if(!openingPar.empty()) return false;

        return true;

    }
};