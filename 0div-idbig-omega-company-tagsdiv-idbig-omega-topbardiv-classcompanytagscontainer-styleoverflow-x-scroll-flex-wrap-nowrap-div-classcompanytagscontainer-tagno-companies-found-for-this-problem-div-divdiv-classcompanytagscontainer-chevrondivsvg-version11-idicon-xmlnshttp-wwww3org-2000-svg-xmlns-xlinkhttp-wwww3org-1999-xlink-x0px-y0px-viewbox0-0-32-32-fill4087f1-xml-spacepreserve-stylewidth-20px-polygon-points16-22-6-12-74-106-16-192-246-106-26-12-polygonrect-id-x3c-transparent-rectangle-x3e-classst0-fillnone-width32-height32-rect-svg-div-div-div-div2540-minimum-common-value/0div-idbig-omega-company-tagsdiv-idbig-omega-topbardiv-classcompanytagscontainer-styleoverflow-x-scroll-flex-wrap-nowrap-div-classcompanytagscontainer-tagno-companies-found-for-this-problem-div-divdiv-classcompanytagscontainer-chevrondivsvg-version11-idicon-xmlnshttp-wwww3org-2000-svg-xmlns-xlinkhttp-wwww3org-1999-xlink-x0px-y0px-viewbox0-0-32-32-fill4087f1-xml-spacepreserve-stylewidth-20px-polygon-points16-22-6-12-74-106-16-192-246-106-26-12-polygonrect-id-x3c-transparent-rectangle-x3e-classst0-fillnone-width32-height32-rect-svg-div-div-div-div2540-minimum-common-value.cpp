class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>res;
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto i:nums1)
        {
            mp1[i]++;
        }
        for(auto i:nums2)
        {
            mp2[i]++;
        }
        for(auto i:nums1)
        {
            if(mp2.find(i)!=mp2.end())
            {
                res.push_back(i);
            }
        }
        sort(res.begin(),res.end());
        if(res.size()==0) return -1;
        return res[0];
    }
};