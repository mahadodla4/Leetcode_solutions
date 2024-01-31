class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) 
    {
        int i,n=temp.size();
        vector<int>l(n,0);
        stack<int>st;
        for(i=n-1; i>=0; i--)
        {
            while(!st.empty() and temp[st.top()]<=temp[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                l[i]=st.top()-i;
            }
            st.push(i);
        }
        return l;
    }
};
