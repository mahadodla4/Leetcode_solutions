class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int>vec;
        int i=0,j=1,res;
        while(i<prices.size()-1 && j<prices.size())
        {
            if(prices[i]>=prices[j])
            {
                res=prices[i]-prices[j];
                vec.push_back(res);
                i++;
                j=i+1;
            }
            else
            {
                j++;
                if(j>=prices.size())
                {
                    vec.push_back(prices[i]);
                    i++;
                    j=i+1;
                }
            }
        }
        vec.push_back(prices[prices.size()-1]);
        return vec;
    }
};