class Solution {
public:
    bool prime(int n)
    {
        if(n==1)
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
    int scount(int n)
    {
        int c=0;
        while(n)
        {
            if(n&1)
            {
                c++;
            }
            n=n>>1;
        }
        return c;
    }
    int countPrimeSetBits(int left, int right) 
    {
        int i,a,count=0;
        for(i=left; i<=right; i++)
        {
            a=scount(i);
            if(prime(a))
            {
                count++;
            }
        }
        return count;
    }
};