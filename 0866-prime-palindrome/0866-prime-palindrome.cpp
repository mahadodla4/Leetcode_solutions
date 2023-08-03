class Solution {
public:
    bool prime(int n)
    {
        if(n<2)
        {
            return 0;
        }
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    bool pal(int p)
    {
        int m=p,r,sum=0;
        while(m!=0)
        {
            r=m%10;
            sum=sum*10+r;
            m=m/10;
        }
        if(sum==p)
        {
            return 1;
        }
        return 0;
    }
    int primePalindrome(int n) 
    {
        if(n<=2)
        {
            return 2;
        }
        if(n>=1e7 and n<=1e8)
        {
            n=100030001;
        }
        if(n%2==0)
        {
            n++;
        }
        int nxt=n;
        while(nxt)
        {
            if(pal(nxt) and prime(nxt))
            {
                return nxt;
            }
            nxt+=2;
        }
        return 0;
    }
};