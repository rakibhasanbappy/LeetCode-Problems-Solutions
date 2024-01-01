// Problem Link: https://leetcode.com/problems/maximum-units-on-a-truck/description/

// My Solution:
class Solution {
public:

    static bool comp(vector<int> &a, vector<int> &b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(),boxTypes.end(),comp);

        int sum = 0;

        for(int i=0;i<boxTypes.size();i++){
            if(truckSize == 0) break;
            if(boxTypes[i][0]<=truckSize){
                sum += (boxTypes[i][0]*boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }else{
                sum += (boxTypes[i][1]*truckSize);
                truckSize = 0;
            }
        }
        return sum;
    }
};