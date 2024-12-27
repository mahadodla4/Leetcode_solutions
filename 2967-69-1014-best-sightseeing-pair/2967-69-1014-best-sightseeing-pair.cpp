class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans=0,prev=values[0];
        for(int j=1; j<values.size(); j++) {
            ans=max(ans,prev+values[j]-j);
            prev=max(prev,values[j]+j);
        }
        return ans;
    }
};