class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<pair<int,int>>res;
        int i,n=score.size(),j=1;
        for(i=0; i<n; i++)
        {
            res.push_back({score[i],i+1});
        }
        sort(res.rbegin(),res.rend());
        map<int,int>mp;
        for(auto i:res)
        {
            mp[i.first]=j;
            j++;
        }
        vector<string>ranks;
        for(i=0; i<n; i++)
        {
            if(mp[score[i]]==1)
            {
                ranks.push_back("Gold Medal");
            }
            else if(mp[score[i]]==2)
            {
                ranks.push_back("Silver Medal");
            }
            else if(mp[score[i]]==3)
            {
                ranks.push_back("Bronze Medal");
            }
            else
            {
                ranks.push_back(to_string(mp[score[i]]));
            }
        }
        return ranks;
    }
};

