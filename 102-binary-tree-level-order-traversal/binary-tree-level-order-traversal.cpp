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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int x=q.size();
            vector<int> temp;
            for(int i=0;i<x;i++){
               TreeNode* front = q.front();
               temp.push_back(front->val);
               if(front->left)
               q.push(front->left);

               if(front->right)
               q.push(front->right);

               q.pop();

            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};