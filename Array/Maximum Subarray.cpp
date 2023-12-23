// Problem Link: https://leetcode.com/problems/maximum-subarray/

// My Solution:

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int _max = nums[0];

        int curr_sum=nums[0];

        for(int i=1;i<nums.size();i++){

            if(curr_sum<0) curr_sum = 0;

            curr_sum += nums[i];

            if(curr_sum>_max) _max = curr_sum;

        }


        return _max;

    }
};
