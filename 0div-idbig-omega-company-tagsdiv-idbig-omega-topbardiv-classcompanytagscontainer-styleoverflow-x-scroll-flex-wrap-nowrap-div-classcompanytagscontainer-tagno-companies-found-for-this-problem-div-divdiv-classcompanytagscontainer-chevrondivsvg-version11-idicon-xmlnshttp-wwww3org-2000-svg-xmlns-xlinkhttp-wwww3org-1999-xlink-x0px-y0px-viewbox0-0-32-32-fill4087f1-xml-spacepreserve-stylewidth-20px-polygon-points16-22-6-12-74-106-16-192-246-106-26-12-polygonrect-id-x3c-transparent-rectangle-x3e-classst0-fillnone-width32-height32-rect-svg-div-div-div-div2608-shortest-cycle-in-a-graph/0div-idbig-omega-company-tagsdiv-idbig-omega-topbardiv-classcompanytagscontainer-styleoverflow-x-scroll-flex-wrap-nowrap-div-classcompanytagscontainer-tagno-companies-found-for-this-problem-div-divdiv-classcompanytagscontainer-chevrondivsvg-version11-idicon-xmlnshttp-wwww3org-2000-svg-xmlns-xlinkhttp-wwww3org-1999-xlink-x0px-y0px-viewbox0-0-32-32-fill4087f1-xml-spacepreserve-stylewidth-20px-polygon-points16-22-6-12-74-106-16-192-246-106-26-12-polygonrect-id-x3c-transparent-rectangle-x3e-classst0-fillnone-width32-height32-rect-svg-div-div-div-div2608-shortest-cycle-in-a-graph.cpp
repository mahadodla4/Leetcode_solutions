class Solution {
public:
    int BFS(int node,vector<int>adj[],int n)
    {
        vector<bool>visited(n+1,false);
        vector<int>dist(n+1,INT_MAX);
        queue<pair<int,int>>q;
        visited[node]=true;
        dist[node]=0;
        q.push({node,-1});
        int res=INT_MAX;
        while(!q.empty())
        {
            node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto i:adj[node])
            {
                if(!visited[i])
                {
                    q.push({i,node});
                    visited[i]=true;
                    dist[i]=dist[node]+1;
                }
                else
                {
                    if(i!=parent)
                    {
                        res=min(res,dist[i]+dist[node]+1);
                    }
                }
            }
        }
        return res;
    }
    int findShortestCycle(int n, vector<vector<int>>& edges) 
    {
        vector<int>adj[n+1];
        for(auto i:edges)
        {
            int u=i[0],v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            ans=min(ans,BFS(i,adj,n));
            cout<<ans<<" ";
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};