class Solution {
public:
    void flip_row(vector<vector<int>>&grid,int ind)
    {
        for(int i=0; i<grid[0].size(); i++)
        {
            if(grid[ind][i]==0)
            {
                grid[ind][i]=1;
            }
            else
            {
                grid[ind][i]=0;
            }
        }
    }
    void flip_col(vector<vector<int>>&grid,int ind)
    {
        for(int i=0; i<grid.size(); i++)
        {
            if(grid[i][ind]==0)
            {
                grid[i][ind]=1;
            }
            else
            {
                grid[i][ind]=0;
            }
        }
    }
    int matrixScore(vector<vector<int>>& grid) 
    {
        int r=grid.size(),c=grid[0].size(),i,j;
        for(i=0; i<r; i++)
        {
            if(grid[i][0]==0)
            {
                flip_row(grid,i);
            }
        }
        for(j=0; j<c; j++)
        {
            int zeros=0,ones=0;
            for(i=0; i<r; i++)
            {
                if(grid[i][j]==0) zeros++;
                else ones++;
            }
            if(ones<zeros)
            {
                flip_col(grid,j);
            }
        }
        int result=0;
        for(i=0; i<r; i++)
        {
            int ans=0,k=0;
            for(j=c-1; j>=0; j--)
            {
                ans+=(grid[i][j]*pow(2,k));
                k++;
            }
            //cout<<ans;
            result+=ans;
        }
        return result;
    }
};