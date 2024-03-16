class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int zeros = 0, ones = 0, max_len = 0;
        mp[0] = -1;
        for (int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0) zeros++;
            else ones++;
            int diff = zeros - ones;
            if(mp.find(diff)!=mp.end())
            {
                max_len = max(max_len, i-mp[diff]);
            } 
            else 
            {
                mp[diff]=i;
            }
        }
        return max_len;
    }
};