class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0) {
            return true;
        }
        for(int i=0; i<num; i++) {
            int a=i;
            string b=to_string(a);
            reverse(b.begin(),b.end());
            int val=a+stoi(b);
            if(val==num) {
                //cout<<a<<" ";
                return true;
            }
        }
        return false;
    }
};