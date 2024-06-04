class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int>mp;
        int res=0,val=0;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            //cout<<i.first<<" "<<i.second<<endl;
            if(i.second>1)
            {
                res+=i.second/2*(2);
            }
            if(i.second%2)
            {
                val=1;
            }
        }
        return res+val;
    }
};