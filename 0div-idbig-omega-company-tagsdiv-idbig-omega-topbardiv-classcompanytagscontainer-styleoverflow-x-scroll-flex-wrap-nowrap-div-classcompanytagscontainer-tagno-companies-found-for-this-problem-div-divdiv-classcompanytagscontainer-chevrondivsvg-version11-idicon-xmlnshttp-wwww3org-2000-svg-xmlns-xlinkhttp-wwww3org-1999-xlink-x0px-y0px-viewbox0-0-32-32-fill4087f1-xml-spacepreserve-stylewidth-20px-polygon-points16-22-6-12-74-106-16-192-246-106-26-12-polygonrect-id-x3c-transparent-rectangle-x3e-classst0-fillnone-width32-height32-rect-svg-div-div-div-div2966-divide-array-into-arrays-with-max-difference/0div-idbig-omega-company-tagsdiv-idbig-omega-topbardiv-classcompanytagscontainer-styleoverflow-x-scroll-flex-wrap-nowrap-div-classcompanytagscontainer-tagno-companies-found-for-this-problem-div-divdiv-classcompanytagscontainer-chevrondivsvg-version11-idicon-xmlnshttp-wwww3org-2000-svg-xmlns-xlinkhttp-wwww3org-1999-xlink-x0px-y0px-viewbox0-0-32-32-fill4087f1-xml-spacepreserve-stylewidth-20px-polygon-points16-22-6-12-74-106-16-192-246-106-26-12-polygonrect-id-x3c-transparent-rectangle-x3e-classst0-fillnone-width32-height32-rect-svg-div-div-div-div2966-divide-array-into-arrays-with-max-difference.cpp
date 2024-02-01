class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& arr, int k) 
    {
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        int i,n=arr.size();
        for(i=0; i<n; i+=3)
        {
            if((arr[i+2]-arr[i])<=k)
            {
                res.push_back({arr[i],arr[i+1],arr[i+2]});
            }
        }
        if(res.size()==n/3)
        {
            return res;
        }
        return {};
    }
};