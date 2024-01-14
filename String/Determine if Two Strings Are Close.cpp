// Problem Link: https://leetcode.com/problems/determine-if-two-strings-are-close/

// My Solution:
// Time Complexity: O(NlogN)
// Spcae Complexity: O(N)
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        set<char>word_1;
        set<char>word_2;
        vector<int>v1(26,0);
        vector<int>v2(26,0);

        for(char c:word1){
            word_1.insert(c);
            v1[c-'a']++;
        }

        for(char c:word2){
            word_2.insert(c);
            v2[c-'a']++;
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        return word_1 == word_2 and v1==v2;
        

    }
};

// Another Solution in O(N) time complexity and O(1) space complexity:
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>w1(26,0),w2(26,0),w3(26,0),w4(26,0);
        for(char c:word1)
            w1[c-'a']++,w3[c-'a'] = 1;
    
        for(char c:word2)
            w2[c-'a']++,w4[c-'a'] = 1;
        
        sort(begin(w1),end(w1));
        sort(begin(w2),end(w2));
        return w1==w2&&w3==w4;
    }
};
