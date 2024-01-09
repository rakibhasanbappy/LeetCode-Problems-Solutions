// Problem Link: https://leetcode.com/problems/range-sum-of-bst/
// My Solution:
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int sum = 0;

    void helper(TreeNode* root, int low, int high){
        
        TreeNode* currentNode = root;

        if(currentNode == NULL) return;

        if(currentNode->val>=low and currentNode->val<=high){
            sum += currentNode->val;
        }

        helper(currentNode->left, low, high);

        helper(currentNode->right, low, high);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        helper(root, low, high);

        return sum;
    }
};