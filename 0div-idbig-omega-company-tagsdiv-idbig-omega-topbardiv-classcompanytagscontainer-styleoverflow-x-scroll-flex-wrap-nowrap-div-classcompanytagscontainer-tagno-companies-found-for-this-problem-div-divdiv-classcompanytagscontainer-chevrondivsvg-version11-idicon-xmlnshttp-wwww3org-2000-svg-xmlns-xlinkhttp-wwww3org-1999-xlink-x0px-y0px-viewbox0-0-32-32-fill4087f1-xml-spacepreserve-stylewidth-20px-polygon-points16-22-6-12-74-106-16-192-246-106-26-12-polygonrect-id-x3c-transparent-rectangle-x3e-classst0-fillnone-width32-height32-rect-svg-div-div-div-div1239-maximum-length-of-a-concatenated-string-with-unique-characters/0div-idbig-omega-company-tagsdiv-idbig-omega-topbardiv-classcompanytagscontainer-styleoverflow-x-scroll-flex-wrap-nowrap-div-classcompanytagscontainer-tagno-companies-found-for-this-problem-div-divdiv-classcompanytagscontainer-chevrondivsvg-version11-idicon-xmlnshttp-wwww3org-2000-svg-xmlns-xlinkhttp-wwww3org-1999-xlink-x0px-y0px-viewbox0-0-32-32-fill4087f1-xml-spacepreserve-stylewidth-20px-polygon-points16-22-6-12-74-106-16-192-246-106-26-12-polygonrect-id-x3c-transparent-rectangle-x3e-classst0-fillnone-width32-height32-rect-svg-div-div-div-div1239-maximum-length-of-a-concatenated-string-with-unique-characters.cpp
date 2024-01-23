class Solution {
public:
    int maxLength(vector<string>& a) 
    {
        int p,i,j,n=a.size(),ans=0;
        p=1<<n;
        //vector<string>l;
        for(i=0; i<p; i++)
        {
            int flag=0;
            string res="";
            vector<int>freq(27,0);
            for(j=0; j<31; j++)
            {
                if(i&(1<<j))
                {
                    for(auto k:a[j]) 
                    {
                        if(freq[k-'a']==1)
                        {
                            flag=1;
                            break;
                        }
                        else freq[k-'a']++;
                    }
                    if(flag==0)
                    {
                        res+=a[j];
                        if(ans<res.size())
                        {
                            ans=res.size();
                        }
                    }
                }
            }
        }
        return ans;
    }
};