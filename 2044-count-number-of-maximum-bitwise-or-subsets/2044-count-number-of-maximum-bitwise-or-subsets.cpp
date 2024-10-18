class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int i,j,n=nums.size(),maxi=0;
        int p=1<<n;
        unordered_map<int,int>mp;
        for(i=0; i<p; i++) {
            int ans=0;
            for(j=0; j<n; j++) {
                if(i&(1<<j)) {
                    ans|=nums[j];
                }
            }
            mp[ans]++;
            maxi=max(maxi,ans);
        }
        return mp[maxi];
    }
};