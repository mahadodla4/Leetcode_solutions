class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        int i;
        long long int e=0,o=0;
        for(i=0; i<=32; i++)
        {
            long long int a=pow(2,i);
            if(i%2==0)
            {
                e+=a;
            }
            else if(i%2!=0)
            {
                o+=a;
            }
            if(e==n or o==n)
            {
                return 1;
            }
            if(e>n or o>n)
            {
                return 0;
            }
        }
        return 1;
    }
};