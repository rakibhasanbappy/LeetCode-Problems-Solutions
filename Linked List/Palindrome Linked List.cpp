// Problem Link: https://leetcode.com/problems/palindrome-linked-list/

// My Solution:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* currentNode = head;

        string s = "";


        while(currentNode != NULL){
            s+=currentNode->val;
            currentNode = currentNode->next;
        }

        int flag = 0;

        int n = s.length();

        for(int i=0;i<n;i++){
            if(s[i] != s[n-i-1]){
                flag = 1;
                break;
            }

        }

        if(!flag) return true;
        return false;
    }
};