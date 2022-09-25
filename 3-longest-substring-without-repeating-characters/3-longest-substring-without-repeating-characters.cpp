class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int count=0;
        if(s.size()==0)
            return 0;
        if(s.size()==1)
            return 1;
        vector<char>str;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(find(str.begin(),str.end(),s[i])==str.end())
                str.push_back(s[i]);
            else
            {
                count=str.size();
                maxi=max(count,maxi);
                count=0;
                str.erase(str.begin(),find(str.begin(),str.end(),s[i])+1);
                str.push_back(s[i]);
            }
        }
        int n=str.size();
        return max(maxi,n);
        
    }
};