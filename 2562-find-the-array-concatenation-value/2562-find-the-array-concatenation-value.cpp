class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) 
    {
        int n=nums.size();
        vector<string>l;
        vector<string>m;
        int i=0,j=n-1;
        if(n%2==0)
        {
            while(i<n/2 and j>=n/2)
            {
                string a=to_string(nums[i]);
                string b=to_string(nums[j]);
                string res=a+b;
                l.push_back(res);
                i++;
                j--;
            }
        }
        else
        {
            while(i<n/2 and j>=n/2)
            {
                string a=to_string(nums[i]);
                string b=to_string(nums[j]);
                string res=a+b;
                l.push_back(res);
                i++;
                j--;
            }
            l.push_back(to_string(nums[n/2]));
        }
        long long sum=0;
        for(auto i:l)
        {
            int a=stoi(i);
            sum+=a;
        }
        return sum;
    }
};