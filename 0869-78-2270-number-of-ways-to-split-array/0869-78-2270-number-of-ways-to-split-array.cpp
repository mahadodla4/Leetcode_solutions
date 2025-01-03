class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size(),i;
        long long int pref[n];
        pref[0]=nums[0];
        for(i=1; i<n; i++) {
            pref[i]=pref[i-1]+nums[i];
        }
        long long int val=pref[n-1];
        int c=0;
        for(i=0; i<n-1; i++) {
            long long int ele=val-pref[i];
            if(pref[i] >= ele) {
                c++;
            }
        }
        return c;
    }
};


