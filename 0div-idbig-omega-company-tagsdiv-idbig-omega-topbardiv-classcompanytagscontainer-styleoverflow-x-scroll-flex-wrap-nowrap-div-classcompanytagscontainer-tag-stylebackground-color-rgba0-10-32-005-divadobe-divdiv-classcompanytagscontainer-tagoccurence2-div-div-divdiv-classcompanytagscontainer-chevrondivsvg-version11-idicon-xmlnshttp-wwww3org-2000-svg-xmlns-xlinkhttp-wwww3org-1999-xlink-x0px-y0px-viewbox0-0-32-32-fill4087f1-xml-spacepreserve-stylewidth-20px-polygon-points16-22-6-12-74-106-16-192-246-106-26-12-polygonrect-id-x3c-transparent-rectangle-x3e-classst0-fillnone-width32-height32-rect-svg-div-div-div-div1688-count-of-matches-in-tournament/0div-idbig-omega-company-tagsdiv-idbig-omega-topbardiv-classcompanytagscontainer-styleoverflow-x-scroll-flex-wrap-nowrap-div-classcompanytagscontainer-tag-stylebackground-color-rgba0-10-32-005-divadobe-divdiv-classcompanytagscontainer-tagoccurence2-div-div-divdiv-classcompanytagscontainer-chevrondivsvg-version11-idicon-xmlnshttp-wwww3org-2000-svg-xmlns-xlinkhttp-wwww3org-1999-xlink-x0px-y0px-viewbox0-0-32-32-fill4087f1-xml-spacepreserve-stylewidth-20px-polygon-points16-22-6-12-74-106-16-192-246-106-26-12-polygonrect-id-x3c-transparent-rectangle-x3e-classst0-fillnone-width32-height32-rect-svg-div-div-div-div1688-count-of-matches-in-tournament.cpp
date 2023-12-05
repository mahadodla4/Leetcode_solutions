class Solution {
public:
    int numberOfMatches(int n) 
    {
        int sum=0,matches=n,teams;
        while(n>0 and matches>0)
        {
            if(n%2==0)
            {
                matches=n/2;
                teams=n/2;
            }
            else
            {
                matches=(n-1)/2;
                teams=((n-1)/2)+1;
            }
            sum+=matches;
            n=teams;
        }
        return sum;
    }
};