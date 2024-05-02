class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        vector<int>l;
        map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            int a=i.first;
            if(a>0)
            {
                if(mp.find((a*-1))!=mp.end())
                {
                    l.push_back(a);
                }
            }
        }
        sort(l.rbegin(),l.rend());
        if(l.size()==0)
        {
            return -1;
        }
        return l[0];
    }
};