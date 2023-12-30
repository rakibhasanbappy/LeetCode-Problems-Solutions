// Problem Link: https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* currentNode = head;
        ListNode* prev = NULL;

        while(currentNode!=NULL){
            if(currentNode->next == NULL){
                ListNode *add = currentNode->next;
                currentNode->next = prev;
                head = currentNode;
                currentNode = add;

            }else{
                ListNode* add = currentNode->next;
                currentNode->next = prev;
                prev = currentNode;
                currentNode = add;
            }
        }
        return head;
    }
};