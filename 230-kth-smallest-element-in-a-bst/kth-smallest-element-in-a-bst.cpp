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
    int ans=-1;
    int i=0;
    int size;
    void inord(TreeNode* root){
       if(!root)
       return;
       
       
       inord(root->left);
       i++;
       if(i==size){
        ans=root->val;
        return;
       }
       inord(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        size=k;
        inord(root);
        return ans;
    }
};