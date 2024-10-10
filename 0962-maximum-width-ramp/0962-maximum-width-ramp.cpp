class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int i,n=nums.size();
        stack<int>st;
        for(i=0; i<n; i++) {
            if(st.empty() || nums[st.top()] > nums[i]) {
                st.push(i);
            }
        }
        int ans=0;
        for(i=n-1; i>=0; i--) {
            while(!st.empty() and nums[st.top()] <= nums[i]) {
                ans=max(ans,i-st.top());
                st.pop();
            }
        }
        return ans;
    }
};