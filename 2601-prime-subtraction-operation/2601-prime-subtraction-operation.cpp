class Solution {
public:
    int n=1001;
    int primes[1001];
    void seive() {
        for(int i=0; i<n; i++) {
            primes[i]=1;
        }
        primes[0]=primes[1]=0;
        for(int i=2; i*i<=n; i++) {
            if(primes[i]==1) {
                for(int j=i*i; j<n; j+=i) {
                    primes[j]=0;
                }
            }
        }
    }
    bool primeSubOperation(vector<int>& nums) {
        seive();
        int ans=1,i=0;
        while(i<nums.size()) {
            int diff=nums[i]-ans;
            if(diff<0) {
                return false;
            }
            if(primes[diff]==1 or diff==0) {
                i++;
                ans++;
            }
            else {
                ans++;
            }
        }
        return true;
    }
};