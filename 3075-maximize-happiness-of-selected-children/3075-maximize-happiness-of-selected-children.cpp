class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) 
    {
        sort(happiness.rbegin(),happiness.rend());
        // cout<<happiness.size()<<endl;
        // for(auto i:happiness)
        // {
        //     cout<<i<<" ";
        // }
        long long i,res=happiness[0];
        for(i=1; i<k; i++)
        {
            if((happiness[i]-i)>=1)
            {
                res+=(happiness[i]-i);
            }
            else
            {
                break;
            }
        }
        return res;
    }
};