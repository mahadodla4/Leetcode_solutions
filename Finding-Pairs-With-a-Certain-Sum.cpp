class FindSumPairs {
public:
    vector<int>num1;
    vector<int>num2;
    unordered_map<int,int>mp1,mp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(auto i:nums1) {
            num1.push_back(i);
            mp1[i]++;
        }
        for(auto i:nums2) {
            num2.push_back(i);
            mp2[i]++;
        }
    }
    
    void add(int index, int val) {
        mp2[num2[index]]--;
        int a=num2[index]+val;
        num2[index]=a;
        mp2[num2[index]]++;
    }
    
    int count(int tot) {
        int c=0;
        for(auto i:mp1) {
            c+=(i.second*mp2[tot-i.first]);
        }
        return c;

        // [1,1,2,2,2,3] [1,4,5,5,5,4]
        // tot=7( [1-> 6][2-> 5][3-> 4])(no,3,2)
        //(no,3(i.second)*mp2[5])
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */