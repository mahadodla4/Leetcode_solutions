class Solution {
public:
    int minimumLength(string s) 
    {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j)
        {
            char a=s[i];
            if(s[i]!=a or s[j]!=a)
            {
                break;
            }
            while(s[i]==a)
            {
                i++;
            }
            if(i==j)
            {
                return 1;
            }
            if(i>j)
            {
                return 0;
            }
            while(s[j]==a)
            {
                j--;
            }
            
        }
        return (j-i)+1;
    }
};