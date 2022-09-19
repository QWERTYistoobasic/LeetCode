class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxi=1;
        int temp=1;
        if (s.size()==1)
            return 1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]-s[i-1]==1)
            {
                    temp++;
                maxi=max(maxi,temp);
            }
            else
            {
                temp=1;
            }
        }
        return maxi;
    }
};