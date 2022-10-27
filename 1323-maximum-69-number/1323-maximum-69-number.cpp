class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        string ans="";
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6'&&flag)
            {
                ans+='9';
                flag=false;
            }
            else
            {
                ans+=s[i];
            }
        }
        return stoi(ans);
    }
};