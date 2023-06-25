class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int a;
        map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>=2)
            {
                a=i.first;
                break;
            }
        }
        return a;
    }
};