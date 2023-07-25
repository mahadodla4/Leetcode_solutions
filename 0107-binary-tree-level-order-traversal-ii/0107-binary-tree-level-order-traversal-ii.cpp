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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>>res;
        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>l;
            int n=q.size();
            for(int i=1; i<=n; i++)
            {
                TreeNode* nodes=q.front();
                q.pop();
                l.push_back(nodes->val);
                if(nodes->left!=NULL)
                {
                    q.push(nodes->left);
                }
                if(nodes->right!=NULL)
                {
                    q.push(nodes->right);
                }
            }
            res.push_back(l);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};