class Solution {
public:
    bool isArraySpecial(vector<int>& arr) 
    {
        int i,n=arr.size();
        for(i=0; i<n-1; i++)
        {
            if((arr[i]%2==0 and arr[i+1]%2==0) or (arr[i]%2!=0 and arr[i+1]%2!=0))
            {
                return false;
            }
        }
        return true;
    }
};