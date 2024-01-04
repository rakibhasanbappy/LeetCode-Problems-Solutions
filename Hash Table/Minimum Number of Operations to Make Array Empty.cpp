// Problem Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty

// My Solution:
class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        unordered_map<int,int>numsCount;

        for(int i=0;i<nums.size();i++){
            numsCount[nums[i]]++;
        }

        int minOp = 0;

        for(auto i:numsCount){
            if(i.second%2 != 0 and i.second%3 != 0){
                int div = INT_MAX;
                for(int j=2;j<=i.second-2;j++){
                    if(j%3 == 0 and (i.second-j)%2==0){
                        div = min(div, (j/3 + (i.second-j)/2));
                    }
                }
                if(div!=INT_MAX) minOp+=div;
                else return -1;
            }
            else if(i.second%3 == 0) minOp += i.second/3;
            else{
                int divby2 = i.second/2;

                for(int j=3;j<=i.second-2;j++){
                    if(j%3 == 0 and (i.second-j)%2==0){
                        divby2 = min(divby2, (j/3 + (i.second-j)/2));
                    }
                }
                minOp += divby2;
            }
        }

        return minOp;

    }
};


// Another Nice Solution with intuition
// Intuition:
/*
Let cnt be the count of elements with a specific value.

We cannot make an array empty if there is an element with cnt == 1.

Otherwise, we can remove all elements with the same value in cnt / 3 operations, + 1 operation if there is a remainder (cnt % 3 > 0).

Why is that?

If the remainder is 2, we first delete 2 elements (1 operations)
then we delete remaining triplets (cnt / 3 operations)
If the remainder is 1 we first delete 4 elements (2 operations)
then, we delete remaining triplets ((cnt - 4) / 3 or cnt / 3 - 1 operations)
In both these cases, we need cnt / 3 + 1 operations.
*/

// Solution:
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); ++i) {
            m[nums[i]]++;
        }
        int ans = 0;
        for(auto it : m) {
            if(it.second == 1) {
                return -1;
            }
            if(it.second%3 == 0) {
                ans += it.second/3;
            } else {
                ans += it.second / 3 + 1;
            }
        }
        return ans;
    }
};


// Another beautiful intuition by Adnan Sabbir vai
/*
https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/solutions/4505578/easy-solution-o-n-explained-python-typescript-javascript/
*/