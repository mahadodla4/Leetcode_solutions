class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>>pascal;
        pascal.push_back({1});
        int size=1;
        for(int i=1; i<n; i++)
        {
            vector<int>l;
            l.push_back(1);
            for(int j=1; j<size; j++)
            {
                int val=pascal[i-1][j-1]+pascal[i-1][j];
                l.push_back(val);
            }
            l.push_back(1);
            size=l.size();
            pascal.push_back(l);
        }
        return pascal;
    }
};