class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        int i,j,n=arr.size();
        vector<pair<double,pair<int,int>>>res;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                double a=(double)arr[i];
                double b=a/(arr[j]);
                res.push_back({b,{arr[i],arr[j]}});
            }
        }
        sort(res.begin(),res.end());
        j=1;
        for(auto i:res)
        {
            if(j==k)
            {
                return {i.second.first,i.second.second};
            }
            j++;
        }
        return {};
    }
};