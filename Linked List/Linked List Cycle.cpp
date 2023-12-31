// Problem Link: https://leetcode.com/problems/linked-list-cycle/description/

// My Solution:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head == NULL) return false;
        
        unordered_map<ListNode*, int>cnt;

        ListNode *currentNode = head;

        while(currentNode != NULL){

            cnt[currentNode]++;

            if(cnt[currentNode]>1) return true;

            currentNode = currentNode->next;
        }

        return false;

    }
};