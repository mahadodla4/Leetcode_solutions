class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        if(s1.size()!=s2.size())
        {
            return 0;
        }
        int i,n=s1.size(),c=0;
        string res1="",res2="";
        for(i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
            {
                res1+=s1[i];
                res2+=s2[i];
            }
        }
        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        if(res1==res2 and (res1.size()==2 or res1.size()==0))
        {
            return 1;
        }
        return 0;
    }
};