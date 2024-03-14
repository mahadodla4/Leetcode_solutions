class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int i,c=0,sum=0;
        map<int,int>mp;
        mp[0]=1;
        for(i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            c+=mp[sum-goal];
            mp[sum]++;
        }
        return c;
    }
};