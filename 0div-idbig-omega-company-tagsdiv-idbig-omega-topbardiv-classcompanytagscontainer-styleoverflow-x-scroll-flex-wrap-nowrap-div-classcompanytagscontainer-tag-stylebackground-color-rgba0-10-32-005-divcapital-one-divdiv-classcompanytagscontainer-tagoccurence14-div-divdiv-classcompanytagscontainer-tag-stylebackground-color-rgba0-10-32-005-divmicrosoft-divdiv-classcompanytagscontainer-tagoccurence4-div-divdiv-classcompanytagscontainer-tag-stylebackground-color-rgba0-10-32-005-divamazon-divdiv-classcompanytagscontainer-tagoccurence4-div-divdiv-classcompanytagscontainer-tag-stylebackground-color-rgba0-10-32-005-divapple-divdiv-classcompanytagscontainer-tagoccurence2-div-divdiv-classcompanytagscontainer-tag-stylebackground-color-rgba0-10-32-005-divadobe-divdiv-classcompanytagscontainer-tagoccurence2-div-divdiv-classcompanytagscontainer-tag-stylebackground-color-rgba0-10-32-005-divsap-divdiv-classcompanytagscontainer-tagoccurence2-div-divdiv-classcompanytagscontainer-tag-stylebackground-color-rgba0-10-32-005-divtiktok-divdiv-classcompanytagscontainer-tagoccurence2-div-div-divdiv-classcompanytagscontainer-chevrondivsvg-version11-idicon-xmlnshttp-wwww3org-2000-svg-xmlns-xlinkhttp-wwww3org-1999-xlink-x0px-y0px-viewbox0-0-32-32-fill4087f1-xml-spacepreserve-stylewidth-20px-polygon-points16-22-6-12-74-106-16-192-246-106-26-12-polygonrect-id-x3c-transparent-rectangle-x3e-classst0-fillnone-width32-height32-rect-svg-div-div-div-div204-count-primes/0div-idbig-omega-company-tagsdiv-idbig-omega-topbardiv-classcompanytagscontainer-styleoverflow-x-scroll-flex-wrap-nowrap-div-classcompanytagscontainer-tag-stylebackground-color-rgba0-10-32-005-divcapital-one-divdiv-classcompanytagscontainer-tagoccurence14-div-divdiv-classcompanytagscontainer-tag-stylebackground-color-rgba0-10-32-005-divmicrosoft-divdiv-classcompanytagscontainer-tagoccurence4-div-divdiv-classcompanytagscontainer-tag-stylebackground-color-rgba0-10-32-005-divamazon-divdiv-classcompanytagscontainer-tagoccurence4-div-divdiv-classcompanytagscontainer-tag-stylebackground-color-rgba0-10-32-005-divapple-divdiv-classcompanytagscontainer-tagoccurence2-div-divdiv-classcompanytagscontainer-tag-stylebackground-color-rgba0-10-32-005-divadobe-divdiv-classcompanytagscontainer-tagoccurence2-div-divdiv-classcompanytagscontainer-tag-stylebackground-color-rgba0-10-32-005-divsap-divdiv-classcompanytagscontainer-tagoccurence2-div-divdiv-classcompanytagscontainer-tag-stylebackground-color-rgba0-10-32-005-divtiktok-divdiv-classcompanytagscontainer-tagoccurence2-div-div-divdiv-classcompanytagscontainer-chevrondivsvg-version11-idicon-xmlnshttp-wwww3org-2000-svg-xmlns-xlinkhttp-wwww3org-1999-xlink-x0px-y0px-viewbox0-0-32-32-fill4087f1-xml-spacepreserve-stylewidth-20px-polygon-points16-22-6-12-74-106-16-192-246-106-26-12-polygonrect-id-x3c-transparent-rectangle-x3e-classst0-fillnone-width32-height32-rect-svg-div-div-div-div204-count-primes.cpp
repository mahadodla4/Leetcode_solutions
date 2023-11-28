class Solution {
public:
    void seive(int n,vector<int>&primes)
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(primes[i])
            {
                for(int j=i*i; j<=n; j+=i)
                {
                    primes[j]=0;
                }
            }
        }
    }
    int countPrimes(int n) 
    {
        vector<int>primes(n+1,1);
        seive(n,primes);
        int i,c=0;
        for(i=2; i<n; i++)
        {
            if(primes[i])
            {
                c++;
            }
        }
        return c;
    }
};