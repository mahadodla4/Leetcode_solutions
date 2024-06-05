class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int>final_freq(26,INT_MAX);
        for(auto i:words)
        {
            vector<int>freq(26,0);
            for(auto j:i)
            {
                freq[j-'a']++;
            }
            for(int k=0; k<26; k++)
            {
                final_freq[k]=min(final_freq[k],freq[k]);
            }
        }
        vector<string>l;
        for (int i=0; i<26; ++i) 
        {
            int a=final_freq[i];
            while(a--> 0) 
            {
                l.push_back(string(1,i+'a'));
            }
        }
        return l;
    }
};