class Solution {
public:
    int largest_ele(vector<vector<int>>& grid,int l,int m)
    {
        int maxi=0;
        for(int i=l; i<l+3; i++)
        {
            for(int j=m; j<m+3; j++)
            {
                maxi=max(maxi,grid[i][j]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int i,j,n=grid.size();
        vector<vector<int>>res(n-2,vector<int>(n-2));
        for(i=0; i<n-2; i++)
        {
            for(j=0; j<n-2; j++)
            {
                res[i][j]=largest_ele(grid,i,j);
            }
        }
        return res;
    }
};