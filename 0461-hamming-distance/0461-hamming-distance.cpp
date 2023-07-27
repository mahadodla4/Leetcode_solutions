class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int i,c=0;
        for(i=0; i<32; i++)
        {
            int a=x&(1<<i);
            int b=y&(1<<i);
            if(a!=b)
            {
                c++;
            }
        }
        return c;
    }
};