class Solution {
public:
    int f(int i,int j,vector<int>&values,vector<vector<int>>&dp)
    {
        if(i==j||abs(i-j)==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int mini=1e9;
        for(int k=i+1;k<j;k++)
        {
           int val=values[i]*values[k]*values[j]+f(i,k,values,dp)+f(k,j,values,dp);
            mini=min(mini,val);
        }
        return dp[i][j]=mini;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(0,n-1,values,dp);
    }
};