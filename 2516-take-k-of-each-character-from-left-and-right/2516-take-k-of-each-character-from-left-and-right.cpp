class Solution {
public:
    int takeCharacters(string s, int k) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(auto i:s) {
            mp[i]++;
        }
        if(mp['a']<k or mp['b']<k or mp['c']<k) {
            return -1;
        }
        int l=0,r=0,ans=n,a=0,b=0,c=0;
        while(l<n) {
            if(s[l]=='a') a++;
            if(s[l]=='b') b++;
            if(s[l]=='c') c++;
            l++;
            while(a> mp['a']-k or b>mp['b']-k or c>mp['c']-k) {
                if(s[r]=='a') a--;
                if(s[r]=='b') b--;
                if(s[r]=='c') c--;
                r++;
            }
            ans=min(ans,n-(l-r));
        }
        return ans;
    }
};