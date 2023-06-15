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
    int maxLevelSum(TreeNode* root) 
    {
        int i,maxi=INT_MIN,sum=0,c=0,ans=-1;
        if(!root) return 0;
        vector<int>vec;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            c++;
            sum=0;
            int i,n=q.size();
            for(i=0; i<n; i++)
            {
                TreeNode* nodes=q.front();
                sum+=nodes->val;
                if(nodes->left!=NULL)
                {
                    q.push(nodes->left);
                }
                if(nodes->right!=NULL)
                {
                    q.push(nodes->right);
                }
                q.pop();
            }
            if(maxi<sum)
            {
                maxi=sum;
                ans=c;
            }
        }
        return ans;
    }
};