class Solution {
public:
    int totalMoney(int n) 
    {
        int sum=0,a=1,i;
        while(n>0)
        {
            if(n>=7)
            {
                for(i=a; i<a+7; i++)
                {
                    sum+=i;
                }
                a++;
                n=n-7;
            }
            else
            {
                for(i=a; i<a+n; i++)
                {
                    sum+=i;
                }
                n=0;
            }
        }
        return sum;
    }
};