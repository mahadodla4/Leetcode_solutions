class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        vector<int>res=arr;
        sort(res.begin(),res.end());
        map<int,int>mp;
        vector<int>ans;
        int i,j=1,n=arr.size();
        for(i=0; i<n; i++)
        {
            if(mp.find(res[i])==mp.end())
            {
                mp[res[i]]=j;
                j++;
            }
        }
        for(auto i:arr)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};