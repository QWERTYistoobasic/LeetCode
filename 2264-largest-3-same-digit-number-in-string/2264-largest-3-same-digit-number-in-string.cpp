class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=INT_MIN;
        string ans="";
        for(int i=1;i<num.size()-1;i++)
        {
            if(num[i]==num[i-1]&&num[i]==num[i+1]&&num[i]-'0'>maxi)
            {
                maxi=num[i]-'0';
                ans=num.substr(i-1,3);
            }
        }
        return ans;
    }
};