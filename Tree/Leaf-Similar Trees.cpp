// Problem Link: https://leetcode.com/problems/leaf-similar-trees/
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
private:
    vector<int>leafs1;
    vector<int>leafs2;
public:

    void listLeaf(TreeNode* node, vector<int>& leaf){

        TreeNode* currentNode = node;

        if(currentNode == NULL) return;

        if(currentNode->left == NULL and currentNode->right == NULL) leaf.push_back(currentNode->val);

        listLeaf(currentNode->left, leaf);
        
        listLeaf(currentNode->right, leaf);

        return;

    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        listLeaf(root1, leafs1);
        listLeaf(root2, leafs2);

        return leafs1 == leafs2;
    }
};