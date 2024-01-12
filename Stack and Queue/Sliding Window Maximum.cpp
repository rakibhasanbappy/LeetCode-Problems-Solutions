// Problem Link: https://leetcode.com/problems/sliding-window-maximum/description/

// My Solution is not accepted. It need to make more optimize. My solution passed 46 out of 51 testcase.

// My Solution:
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>max;
        deque<int>window;

        int max_ = INT_MIN;

        for(int i=0;i<k;i++){
            window.push_back(nums[i]);
            if(nums[i]>max_) max_ = nums[i];
        }

        max.push_back(max_);

        for(int i=k;i<nums.size();i++){
            int rmv = window.front();
            window.pop_front();
            window.push_back(nums[i]);
            if(rmv != max_ and max_ >= nums[i]) max.push_back(max_);
            else{
                max_ = *max_element(window.begin(), window.end());
                max.push_back(max_);
            }
        }

        return max;

    }
};