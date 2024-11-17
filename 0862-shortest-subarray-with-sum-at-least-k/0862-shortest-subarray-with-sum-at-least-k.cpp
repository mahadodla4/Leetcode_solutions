class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        deque<int>q;
        int res=INT_MAX;
        vector<long long>arr;
        for(auto i:nums) {
            arr.push_back(i);
        }
        for(int i=0; i<nums.size(); i++) {
            if(i>0) {
                arr[i]+=arr[i-1];
            }
            if(arr[i]>=k) {
                res=min(res,i+1);
            }
            while(!q.empty() and arr[i]-arr[q.front()]>=k) {
                res=min(res,i-q.front());
                q.pop_front();
            }
            while(!q.empty() and arr[i]<=arr[q.back()]) {
                q.pop_back();
            }
            q.push_back(i);
        }
        if(res==INT_MAX) {
            return -1;
        }
        return res;
    }
};