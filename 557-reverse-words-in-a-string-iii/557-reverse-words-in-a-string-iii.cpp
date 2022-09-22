class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
       string ans="";
       string temp ="";
        s+=" ";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
                temp="";
            }
            else
            {
                temp+=s[i];
            }
        }
        return ans.substr(0,n);
    }
};