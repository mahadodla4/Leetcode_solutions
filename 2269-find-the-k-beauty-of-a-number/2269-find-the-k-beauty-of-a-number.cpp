class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string s=to_string(num);
        int i=0,count=0,n=s.size();
        for(i=0; i<=n-k; i++)
        {
            string a=s.substr(i,k);
            int n1=stoi(a);
            if(n1!=0 and num % n1 == 0)
            {
                count++;
            }
        }
        return count;
    }
};