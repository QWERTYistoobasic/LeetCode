class Solution {
public:
    string reverseParentheses(string s) {
        vector<string>st;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push_back(str);
                str="";
            }
            else if(s[i]==')')
            {
                reverse(str.begin(),str.end());
                str=st.back()+str;
                st.pop_back();
            }
            else
                str+=s[i];
        }
        return str;
    }
};