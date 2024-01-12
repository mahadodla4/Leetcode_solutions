class Solution {
public:
    int VC(string ans)
    {
        int c=0;
        for(auto i:ans)
        {
            if(i=='a' or i=='e' or i=='o' or i=='i' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U')
            {
                c++;
            }
        }
        return c;
    }
    bool halvesAreAlike(string s) 
    {
        string res1,res2;
        int i,n=s.size();
        for(i=0; i<(n/2); i++)
        {
            res1+=s[i];
        }
        for(i=(n/2); i<n; i++)
        {
            res2+=s[i];
        }
        int a=VC(res1),b=VC(res2);
        if(a==b)
        {
            return 1;
        }
        return 0;
    }
};