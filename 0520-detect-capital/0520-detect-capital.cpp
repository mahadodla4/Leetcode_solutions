class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int l=0,u=0,c=0;
        char s=word[0];
        if(isupper(s))
        {
            c++;
        }
        for(auto i:word)
        {
            if(islower(i))
            {
                l++;
            }
            if(isupper(i))
            {
                u++;
            }
        }
        
        int n=word.size();
        if(l==n or u==n or (c==1 and l==n-1))
        {
            return 1;
        }
        return 0;
    }
};