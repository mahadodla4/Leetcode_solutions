class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int>mp;
        int i,n=size(nums),m=INT_MIN,ans=INT_MAX;
        for(i=0; i<n; i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        if(mp.size()==0)
        {
            return -1;
        }
        for(auto i:mp)
        {
            m=max(m,i.second);
        }
        vector<int>l;
        for(auto i:mp)
        {
            if(i.second==m)
            {
                l.push_back(i.first);
            }
        }
        sort(l.begin(),l.end());
        return l[0];
    }
};