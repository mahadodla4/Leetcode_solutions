class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0,mini=INT_MAX,neg=0;
        for(auto i:matrix) {
            for(auto j:i) {
                long long val=j;
                if(val<0) {
                    neg++;
                }
                sum+=abs(val);
                mini=min(mini,abs(val));
            }
        }
        if(neg%2!=0) {
            return sum-(2*abs(mini));
        }
        return sum;
    }
};