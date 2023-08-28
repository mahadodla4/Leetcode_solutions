class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) 
    {
        int count=0;
        for(int i=left; i<=right; i++)
        {
            string a=words[i];
            char st=a.at(0);
            char en=a.at(a.size()-1);
            //cout<<st<<" "<<en<<endl;
            if((st=='a' or st=='e' or st=='i' or st=='o' or st=='u') and (en=='a' or en=='e' or en=='i' or en=='o' or en=='u'))
            {
                count++;
            }
        }
        return count;
    }
};