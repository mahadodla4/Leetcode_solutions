class Solution {
public:
    vector<int> countBits(int n) 
    {
        int i,c,a;
        vector<int>l;
        for(i=0; i<=n; i++)
        {
            c=0;
            a=i;
            while(a)
            {
                if((a&1)==1)
                {
                    c++;
                }
                a=a>>1;
            }
            l.push_back(c);
        }
        return l;
    }
};