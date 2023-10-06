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
        
        if (root == NULL) 
            return root;
        
        if (root->left != NULL || root->right != NULL) {
            TreeNode* temp;
            // cout << root->left->val << "   " << root->right->val << endl;
            temp = root->left;
            root->left = root->right;
            root->right = temp;
            // cout << root->left->val << "   " << root->right->val << endl;
        }
        
        // swap(root->left, root->right);
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
 };