// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/

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
        unordered_map<int, int>HashMap;

        if(head == NULL) return head;
        
        ListNode* currentNode = head;
        
        while(currentNode!=NULL){
            HashMap[currentNode->val]++;
            currentNode = currentNode->next;
        }

        currentNode = head;

        while(currentNode!=NULL){
            if(HashMap[currentNode->val]>1){
                if(head == currentNode){
                    head = currentNode->next;
                    currentNode = currentNode->next;
                }else currentNode = currentNode->next;
            }else{
                currentNode = currentNode->next;
            }
        }

        if(head == NULL) return head;
        
        currentNode = head;

        while(currentNode->next!=NULL){
            if(HashMap[currentNode->next->val]>1){
                currentNode->next = currentNode->next->next;
            }else{
                currentNode = currentNode->next;
            }
        }

        return head;

    }
};


// Another solution of others:
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* ans=dummy,*temp=head;
        while(temp){
            bool flag=false;
            while(temp->next and temp->val==temp->next->val){
                flag=true;
                temp=temp->next;
            }
            if(flag) ans->next=temp->next;
            else {
                ans->next=temp;
                ans=ans->next;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};