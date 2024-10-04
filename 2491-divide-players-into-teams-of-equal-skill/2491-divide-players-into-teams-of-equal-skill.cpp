class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long i,n=skill.size(),sum=0;
        vector<vector<int>>res;
        map<int,int>mp;
        for(i=0; i<n/2; i++)
        {
            int ans=skill[i]+skill[n-i-1];
            res.push_back({ans,skill[i],skill[n-i-1]});
            mp[ans]++;
        }
        if(mp.size()!=1)
        {
            return -1;
        }
        for(auto i:res)
        {
            int a=i[1]*i[2];
            sum+=a;
        }
        return sum;
        
    }
};