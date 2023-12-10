class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int i,j,n=matrix.size();
        vector<vector<int>>mat(matrix[0].size(),vector<int>(n));
        for(i=0; i<n; i++)
        {
            for(j=0; j<matrix[i].size(); j++)
            {
                mat[j][i]=matrix[i][j];
            }
        }
        return mat;
    }
};