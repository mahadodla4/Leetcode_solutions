class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) 
    {
        vector<int>left;
        vector<int>right;
        stack<pair<int,int>>st;
        stack<pair<int,int>>st2;
        int i,c1,c2,n=arr.size();
        long long mod=1e9+7,sum=0;
        for(i=0; i<n; i++)
        {
            c1=1;
            while(st.size()>0 and (st.top().first)>arr[i])
            {
                c1+=st.top().second;
                st.pop();
            }
            st.push({arr[i],c1});
            left.push_back(c1);
        }
        for(i=n-1; i>=0; i--)
        {
            c2=1;
            while(st2.size()>0 and (st2.top().first)>=arr[i])
            {
                c2+=st2.top().second;
                st2.pop();
            }
            st2.push({arr[i],c2});
            right.push_back(c2);
        }
        reverse(right.begin(),right.end());
        // for(auto i:left)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i:right)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        for(i=0; i<n; i++)
        {
            int res=(arr[i]%mod*left[i]%mod*right[i]%mod)%mod;
            sum+=(res%mod);
        }
        return sum%mod;
    }
};