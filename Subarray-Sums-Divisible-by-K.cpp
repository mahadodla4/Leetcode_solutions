class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int i, res = 0, n = nums.size();
        int prefix = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;  
        for (i = 0; i < n; i++) {
            prefix += nums[i];
            int mod = prefix % k;
            if (mod < 0) mod += k;
            res += mp[mod];
            mp[mod]++;
        }
        return res;
    }
};


