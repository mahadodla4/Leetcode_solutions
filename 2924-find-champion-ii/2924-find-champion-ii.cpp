class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        int m=n,m2=n,c=0;
        vector<int>adj[n+1];
        for(auto i:edges) {
            adj[i[0]].push_back(i[1]);
        }
        vector<int>in_deg(n,0),in_deg2(n,0);
        for(auto i:adj) {
            for(auto j:i) {
                in_deg[j]++;
                in_deg2[j]++;
            }
        }
        for(int j=0; j<m; j++) {
            if(in_deg[j]==0) {
                c++;
            }
        }
        if(c==1) {
            for(int k=0; k<m2; k++) {
                if(in_deg2[k]==0) {
                    return k;
                }
            }
        }
        return -1;
    }
};