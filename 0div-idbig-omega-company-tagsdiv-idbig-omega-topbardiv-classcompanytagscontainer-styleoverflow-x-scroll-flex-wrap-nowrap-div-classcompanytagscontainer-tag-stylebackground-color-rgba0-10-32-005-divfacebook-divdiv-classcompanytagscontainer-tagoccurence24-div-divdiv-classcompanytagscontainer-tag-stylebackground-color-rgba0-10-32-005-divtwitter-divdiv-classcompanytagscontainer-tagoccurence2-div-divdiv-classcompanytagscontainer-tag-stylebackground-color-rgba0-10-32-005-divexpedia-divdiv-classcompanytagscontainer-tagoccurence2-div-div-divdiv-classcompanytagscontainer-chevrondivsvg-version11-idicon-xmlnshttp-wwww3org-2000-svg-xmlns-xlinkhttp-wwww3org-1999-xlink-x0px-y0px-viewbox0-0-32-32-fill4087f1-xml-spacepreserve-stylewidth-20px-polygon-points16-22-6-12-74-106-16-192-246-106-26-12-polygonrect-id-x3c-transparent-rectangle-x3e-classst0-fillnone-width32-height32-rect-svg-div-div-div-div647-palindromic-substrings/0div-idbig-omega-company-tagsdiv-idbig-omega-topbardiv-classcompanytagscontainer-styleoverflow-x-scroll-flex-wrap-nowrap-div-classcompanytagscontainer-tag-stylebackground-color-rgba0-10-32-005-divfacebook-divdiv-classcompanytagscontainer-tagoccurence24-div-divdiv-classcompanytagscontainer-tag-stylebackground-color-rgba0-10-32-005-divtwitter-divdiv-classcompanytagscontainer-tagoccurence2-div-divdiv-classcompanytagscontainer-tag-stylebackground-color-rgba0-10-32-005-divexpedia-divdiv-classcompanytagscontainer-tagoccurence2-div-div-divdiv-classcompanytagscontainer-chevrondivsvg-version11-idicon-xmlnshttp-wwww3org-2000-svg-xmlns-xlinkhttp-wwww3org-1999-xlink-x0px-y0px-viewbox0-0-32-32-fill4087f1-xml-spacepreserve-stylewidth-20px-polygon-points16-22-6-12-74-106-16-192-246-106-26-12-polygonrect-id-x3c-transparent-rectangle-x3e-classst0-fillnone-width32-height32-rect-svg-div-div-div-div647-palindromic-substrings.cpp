class Solution {
public:
    bool pal(string res)
    {
        string ans=res;
        reverse(ans.begin(),ans.end());
        if(res==ans)
        {
            return 1;
        }
        return 0;
    }
    int countSubstrings(string s) 
    {
        int i,j,c=0;
        for(i=0; i<s.size(); i++)
        {
            string res="";
            for(j=i; j<s.size(); j++)
            {
                res+=s[j];
                if(pal(res))
                {
                    c++;
                }
            }
        }
        return c;
    }
};