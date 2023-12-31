// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL or head->next == NULL) return head;

        ListNode* currentNode  = head;
        ListNode* nextNode = head->next;

        while(nextNode != NULL){

            if(currentNode->val == nextNode->val){
                currentNode->next = nextNode->next;

                nextNode = nextNode->next;
            }
            else{
                currentNode = currentNode->next;
                nextNode = nextNode->next;
            }


        }
        return head;

    }
};