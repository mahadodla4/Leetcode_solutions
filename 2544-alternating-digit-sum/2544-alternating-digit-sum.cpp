class Solution {
public:
    int alternateDigitSum(int n) 
    {
        string N=to_string(n);
        int m=N.size(),r,sum1=0,sum2=0,i=0,a;
        while(n!=0)
        {
            r=n%10;
            if(m%2==0)
            {
                if(i%2!=0)
                {
                    sum1+=r;
                }
                if(i%2==0)
                {
                    a=-1*r;
                    sum2+=a;
                }
            }
            if(m%2!=0)
            {
                if(i%2==0)
                {
                    sum1+=r;
                }
                if(i%2!=0)
                {
                    a=-1*r;
                    sum2+=a;
                }
            }
            n=n/10;
            i++;
        }
        //cout<<sum1<<" "<<sum2<<endl;
        return sum1+sum2;
    }
};