class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int i,j,n=nums.size();
        for(i=0; i<k; i++) {
            priority_queue<int>pq;
            for(auto i:nums) {
                pq.push(i);
            }
            while(!pq.empty()) {
                pq.pop();
            }
            int val=pq.top();
            pq.pop();
            int res=val*multiplier;
            for(j=0; j<n; j++) {
                if(nums[j]==val) {
                    nums[j]=res;
                    break;
                }
            }
        }
        return nums;
    }
};