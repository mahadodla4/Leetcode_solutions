class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if(arr.size()==0) {
            return 0;
        }
        int i,maxi=0,n=arr.size(),c=0;
        for(i=0; i<n; i++) {
            maxi=max(maxi,arr[i]);
            if(maxi==i) {
                c++;
            }
        }
        return c;
    }
};