class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        int i,a,n=arr.size();
        sort(arr.begin(),arr.end());
        set<int>s;
        for(i=0; i<n-1; i++)
        {
            a=arr[i+1]-arr[i];
            s.insert(a);
        }
        if(s.size()==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};