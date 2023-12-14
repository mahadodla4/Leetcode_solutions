class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid)
    {
        int i,j,r=grid.size(),c=grid[0].size();
        vector<int>onesrow(r,0);
        vector<int>zerosrow(r,0);
        vector<int>onescol(c,0);
        vector<int>zeroscol(c,0);
        vector<vector<int>>res;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(grid[i][j]==1)
                {
                    onesrow[i]+=1;
                    onescol[j]+=1;
                }
                else
                {
                    zerosrow[i]+=1;
                    zeroscol[j]+=1;
                }
            }
        }
        for(i=0; i<r; i++)
        {
            vector<int>l;
            for(j=0; j<c; j++)
            {
                int diff=onesrow[i]+onescol[j]-zerosrow[i]-zeroscol[j];
                l.push_back(diff);
            }
            res.push_back(l);
        }
        return res;
    }
};