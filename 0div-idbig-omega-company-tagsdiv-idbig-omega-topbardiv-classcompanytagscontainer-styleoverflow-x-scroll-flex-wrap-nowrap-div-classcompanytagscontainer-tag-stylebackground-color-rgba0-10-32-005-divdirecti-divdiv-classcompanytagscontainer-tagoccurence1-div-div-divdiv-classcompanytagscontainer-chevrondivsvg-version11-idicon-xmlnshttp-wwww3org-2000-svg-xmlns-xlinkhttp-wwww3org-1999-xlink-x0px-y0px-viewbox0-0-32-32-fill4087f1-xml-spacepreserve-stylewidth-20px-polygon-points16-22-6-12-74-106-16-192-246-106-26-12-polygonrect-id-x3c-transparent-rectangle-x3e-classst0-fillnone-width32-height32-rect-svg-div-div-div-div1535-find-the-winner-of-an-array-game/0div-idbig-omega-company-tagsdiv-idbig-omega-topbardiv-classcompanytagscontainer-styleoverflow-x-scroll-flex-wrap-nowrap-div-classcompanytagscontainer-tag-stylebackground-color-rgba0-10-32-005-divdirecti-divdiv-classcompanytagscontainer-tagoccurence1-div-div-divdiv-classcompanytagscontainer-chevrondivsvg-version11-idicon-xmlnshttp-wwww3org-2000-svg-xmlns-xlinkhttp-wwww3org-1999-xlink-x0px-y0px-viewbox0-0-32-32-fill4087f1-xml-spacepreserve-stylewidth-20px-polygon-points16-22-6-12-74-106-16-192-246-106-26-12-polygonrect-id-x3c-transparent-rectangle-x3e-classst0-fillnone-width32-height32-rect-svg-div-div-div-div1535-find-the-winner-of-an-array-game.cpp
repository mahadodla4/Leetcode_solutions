class Solution {
public:
    int getWinner(vector<int>& arr, int k) 
    {
        int i,n=arr.size();
        if(k==1)
        {
            return max(arr[0],arr[1]);
        }
        if(k>=n)
        {
            return *max_element(arr.begin(),arr.end());
        }
        int c=0,winner=arr[0];
        for(i=1; i<n; i++)
        {
            if(winner>arr[i])
            {
                c++;
            }
            else
            {
                winner=arr[i];
                c=1;
            }
            if(c==k)
            {
                return winner;
            }
        }
        return winner;
    }
};