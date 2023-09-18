class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        int i,j,c=0;
        priority_queue<pair<int,int>>l;
        vector<int>m;
        vector<int>n;
        for(i=0; i<mat.size(); i++)
        {
            c=0;
            for(j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            l.push({c,i});
        }
        while(!l.empty())
        {
            m.push_back(l.top().second);
            l.pop();
        }
        reverse(m.begin(),m.end());
        for(i=0; i<k; i++)
        {
            n.push_back(m[i]);
        }
        return n;
    }
};