// Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *currentNodeA = headA;
        ListNode *currentNodeB = headB;

        while(currentNodeA!= NULL or currentNodeB!=NULL){

            if(currentNodeA == currentNodeB) return currentNodeA;
            
            if(currentNodeA == NULL){
                currentNodeA = headA;
                currentNodeB = currentNodeB->next;
            }
            else if(currentNodeB == NULL){
                currentNodeB = headB;
                currentNodeA = currentNodeA->next;
            }
            else{
                currentNodeA = currentNodeA->next;
                currentNodeB = currentNodeB->next;
            }


        }

        return NULL;

    }
};