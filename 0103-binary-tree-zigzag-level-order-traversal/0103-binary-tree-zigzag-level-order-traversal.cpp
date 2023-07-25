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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
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
            c++;
            if(c%2==0)
            {
                reverse(l.begin(),l.end());
            }
            ans.push_back(l);
        }
        return ans;
    }
};