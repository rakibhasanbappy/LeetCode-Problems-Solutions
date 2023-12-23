// Problem Link: https://leetcode.com/problems/set-mismatch/

// My Solution:

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int n = nums.size();

        int sum = (n*(n+1))/2;

        int duplicate;

        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                duplicate = nums[i];
                break;
            }
        }

        int sum_ = 0;

        for(int i=0;i<n;i++) sum_ += nums[i];

        int missing = sum - (sum_ - duplicate);

        return {duplicate, missing};

    }
};
