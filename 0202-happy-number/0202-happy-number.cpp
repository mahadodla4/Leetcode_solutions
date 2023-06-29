class Solution {
public:
    bool isHappy(int n) 
    {
        int c=31,sum=0,r;
        while(c--)
        {
            sum=0;
            while(n!=0)
            {
                r=n%10;
                n=n/10;
                sum+=(r*r);
            }
            if(sum==1)
            {
                return 1;
            }
            n=sum;
        }
        return 0;
    }
};