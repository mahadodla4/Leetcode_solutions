class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector<pair<int,int>>p;
        int i,j,n=nums.size();
        for(i=0; i<n-1; i+=2)
        {
            p.push_back(make_pair(nums[i],nums[i+1]));
        }
        vector<int>m;
        for(auto i:p)
        {
            for(j=0; j<i.first; j++)
            {
                m.push_back(i.second);
            }
        }
        return m;
    }
};