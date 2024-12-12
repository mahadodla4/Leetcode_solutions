class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long i,res=0;
        for(i=0; i<k; i++) {
            sort(gifts.rbegin(),gifts.rend());
            int a=gifts[0];
            gifts.erase(gifts.begin());
            gifts.push_back(sqrt(a));
        }
        for(auto i:gifts) {
            res+=i;
        }
        return res;
    }
};