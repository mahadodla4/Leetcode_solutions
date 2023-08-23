class Solution {
public:
    int minOperations(int n) 
    {
        int i,a,d=2,s;
        if(n%2==0)
        {
            a=1;
            s=(n/2)*((2*a)+((n-1)*d));
        }
        if(n%2!=0)
        {
            a=2;
            s=(n/2)*((2*a)+((n-1)*d));
        }
        return s/4;
    }
};

/* 
7 = 6+4+2
1 3 5 7 9 11 13 
1-13=6
3-11=4
5-9=2


6=5+3+1
1 3 5 7 9 11
1-11=5
3-9=3
5-7=1

*/