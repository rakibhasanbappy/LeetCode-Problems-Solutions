// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// My Solution:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        int cnt=0;

        for(int i=1;i<n;i++){

            if(nums[cnt]!=nums[i]){
                nums[++cnt] = nums[i];
            }

        }

        return cnt+1;

    }
};
