class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int count=0;
        for(int i=31; i>=0; i--)
        {
            int a1=a&(1<<i);
            int b1=b&(1<<i);
            int c1=c&(1<<i);
            //cout<<a1<<" "<<b1<<" "<<c1<<endl;
            if(c1>=1 and a1==0 and b1==0)
            {
                count+=1;
            }
            if(c1==0 and a1>=1 and b1>=1)
            {
                count+=2;
            }
            if(c1==0 and a1>=1 and b1==0)
            {
                count+=1;
            }
            if(c1==0 and b1>=1 and a1==0)
            {
                count+=1;
            }
            else
            {
                continue;
            }
        }
        return count;
    }
};