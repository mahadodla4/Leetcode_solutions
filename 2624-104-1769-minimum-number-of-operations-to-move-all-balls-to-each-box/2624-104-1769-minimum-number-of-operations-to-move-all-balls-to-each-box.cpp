/*
0 0 1 0 1 1
1 2 3 4 5 6
*/
class Solution {
public:
    vector<int> minOperations(string arr) {
        vector<int>ans;
        int i,j,n=arr.size();
        for(i=0; i<n; i++) {
            int res=0;
            for(j=0; j<n; j++) {
                if(arr[j]=='1') {
                    res+=abs(j-i);
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};



