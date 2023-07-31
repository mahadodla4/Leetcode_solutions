class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        vector<int>l;
        vector<int>m;
        vector<int>ans;
        int i=0,j=0,k=0,n=nums.size();
        for(auto i:nums)
        {
            if(i%2==0)
            {
                l.push_back(i);
            }
            if(i%2!=0)
            {
                m.push_back(i);
            }
        }
        int res[n];
        while(i<l.size() && j<m.size())
        {
            if(k%2==0)
            {
                res[k++]=l[i++];
            }
            else
            {
                res[k++]=m[j++];
            }
        }
        while(i<l.size())
        {
            res[k++]=l[i++];
        }
        while(j<m.size())
        {
            res[k++]=m[j++];
        }
        for(i=0; i<nums.size(); i++)
        {
            ans.push_back(res[i]);
        }
        return ans;
    }
};