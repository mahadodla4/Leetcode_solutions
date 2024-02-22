class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        map<int,int>in_deg;
        map<int,int>out_deg;
        for(auto i:trust)
        {
            in_deg[i[1]]++;
            out_deg[i[0]]++;
        }
        for(int i=1; i<=n; i++)
        {
            if(in_deg[i]==n-1 and out_deg[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};