class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<long long>s(nums.begin(),nums.end());
        vector<long long>res(s.begin(),s.end());
        long long maxi=-1;
        for(auto i:res) {
            long long val=i;
            long long c=0;
            while(s.count(val)) {
                s.erase(val);
                val*=val;
                c++;
            }
            maxi=max(maxi,c);
        }
        if(maxi>1) {
            return maxi;
        }
        return -1;
    }
};




