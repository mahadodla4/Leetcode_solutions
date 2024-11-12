class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<pair<int,int>>res;
        vector<int>ans(queries.size(),0);
        int maxib=0;
        for(auto i:items) {
            maxib=max(maxib,i[1]);
            res.push_back({i[0],maxib});
        }
        int i,j=0,n=res.size();
        for(i=0; i<queries.size(); i++) {
            int l=0,r=n-1;
            while(l<=r) {
                int mid=(l+r)/2;
                if(res[mid].first <= queries[i]) {
                    l=mid+1;
                } 
                else {
                    r=mid-1;
                }
            }
            if(r>=0) {
                ans[i] = res[r].second;
            }
        }
        return ans;
    }
};