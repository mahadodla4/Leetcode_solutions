class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int fc=0,tc=0,twc=0,i,res,a,b;
        for(i=0; i<bills.size(); i++)
        {
            if(bills[i]==5)
            {
                fc++;
            }
            else if(bills[i]==10)
            {
                res=(bills[i]-5)/5;
                if(fc<0)
                {
                    return false;
                }
                else
                {
                    fc--;
                    tc++;
                }
            }
            else if(bills[i]==20)
            {
                if(fc>0 and tc>0)
                {
                    fc--;
                    tc--;
                }
                else if(tc==0 and fc>=3)
                {
                    fc-=3;
                }
                else if(tc==0 and fc<0)
                {
                    return false;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};