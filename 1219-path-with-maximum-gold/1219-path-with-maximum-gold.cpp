class Solution {
public:
    int spoiler(int i,int j,int m,int n,vector<vector<int>>&grid)
    {
        if(i>=m || j>=n || i<0 || j<0 || grid[i][j]==0)
        {
            return 0;
        }
        int sum=grid[i][j];
        grid[i][j]=0;

        int up=spoiler(i-1,j,m,n,grid);
        int down=spoiler(i+1,j,m,n,grid);
        int right=spoiler(i,j+1,m,n,grid);
        int left=spoiler(i,j-1,m,n,grid);

        grid[i][j]=sum;
        return sum+max({up,down,left,right});
    }
    int getMaximumGold(vector<vector<int>>& grid) 
    {
        int maxi=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]>0)
                {
                    maxi=max(maxi,spoiler(i,j,m,n,grid));
                }
            }
        }
        return maxi;
    }
};