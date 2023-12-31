class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        int i,j,ans=-1;
        for(i=0; i<s.size(); i++)
        {
            for(j=i+1; j<s.size(); j++)
            {
                if(s[i]==s[j])
                {
                    ans=max(ans,(j-i-1));
                }
            }
        }
        return ans;
    }
};