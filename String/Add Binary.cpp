// Problem Link: https://leetcode.com/problems/add-binary/

// My Solution:

class Solution {
public:
    string addBinary(string a, string b) {

        string res;

        int lena = a.length()-1;
        int lenb = b.length()-1;

        int carry = 0;

        while(lena>=0 || lenb>=0){
            int sum = carry;
            if(lena>=0) sum += a[lena--] - '0';
            if(lenb>=0) sum += b[lenb--] - '0';

            carry = sum>1 ? 1:0;

            res += to_string(sum%2);
        }

        if(carry) res+=to_string(carry);

        reverse(res.begin(),res.end());

        return res;

    }
};
