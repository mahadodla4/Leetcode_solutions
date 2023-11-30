class Solution {
public:
    int trailingZeroes(int n) 
    {
        int i,c=0;
        for(i=5; i<=n; i=i*5)
        {
            c+=(n/i);
        }
        return c;
    }
};