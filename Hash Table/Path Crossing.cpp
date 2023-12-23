// Problem Link: https://leetcode.com/problems/path-crossing/description/

// My Solution
class Solution {
public:
    bool isPathCrossing(string path) {

        map<pair<int,int>, int>mp;

        int x=0, y=0;

        mp[{x, y}]++;

        for(int i=0;i<path.length();i++){

            if(path[i] == 'N') y++;
            else if(path[i] == 'E') x++;
            else if(path[i] == 'S') y--;
            else x--;

            if(mp.count({x,y}) > 0) return true;

            mp[{x,y}]++;

        }

        return false;

    }
};
