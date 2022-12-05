class Solution {
public:
    string makeFancyString(string s) {
        string ans=s.substr(0,2);
        int j=2;
        for(int i=2;i<s.size();i++)
        {
            if(s[i]==ans[j-1]&&s[i]==ans[j-2])
                continue;
            else
            {
                ans+=s[i];
                j++;
            }
        }
        return ans;
    }
};