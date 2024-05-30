class Solution {
public:
    int countTriplets(vector<int>& arr) 
    {
        int n=arr.size(),i,j,c=0;
        for(i=0; i<n; i++)
        {
            int x=arr[i];
            for(j=i+1; j<n; j++)
            {
                x=x^arr[j];
                if(x==0)
                {
                    c+=(j-i);
                }
            }
        }
        return c;
    }
};