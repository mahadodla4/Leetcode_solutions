/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>res;
    void DFS(Node* node)
    {
        for(Node* i:node->children)
        {
            DFS(i);
        }
        res.push_back(node->val);
    }
    vector<int> postorder(Node* root) 
    {
        if(root==NULL)
        {
            return {};
        }
        DFS(root);
        return res;
    }
};