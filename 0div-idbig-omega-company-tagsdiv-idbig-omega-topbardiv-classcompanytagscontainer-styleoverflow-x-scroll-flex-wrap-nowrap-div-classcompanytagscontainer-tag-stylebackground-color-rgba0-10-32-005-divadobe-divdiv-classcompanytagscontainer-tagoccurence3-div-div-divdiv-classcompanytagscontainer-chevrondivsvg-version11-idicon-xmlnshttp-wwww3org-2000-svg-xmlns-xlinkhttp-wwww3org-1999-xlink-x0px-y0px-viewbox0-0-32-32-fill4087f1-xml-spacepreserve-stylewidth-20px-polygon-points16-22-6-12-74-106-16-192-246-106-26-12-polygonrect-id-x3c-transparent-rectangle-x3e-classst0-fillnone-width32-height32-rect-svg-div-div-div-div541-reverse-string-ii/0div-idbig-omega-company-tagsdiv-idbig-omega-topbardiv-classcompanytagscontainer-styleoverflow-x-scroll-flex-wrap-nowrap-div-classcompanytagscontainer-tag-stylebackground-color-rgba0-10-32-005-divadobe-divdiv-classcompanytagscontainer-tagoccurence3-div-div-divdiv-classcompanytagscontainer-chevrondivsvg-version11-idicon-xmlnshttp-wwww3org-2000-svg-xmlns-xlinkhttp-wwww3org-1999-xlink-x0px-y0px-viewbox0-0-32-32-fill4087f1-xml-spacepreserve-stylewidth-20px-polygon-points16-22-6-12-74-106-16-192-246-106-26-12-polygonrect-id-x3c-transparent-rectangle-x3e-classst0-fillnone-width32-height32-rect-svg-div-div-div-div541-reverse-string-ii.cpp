class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int i=0,n=s.size(),size=0;
        while(i<n)
        {
            size=i+k;
            if(size>n)
            {
                size=n;
            }
            reverse(s.begin()+i,s.begin()+size);
            i=size+k;
        }
        return s;
    }
};