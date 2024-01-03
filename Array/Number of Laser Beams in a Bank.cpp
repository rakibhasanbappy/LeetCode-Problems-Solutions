// Problem Link: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

// My Soultion:
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int n = bank.size();

        if(n==0 || n==1) return 0;

        int laserBeam = 0;

        int flag = 0;

        int lastRow = 0;

        for(int i=0;i<n;i++){
            char c = '1';
            int device = count(bank[i].begin(), bank[i].end(), c);
            if(device>0){
                if(flag==0){
                    lastRow = device;
                    flag++;
                }else{
                    laserBeam += (device*lastRow);
                    lastRow = device;
                    flag++;
                }
            }
        }

        return laserBeam;
    }
};