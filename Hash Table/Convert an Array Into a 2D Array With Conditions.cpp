// Problem Link: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/

// My Solution:
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>>ans;

        unordered_map<int,int>freq_cnt;

        for(int i=0;i<nums.size();i++){
            freq_cnt[nums[i]]++;
        }

        while(true){

            int flag = 1;
            vector<int>sub_ans;

            for(auto i:freq_cnt){
                if(i.second > 0){
                    sub_ans.push_back(i.first);
                    freq_cnt[i.first]--;
                    flag = 0;
                }
            }

            if(flag) break;
            ans.push_back(sub_ans);

        }

        return ans;
    }
};