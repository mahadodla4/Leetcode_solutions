class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int i,j,c=0;
        vector<int>l;
        for(i=0; i<grid.size(); i++)
        {
            for(j=0; j<size(grid[i]); j++)
            {
                l.push_back(grid[i][j]);
            }
        }
        for(auto i:l)
        {
            if(i<0)
            {
                c++;
            }
        }
        return c;
    }
};