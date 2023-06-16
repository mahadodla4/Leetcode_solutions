class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int c=0;
        for(int i=31; i>=0; i--)
        {
            int a=start&(1<<i);
            int b=goal&(1<<i);
            if((a!=0 and b!=0) or (a>=1 and b>=1))
            {
                continue;
            }
            if(a>=1 and b==0)
            {
                c++;
            }
            if(a==0 and b>=1)
            {
                c++;
            }
            //cout<<a<<" "<<b<<endl;
        }
        return c;
    }
};