// Problem Link: https://leetcode.com/problems/minimum-falling-path-sum
// My Solution using Recursion and Memoization (This one got TLE, See below):
// Time Complexity: O(3^N) [N = n*n]
// Space Complexity: O(N) [N = n*n]
class Solution {
public:

    int n;
    int t[101][101];

    int solve(vector<vector<int>>& matrix, int row, int col){

        if(row == n-1){
            return matrix[row][col];
        }

        if(t[row][col] != -1) return t[row][col];
    
        int subSum = matrix[row][col];
        int minSum = INT_MAX;

        if(row+1<n and col-1>=0)
            minSum = min(minSum, subSum + solve(matrix, row+1, col-1));
        if(row+1<n)
            minSum = min(minSum, subSum + solve(matrix, row+1, col));
        if(row+1<n and col+1<n)
            minSum = min(minSum, subSum + solve(matrix, row+1, col+1));

        return t[row][col] = minSum;

    }

    int minFallingPathSum(vector<vector<int>>& matrix) {

        n = matrix.size();
        memset(t, -1, sizeof(t));
        
        int row = 0;
        int minSum = INT_MAX;

        for(int col=0;col<matrix.size();col++){
            minSum = min(minSum, solve(matrix, row, col));
        }
        

        return minSum;

    }
};

// Accepted Solution (Bottom-Up Approach):
// Time Complexity: O(N^2)
// Space Complexity: O(N^2)
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n = matrix.size();
        vector<vector<int>>t(n, vector<int>(n));

        for(int col=0;col<n;col++){
            t[0][col] = matrix[0][col];
        }

        for(int row=1;row<n;row++){
            for(int col=0;col<n;col++){
                
                int a = INT_MAX;
                int b = INT_MAX;

                if(col-1 >= 0) a = t[row-1][col-1];

                if(col+1 < n) b = t[row-1][col+1];

                t[row][col] = matrix[row][col] + min({t[row-1][col], a, b});
            }
        }


        return *min_element(t[n-1].begin(),t[n-1].end());

    }
};