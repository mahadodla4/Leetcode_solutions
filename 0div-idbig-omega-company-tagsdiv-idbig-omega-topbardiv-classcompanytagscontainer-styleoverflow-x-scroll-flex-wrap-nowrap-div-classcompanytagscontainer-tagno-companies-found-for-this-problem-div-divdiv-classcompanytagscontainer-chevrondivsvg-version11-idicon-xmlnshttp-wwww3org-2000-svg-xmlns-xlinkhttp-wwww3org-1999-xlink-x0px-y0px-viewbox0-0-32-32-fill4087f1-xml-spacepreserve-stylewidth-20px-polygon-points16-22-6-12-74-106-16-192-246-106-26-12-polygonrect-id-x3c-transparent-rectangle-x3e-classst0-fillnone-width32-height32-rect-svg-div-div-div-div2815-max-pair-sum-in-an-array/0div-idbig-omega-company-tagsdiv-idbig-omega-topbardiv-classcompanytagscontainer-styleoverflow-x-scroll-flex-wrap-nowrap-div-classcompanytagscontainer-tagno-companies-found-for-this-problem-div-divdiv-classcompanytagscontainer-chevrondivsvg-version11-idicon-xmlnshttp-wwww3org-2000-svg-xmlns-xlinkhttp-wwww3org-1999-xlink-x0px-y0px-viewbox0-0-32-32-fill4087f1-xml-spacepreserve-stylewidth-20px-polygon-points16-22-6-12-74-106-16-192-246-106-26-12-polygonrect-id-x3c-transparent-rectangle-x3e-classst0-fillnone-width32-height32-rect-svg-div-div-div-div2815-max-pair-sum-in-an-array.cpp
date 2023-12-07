class Solution {
public:
    int greater(int num)
    {
        string a=to_string(num);
        sort(a.rbegin(),a.rend());
        return a[0]-'0';
    }
    int maxSum(vector<int>& nums) 
    {
        int i,j,n=nums.size();
        vector<int>l;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(greater(nums[i])==greater(nums[j]))
                {
                    l.push_back(nums[i]+nums[j]);
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