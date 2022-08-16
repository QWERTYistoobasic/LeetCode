class Solution {
public:
    int f(int ind,int n,string &s,vector<vector<int>>&dp)
    {
        if(n==0)
            return 1;
        if(ind==s.size())
            return 0;
        if(dp[ind][n]!=-1)
            return dp[ind][n];
        int pick=0;
        int notpick=0;
        pick=f(ind,n-1,s,dp);
        notpick=f(ind+1,n,s,dp);
        return dp[ind][n]=pick+notpick;
        
    }
    int countVowelStrings(int n) {
        string s="aeiou";
        vector<vector<int>>dp(5,vector<int>(n+1,-1));
        return f(0,n,s,dp);
    }
};