class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int i,j,n=mat.size(),m=mat[0].size(),count=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(mat[i][j]==1)
                {
                    int colsum=0,rowsum=0;
                    for(int r=0; r<m; r++)
                    {
                        rowsum+=mat[i][r];
                    }
                    for(int c=0; c<n; c++)
                    {
                        colsum+=mat[c][j];
                    }
                    if(colsum==1 and rowsum==1)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};