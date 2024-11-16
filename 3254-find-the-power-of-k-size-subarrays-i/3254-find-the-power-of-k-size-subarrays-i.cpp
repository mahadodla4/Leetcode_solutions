class Solution {
public:
    vector<int> resultsArray(vector<int>& arr, int k) {
        int i=0,n=arr.size(),j=1;
        if(k == 1) {
            return arr;
        }
        vector<int>res(n-k+1,-1);
        if(n==1) {
            res[0]=arr[0];
            return res;
        }
        while(j<n) {
            while(j<n and arr[j]==arr[j-1]+1) {
                if(j-i+1 >= k) {
                    res[j-k+1]=arr[j];
                }
                j++;
            }
            i=j;
            j=i+1;
        }
        return res;
    }
};