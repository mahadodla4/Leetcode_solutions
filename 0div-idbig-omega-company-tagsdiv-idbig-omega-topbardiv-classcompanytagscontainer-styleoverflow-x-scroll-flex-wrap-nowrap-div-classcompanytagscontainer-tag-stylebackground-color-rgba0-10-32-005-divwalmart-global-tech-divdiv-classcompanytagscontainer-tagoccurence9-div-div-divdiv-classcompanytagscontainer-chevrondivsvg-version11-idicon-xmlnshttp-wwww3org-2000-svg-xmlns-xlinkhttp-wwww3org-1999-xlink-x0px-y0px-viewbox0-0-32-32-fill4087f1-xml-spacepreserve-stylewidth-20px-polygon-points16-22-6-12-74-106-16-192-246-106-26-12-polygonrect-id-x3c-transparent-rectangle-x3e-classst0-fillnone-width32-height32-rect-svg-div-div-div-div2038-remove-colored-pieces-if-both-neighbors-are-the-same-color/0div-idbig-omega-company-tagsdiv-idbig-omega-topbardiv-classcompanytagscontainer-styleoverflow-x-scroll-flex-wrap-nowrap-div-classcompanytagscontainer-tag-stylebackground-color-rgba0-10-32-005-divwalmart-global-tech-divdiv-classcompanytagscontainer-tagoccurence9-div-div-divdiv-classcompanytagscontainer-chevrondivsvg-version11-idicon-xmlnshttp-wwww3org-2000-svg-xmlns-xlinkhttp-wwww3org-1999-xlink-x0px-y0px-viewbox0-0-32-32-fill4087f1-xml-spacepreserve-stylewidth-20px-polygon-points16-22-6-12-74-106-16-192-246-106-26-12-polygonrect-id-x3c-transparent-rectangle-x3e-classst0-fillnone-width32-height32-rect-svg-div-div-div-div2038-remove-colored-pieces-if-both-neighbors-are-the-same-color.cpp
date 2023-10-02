class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        string s=colors;
        int i,a=0,b=0,n=colors.size();
        for(i=1; i<n-1; i++)
        {
            if(s[i-1]=='A' and s[i]=='A' and s[i+1]=='A')
            {
                a++;
            }
            else if(s[i-1]=='B' and s[i]=='B' and s[i+1]=='B')
            {
                b++;
            }
        }
        if(a>b)
        {
            return 1;
        }
        return 0;
    }
};