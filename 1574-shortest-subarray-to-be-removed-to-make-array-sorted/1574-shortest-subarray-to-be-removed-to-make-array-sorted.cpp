class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=n-1;
        while(i+1<n and arr[i]<=arr[i+1]) {
            i++;
        }
        if(i==n-1) {
            return 0;
        }
        while(j>0 and arr[j-1]<=arr[j]) {
            j--;
        }
        int res=min(n-i-1,j);
        int left=0,right=j;
        while(left<=i and right<n) {
            if(arr[left]<=arr[right]) {
                res=min(res,right-left-1);
                left++;
            }
            else {
                right++;
            }
        }
        return res;
    }
};