// Problem Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

// My Solution:

class Solution {
public:
    int strStr(string haystack, string needle) {

        int lenn = needle.size();
        int lenh = haystack.size();

        int find = -1;
        int i,j;

        for(i=0,j=0;i<lenh and j<lenn;){

            if(haystack[i] == needle[j]){

                if(find == -1) find = i;

                i++;
                j++;
            }
            else if(haystack[i] != needle[j] and find!=-1){

                i=find+1;
                find = -1;
                j=0;

            }
            else{
                i++;
            }

        }

        if(j == lenn) return find;
        else return -1;


    }
};
