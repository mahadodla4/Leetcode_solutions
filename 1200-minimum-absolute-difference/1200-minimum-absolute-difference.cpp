class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        vector<vector<int>>m;
        vector<int>p;
        int i,j,a,min=0;
        sort(arr.begin(),arr.end());
        for(i=0; i<size(arr)-1; i++)
        {
            int m=arr[i],n=arr[i+1];
            int c=abs(m-n);
            p.push_back(c);
        }
        sort(p.begin(),p.end());
        a=p[0];
        for(i=1; i<size(arr); i++)
        {
            if(arr[i]-arr[i-1]==a)
            {
                m.push_back({arr[i-1],arr[i]});
            }
        }
        return m;
    }
};