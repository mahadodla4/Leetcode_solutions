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
    void inorder(TreeNode* root,vector<int>&l)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,l);
        l.push_back(root->val);
        inorder(root->right,l);
    }
    vector<int> findMode(TreeNode* root) 
    {
        vector<int>l;
        map<int,int>mp;
        vector<int>vec;
        inorder(root,l);
        for(auto i:l)
        {
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp)
        {
            pq.push(make_pair(i.second,i.first));
        }
        int a=pq.top().first;
        while(!pq.empty())
        {
            if(pq.top().first==a)
            {
                vec.push_back(pq.top().second);
            }
            pq.pop();
        }
        return vec;
    }
};