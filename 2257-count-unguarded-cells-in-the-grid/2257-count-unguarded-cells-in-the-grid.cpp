class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>>mat(m,vector<char>(n));
        for(auto i:guards) {
            mat[i[0]][i[1]]='g';
        }
        for(auto i:walls) {
            mat[i[0]][i[1]]='w';
        }
        for(auto i:guards) {
            int r=i[0],c=i[1];
            for(int j=r+1; j<m; j++) {
                if(mat[j][c]=='g' or mat[j][c]=='w') {
                    break;
                }
                mat[j][c]='1';
            }
            for(int j=r-1; j>=0; j--) {
                if(mat[j][c]=='g' or mat[j][c]=='w') {
                    break;
                }
                mat[j][c]='1';
            }
            for(int j=c+1; j<n; j++) {
                if(mat[r][j]=='g' or mat[r][j]=='w') {
                    break;
                }
                mat[r][j]='1';
            }
            for(int j=c-1; j>=0; j--) {
                if(mat[r][j]=='g' or mat[r][j]=='w') {
                    break;
                }
                mat[r][j]='1';
            }
        }
        int c=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(mat[i][j]!='g' and mat[i][j]!='w' and mat[i][j]!='1') {
                    c++;
                }
            }
        }
        return c;
    }
};

