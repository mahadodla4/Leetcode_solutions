class Solution {
public:
    void dfs(int i,int j,int n,int m,int &c,vector<vector<int>>&grid)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0)
        {
            c++;
            return;
        }
        if(grid[i][j]==2)
        {
            return;
        }
        grid[i][j]=2;
        dfs(i+1,j,n,m,c,grid);
        dfs(i,j+1,n,m,c,grid);
        dfs(i-1,j,n,m,c,grid);
        dfs(i,j-1,n,m,c,grid);
    }
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int i,j,n=grid.size(),m=grid[0].size(),c=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,n,m,c,grid);
                    break;
                }
            }
        }
        return c;
    }
};