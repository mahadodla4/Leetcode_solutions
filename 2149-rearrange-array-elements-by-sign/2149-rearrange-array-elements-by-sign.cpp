class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int i,j,k;
        vector<int>p;
        vector<int>n;
        vector<int>ans;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i]>=0)
            {
                p.push_back(nums[i]);
            }
            if(nums[i]<0)
            {
                n.push_back(nums[i]);
            }
        }
        int res[nums.size()];
        i=0,j=0,k=0;
        while(i<p.size() && j<n.size())
        {
            if(k%2==0)
            {
                res[k++]=p[i++];
            }
            else
            {
                res[k++]=n[j++];
            }
        }
        while(i<p.size())
        {
            res[k++]=p[i++];
        }
        while(j<n.size())
        {
            res[k++]=n[j++];
        }
        for(i=0; i<nums.size(); i++)
        {
            ans.push_back(res[i]);
        }
        return ans;
    }
};