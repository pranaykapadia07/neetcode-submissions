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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return NULL;
        }
        swap(root->left, root->right);
        invertTree(root->left);
         invertTree(root->right);
         return root;
    }
};


/*Swap Subtrees (swap(root->left, root->right);):
It swaps the left pointer and right pointer of the current node (root). What used to be the left child is now the right child, and vice versa.

Recursive Step (invertTree(root->left); & invertTree(root->right);):
It recursively calls invertTree on the newly swapped left and right children to ensure that all subtrees further down the tree are also mirrored.

Return (return root;):
Finally, it returns the pointer to the current root node after its entire tree structure has been inverted*/
