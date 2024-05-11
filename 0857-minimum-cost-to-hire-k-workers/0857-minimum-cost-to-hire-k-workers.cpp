class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) 
    {
        vector<pair<double,int>>ratio;
        int i,n=wage.size();
        for(i=0; i<n; i++)
        {
            double a=(double)wage[i];
            int b=quality[i];
            double c=a/b;
            ratio.push_back({c,b});
        }
        sort(ratio.begin(),ratio.end());
        priority_queue<double>pq;
        double sum=0,ans=DBL_MAX;
        for(auto i:ratio)
        {
            sum+=i.second;
            pq.push(i.second);
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            if(pq.size()==k)
            {
                ans=min(ans,sum*i.first);
            }
        }
        return ans;
    }
};






