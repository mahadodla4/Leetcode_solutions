class Solution {
public:
    string frequencySort(string s) 
    {
        map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        int i;
        string res="";
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        while(!pq.empty())
        {
            pair<int,char> n=pq.top();
            for(i=0; i<n.first; i++)
            {
                res+=n.second;
            }
            pq.pop();
        }
        return res;
    }
};

