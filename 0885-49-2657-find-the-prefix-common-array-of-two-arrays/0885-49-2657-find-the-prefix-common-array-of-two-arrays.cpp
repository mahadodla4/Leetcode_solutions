class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int i,n=a.size();
        vector<int>res;
        map<int,int>mp;
        for(i=0; i<n; i++) {
            mp[a[i]]++;
            mp[b[i]]++;
            int c=0;
            for(auto i:mp) {
                if(i.second>1) {
                    c++;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};
