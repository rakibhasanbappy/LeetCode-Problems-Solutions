// Problem Link: https://leetcode.com/problems/degree-of-an-array/

//My Solution:

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int,int>count;

        int degree = 0;

        int res = INT_MAX;

        for(int i=0;i<n;i++){
            count[nums[i]]++;
            if(count[nums[i]] > degree) degree = count[nums[i]];
        }

        if(degree == 1) return 1;

        for(auto i:count){
            if(i.second == degree){
                int first,last;
                for(int j=0;j<n;j++){
                    if(nums[j] == i.first){
                        first = j;
                        break;
                    }
                }
                for(int j=n-1;j>=0;j--){
                    if(nums[j] == i.first){
                        last = j;
                        break;
                    }
                }
                int len=last-first+1;
                res = min(len, res);

            }
        }
        return res;

    }
};
