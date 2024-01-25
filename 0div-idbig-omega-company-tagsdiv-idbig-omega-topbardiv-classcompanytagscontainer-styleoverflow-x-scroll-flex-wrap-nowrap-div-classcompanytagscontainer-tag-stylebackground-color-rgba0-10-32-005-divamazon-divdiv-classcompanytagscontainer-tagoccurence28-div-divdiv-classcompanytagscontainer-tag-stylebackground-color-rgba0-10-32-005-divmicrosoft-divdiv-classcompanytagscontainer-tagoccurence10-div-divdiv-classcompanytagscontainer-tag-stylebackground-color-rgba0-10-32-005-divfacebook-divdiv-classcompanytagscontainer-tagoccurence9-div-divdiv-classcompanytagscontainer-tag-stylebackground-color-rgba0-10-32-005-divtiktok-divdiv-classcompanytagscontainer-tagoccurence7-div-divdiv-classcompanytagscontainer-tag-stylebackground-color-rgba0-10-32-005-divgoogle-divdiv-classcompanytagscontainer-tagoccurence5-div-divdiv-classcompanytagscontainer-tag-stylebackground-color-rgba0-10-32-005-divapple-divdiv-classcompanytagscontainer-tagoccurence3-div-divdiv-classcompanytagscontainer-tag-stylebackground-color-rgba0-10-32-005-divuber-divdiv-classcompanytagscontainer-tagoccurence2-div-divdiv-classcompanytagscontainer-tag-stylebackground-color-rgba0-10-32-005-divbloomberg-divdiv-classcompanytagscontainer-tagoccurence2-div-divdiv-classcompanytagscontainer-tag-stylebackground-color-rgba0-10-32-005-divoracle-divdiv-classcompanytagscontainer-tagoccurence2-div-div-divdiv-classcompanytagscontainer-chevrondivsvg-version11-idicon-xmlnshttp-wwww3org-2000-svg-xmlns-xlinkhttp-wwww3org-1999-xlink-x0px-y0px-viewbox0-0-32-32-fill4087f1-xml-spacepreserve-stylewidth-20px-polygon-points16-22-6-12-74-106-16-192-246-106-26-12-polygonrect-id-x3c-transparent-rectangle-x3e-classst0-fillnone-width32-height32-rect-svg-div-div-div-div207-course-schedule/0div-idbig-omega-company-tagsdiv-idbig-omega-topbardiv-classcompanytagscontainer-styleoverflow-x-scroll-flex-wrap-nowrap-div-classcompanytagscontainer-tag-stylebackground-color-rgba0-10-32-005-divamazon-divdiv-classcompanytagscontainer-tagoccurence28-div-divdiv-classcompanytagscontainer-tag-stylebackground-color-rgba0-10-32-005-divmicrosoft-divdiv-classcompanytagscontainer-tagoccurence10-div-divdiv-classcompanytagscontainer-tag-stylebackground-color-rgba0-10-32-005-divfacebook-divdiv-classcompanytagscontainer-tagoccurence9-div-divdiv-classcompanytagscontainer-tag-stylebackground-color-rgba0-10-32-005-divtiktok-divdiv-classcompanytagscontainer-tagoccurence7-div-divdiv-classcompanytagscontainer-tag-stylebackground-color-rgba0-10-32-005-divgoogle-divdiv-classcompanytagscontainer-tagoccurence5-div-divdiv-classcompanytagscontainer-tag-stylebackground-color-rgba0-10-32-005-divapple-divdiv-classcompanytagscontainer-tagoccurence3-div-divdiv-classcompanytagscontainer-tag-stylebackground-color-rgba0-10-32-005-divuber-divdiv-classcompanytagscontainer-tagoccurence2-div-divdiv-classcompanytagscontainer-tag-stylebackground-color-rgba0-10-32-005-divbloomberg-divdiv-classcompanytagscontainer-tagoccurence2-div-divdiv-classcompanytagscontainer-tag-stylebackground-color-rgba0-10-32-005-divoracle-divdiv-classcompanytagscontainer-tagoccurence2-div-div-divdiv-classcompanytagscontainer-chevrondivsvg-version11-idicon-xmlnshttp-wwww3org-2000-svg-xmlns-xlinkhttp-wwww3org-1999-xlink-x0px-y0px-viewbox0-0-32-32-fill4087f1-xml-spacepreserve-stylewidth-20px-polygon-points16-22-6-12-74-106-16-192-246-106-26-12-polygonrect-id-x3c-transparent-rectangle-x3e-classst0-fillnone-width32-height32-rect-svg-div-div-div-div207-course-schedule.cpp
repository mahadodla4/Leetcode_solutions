class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prer) 
    {
        vector<int>adj[n];
        vector<int>in_deg(n,0);
        vector<int>res;
        queue<int>q;
        int i;
        for(auto i:prer)
        {
            adj[i[1]].push_back(i[0]);
        }
        for(auto i:adj)
        {
            for(auto j:i)
            {
                in_deg[j]++;
            }
        }
        for(i=0; i<n; i++)
        {
            if(in_deg[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int val=q.front();
            res.push_back(val);
            q.pop();
            for(auto i:adj[val])
            {
                if((--in_deg[i])==0)
                {
                    q.push(i);
                }
            }
        }
        if(res.size()==n)
        {
            return 1;
        }
        return 0;
    }
};