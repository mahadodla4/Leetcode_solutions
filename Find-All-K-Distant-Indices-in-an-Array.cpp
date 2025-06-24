class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>keyInd;
        vector<int>res;
        int i,n=nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == key) {
                keyInd.push_back(i);
            }
        }
        for(i=0; i<n; i++) {
            int flag=0;
            for(auto j:keyInd) {
                if(abs(i-j) <= k) {
                    flag=1;
                    break;
                }
            }
            if(flag==1) {
                res.push_back(i);
            }
        }
        return res;
    }
};