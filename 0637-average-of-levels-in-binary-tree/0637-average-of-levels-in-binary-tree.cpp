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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        if(root==NULL)
        {
            return {};
        }
        vector<double>m;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>l;
            int n=q.size();
            long long int sum=0;
            for(int i=0; i<n; i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                l.push_back(cur->val);
                if(cur->left!=NULL)
                {
                    q.push(cur->left);
                }
                if(cur->right!=NULL)
                {
                    q.push(cur->right);
                }
            }
            for(auto i:l)
            {
                sum+=i;
            }
            double avg=sum/(double)l.size();
            m.push_back(avg);
        }
        return m;
    }
};