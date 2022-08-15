class Solution {
public:
    bool f(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    {
        if(i<0&&j<0) return true;
        if(j<0&&i>=0) return false;
        if(i<0&&j>=0)
        {
            for(int k=0;k<=j;k++)
            {
                if(s2[k]!='*')
                    return false;
            }
            return true;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j]||s2[j]=='?')
            return dp[i][j]=f(i-1,j-1,s1,s2,dp);
        if(s2[j]=='*')
            return dp[i][j]=f(i-1,j,s1,s2,dp)||f(i,j-1,s1,s2,dp);
        return false;
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(s.size()-1,p.size()-1,s,p,dp);
    }
};