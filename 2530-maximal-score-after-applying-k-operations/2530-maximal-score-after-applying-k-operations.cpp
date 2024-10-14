class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long res=0;
        int n=nums.size();;
        priority_queue<long long>pq;
        for(auto i:nums) {
            pq.push(i);
        }
        while(k--) {
            double a=pq.top();
            pq.pop();
            res+=a;
            pq.push(ceil(a/3));
        }
        return res;
    }
};