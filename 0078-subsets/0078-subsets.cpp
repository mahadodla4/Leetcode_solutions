class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>final;
        int i,j,n=nums.size();
        int m=pow(2,n);
        for(i=0; i<m; i++)
        {
            vector<int>sub_seq;
            for(j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    sub_seq.push_back(nums[j]);
                }
            }
            final.push_back(sub_seq);
        }
        return final;
    }
};