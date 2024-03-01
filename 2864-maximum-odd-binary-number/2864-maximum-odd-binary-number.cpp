class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int i,one=0,zero=0;
        for(auto i:s)
        {
           if(i=='1') one++;
           if(i=='0') zero++;
        } 
        string s1="";
        one=one-1;
        while(one--)
        {
            s1+="1";
        }
        while(zero--)
        {
            s1+="0";
        }
        s1+="1";
        return s1;
    }
};