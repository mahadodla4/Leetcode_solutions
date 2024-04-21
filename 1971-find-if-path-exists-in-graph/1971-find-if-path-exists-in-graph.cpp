class Solution {
public:
    vector<int>adj[200005];
    int visited[2000005];
    bool dfs(int s,int d,vector<int>&visited)
    {
        if(s==d)
        {
            return true;
        }
        visited[s]=1;
        for(auto i:adj[s])
        {
            if(!visited[i])
            {
                if(dfs(i,d,visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        for(auto i:edges)
        {
            int u=i[0],v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>visited(n,0);
        return dfs(source,destination,visited);

    }
};