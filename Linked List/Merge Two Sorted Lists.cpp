// Problem Link: https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head = NULL;
        ListNode* mainhead;
        ListNode* currentNode1=list1;
        ListNode* currentNode2=list2;

        if(list1 == NULL and list2 == NULL) return head;

        while(currentNode1 != NULL and currentNode2 != NULL){
            if(currentNode1->val < currentNode2->val){
                ListNode* newNode = new ListNode(currentNode1->val);
                if(head == NULL){
                    head = newNode;
                    mainhead = head;
                }else{
                    head->next = newNode;
                    head = newNode;
                }
                
                currentNode1 = currentNode1->next;
            }
            else{
                ListNode* newNode = new ListNode(currentNode2->val);
                if(head == NULL){
                    head = newNode;
                    mainhead = head;
                }else{
                    head->next = newNode;
                    head = newNode;
                }
                currentNode2 = currentNode2->next;
            }
            
        }

        if(currentNode1 != NULL and currentNode2 == NULL){
            while(currentNode1 != NULL){
                ListNode* newNode = new ListNode(currentNode1->val);
                if(head == NULL){
                    head = newNode;
                    mainhead = head;
                }else{
                    head->next = newNode;
                    head = newNode;
                }
                
                currentNode1 = currentNode1->next;
            }
        }

        if(currentNode2 != NULL and currentNode1 == NULL){
            while(currentNode2 != NULL){
                ListNode* newNode = new ListNode(currentNode2->val);
                if(head == NULL){
                    head = newNode;
                    mainhead = head;
                }else{
                    head->next = newNode;
                    head = newNode;
                }
                
                currentNode2 = currentNode2->next;
            }
        }

        return mainhead;

    }
};