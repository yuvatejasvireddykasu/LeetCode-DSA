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
    vector<int> ans;
    void rec(TreeNode* root,int ind){
        if(!root)
        return;

        if(ind==ans.size())
        ans.push_back(root->val);

        rec(root->right,ind+1);
        rec(root->left,ind+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        rec(root,0);
        return ans;
    }
};