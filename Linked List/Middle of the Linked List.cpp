// Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/description/

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
    ListNode* middleNode(ListNode* head) {

        ListNode* currentNode = head;

        int cnt = 0;

        while(currentNode != NULL){
            cnt++;
            currentNode = currentNode->next;
        }

        currentNode = head;

        int middle = cnt/2 + 1;
        cnt = 0;

        while(currentNode != NULL){
            cnt++;
            if(cnt == middle){
                break;
            }
            currentNode = currentNode->next;
        }

        return currentNode;
        
    }
};