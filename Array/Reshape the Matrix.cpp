// Problem Link: https://leetcode.com/problems/reshape-the-matrix/

// My Solution:

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int m = mat.size();
        int n = mat[0].size();

        if(m*n != r*c) return mat;

        vector<vector<int>>ans(r, vector<int>(c));


        int dest_i=0;
        int dest_j=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[dest_i][dest_j++] = mat[i][j];
                if(dest_j==c){
                    dest_j=0;
                    ++dest_i;
                }
            }
        }

        return ans;

    }
};
