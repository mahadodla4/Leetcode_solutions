class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int n=stones.size();
        int i=n-1,j=n-1;
        while(j>0)
        {
            sort(stones.begin(),stones.end());
            if(stones[i]==stones[i-1])
            {
                stones[i]=0;
                stones[i-1]=0;
            }
            else
            {
                stones[i]=stones[i]-stones[i-1];
                stones[i-1]=0;
            }
            j--;
        }
        return stones[n-1];
    }
};
