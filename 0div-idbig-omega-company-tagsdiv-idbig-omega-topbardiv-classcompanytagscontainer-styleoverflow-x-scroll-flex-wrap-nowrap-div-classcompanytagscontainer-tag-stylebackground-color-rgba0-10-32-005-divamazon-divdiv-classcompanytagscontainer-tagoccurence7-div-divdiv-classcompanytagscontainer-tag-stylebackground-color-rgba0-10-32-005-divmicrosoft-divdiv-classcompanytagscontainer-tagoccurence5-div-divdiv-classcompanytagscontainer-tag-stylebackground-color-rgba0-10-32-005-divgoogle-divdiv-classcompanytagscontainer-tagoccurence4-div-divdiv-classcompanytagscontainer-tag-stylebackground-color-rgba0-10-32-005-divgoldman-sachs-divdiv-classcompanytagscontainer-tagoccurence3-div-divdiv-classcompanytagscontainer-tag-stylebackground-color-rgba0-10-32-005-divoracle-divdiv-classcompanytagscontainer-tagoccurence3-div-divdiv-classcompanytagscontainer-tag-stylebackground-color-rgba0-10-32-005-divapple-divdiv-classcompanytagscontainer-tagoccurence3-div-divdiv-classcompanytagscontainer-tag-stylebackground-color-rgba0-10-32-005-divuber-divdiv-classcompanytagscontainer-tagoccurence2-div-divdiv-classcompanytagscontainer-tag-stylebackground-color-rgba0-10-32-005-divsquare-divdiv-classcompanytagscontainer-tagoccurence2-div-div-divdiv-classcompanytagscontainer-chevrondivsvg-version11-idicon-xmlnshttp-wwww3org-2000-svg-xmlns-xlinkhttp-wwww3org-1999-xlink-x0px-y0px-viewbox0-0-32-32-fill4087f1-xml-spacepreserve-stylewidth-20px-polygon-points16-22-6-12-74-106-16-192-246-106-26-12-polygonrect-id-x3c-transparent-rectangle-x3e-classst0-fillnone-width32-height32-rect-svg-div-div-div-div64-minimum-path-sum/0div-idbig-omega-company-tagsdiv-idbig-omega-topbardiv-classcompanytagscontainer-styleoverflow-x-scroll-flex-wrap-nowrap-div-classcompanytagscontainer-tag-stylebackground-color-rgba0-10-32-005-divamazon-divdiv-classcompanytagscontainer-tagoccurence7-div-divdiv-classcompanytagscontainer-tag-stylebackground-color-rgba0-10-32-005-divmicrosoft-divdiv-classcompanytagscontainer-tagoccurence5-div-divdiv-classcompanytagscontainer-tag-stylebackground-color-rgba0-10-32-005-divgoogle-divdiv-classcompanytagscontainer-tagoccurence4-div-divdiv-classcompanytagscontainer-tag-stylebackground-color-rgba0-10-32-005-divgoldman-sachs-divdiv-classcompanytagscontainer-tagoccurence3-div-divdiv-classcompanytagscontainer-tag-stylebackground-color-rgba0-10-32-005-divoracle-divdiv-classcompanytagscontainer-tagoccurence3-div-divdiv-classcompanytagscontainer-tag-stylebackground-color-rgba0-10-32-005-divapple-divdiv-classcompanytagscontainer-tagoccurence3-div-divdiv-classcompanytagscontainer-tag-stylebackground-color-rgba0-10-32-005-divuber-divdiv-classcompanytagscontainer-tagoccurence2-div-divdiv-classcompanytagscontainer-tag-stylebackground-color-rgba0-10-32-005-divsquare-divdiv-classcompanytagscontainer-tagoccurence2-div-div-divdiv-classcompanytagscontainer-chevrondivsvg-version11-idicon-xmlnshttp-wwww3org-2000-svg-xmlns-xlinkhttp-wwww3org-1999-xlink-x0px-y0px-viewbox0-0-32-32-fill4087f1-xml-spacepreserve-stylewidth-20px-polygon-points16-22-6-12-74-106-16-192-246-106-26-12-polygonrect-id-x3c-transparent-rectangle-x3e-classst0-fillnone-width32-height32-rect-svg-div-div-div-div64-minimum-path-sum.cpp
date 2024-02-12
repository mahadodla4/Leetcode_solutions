class Solution {
public:
    int dp[200][200];
    int spoiler(int i,int j,int n,int m,vector<vector<int>>&grid,vector<vector<int>>&visited)
    {
        if(i==n-1 and j==m-1)
        {
            return grid[i][j];
        }
        if(i>=n or j>=m)
        {
            return 10000000;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int down,right,ans=INT_MAX;
        visited[i][j]=1;
        down=grid[i][j]+spoiler(i+1,j,n,m,grid,visited);
        right=grid[i][j]+spoiler(i,j+1,n,m,grid,visited);
        ans=min(down,right);
        return dp[i][j]=ans;
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        memset(dp,-1,sizeof(dp));
        return spoiler(0,0,n,m,grid,visited);
    }
};