// Problem Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/

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
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL) return head;

        if(head->next == NULL) return NULL;

        int node_count = 0;

        ListNode* currentNode = head;

        while(currentNode != NULL){
            node_count++;
            currentNode = currentNode->next;
        }
        
        int middle = node_count/2;

        currentNode = head;
        node_count = 0;

        while(currentNode!=NULL){
            if(node_count+1 == middle){
                ListNode* middleNode = currentNode->next;
                currentNode->next = currentNode->next->next;
                delete(middleNode);
                break;
            }else{
                node_count++;
                currentNode = currentNode->next;
            }
        }

        return head;
        
    }
};