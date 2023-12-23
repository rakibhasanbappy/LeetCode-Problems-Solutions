// Problem Link: https://leetcode.com/problems/max-consecutive-ones/

// My Solution:

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int c=0;

        int max_ = 0;

        for(int i=0;i<nums.size();i++){

            if(nums[i] == 1){
                c++;
                if(c>max_) max_ = c;
            }
            else c = 0;


        }

        return max_;

    }
};
