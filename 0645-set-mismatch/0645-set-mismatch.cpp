class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int twice;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second==2)
            {
                twice=i.first;
                break;
            }
        }
        set<int>s;
        int sum=0;
        for(auto i:nums)
        {
            s.insert(i);
        }
        for(auto i:s)
        {
            sum+=i;
        }
        int n=size(nums);
        int m=(n*(n+1))/2;
        return {twice,(m-sum)};
    }
};