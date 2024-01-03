// Problem Link: https://leetcode.com/problems/reverse-linked-list-ii/description/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head == NULL or head->next == NULL) return head;

        if(left == right) return head;

        ListNode *prev=nullptr, *currentNode = head, *lastNode;

        stack<ListNode*>nodeStack;

        if(left == 1) prev = nullptr;

        int nodeCount = 0;


        while(currentNode!=NULL){
            nodeCount++;
            if(nodeCount>=left and nodeCount<=right){
                nodeStack.push(currentNode);
            }
            if(nodeCount+1 == left){
                prev = currentNode;
            }
            if(nodeCount == right){
                lastNode = currentNode->next;
                break;
            }
            currentNode = currentNode->next;
        }

        if(prev == nullptr){
            head = nodeStack.top();
            nodeStack.pop();
            currentNode = head;
        }else{
            prev->next = nodeStack.top();
            nodeStack.pop();
            currentNode = prev->next;
        }

        

        
        while(!nodeStack.empty()){
            currentNode->next = nodeStack.top();
            nodeStack.pop();
            currentNode = currentNode->next;
        }

        currentNode->next = lastNode;

        return head; 

    }
};