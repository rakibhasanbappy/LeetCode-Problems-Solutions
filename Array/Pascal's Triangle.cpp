// Problem Link: https://leetcode.com/problems/pascals-triangle/

// My Solution:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> res;


        for(int c=1;c<=numRows;c++){

            if(c==1){
                vector<int>ans{1};
                res.push_back(ans);
            }
            else{
                vector<int>ans;
                ans.push_back(1);
                for(int i=1;i<res[c-2].size();i++){
                    ans.push_back(res[c-2][i] + res[c-2][i-1]);
                }
                ans.push_back(1);

                res.push_back(ans);

            }

        }
        return res;

    }
};
