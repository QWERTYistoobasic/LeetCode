class Solution {
public:
    int f(int ind,int buy,int k,int n,vector<int>&prices,vector<vector<vector<int>>>&dp)
    {
        if(ind==n||k==2)
            return 0;
        if(dp[ind][buy][k]!=-1)
            return dp[ind][buy][k];
        int profit=0;
        if(buy)
        {
            profit=max(-prices[ind]+f(ind+1,0,k,n,prices,dp),f(ind+1,1,k,n,prices,dp));
        }
        else
        {
            profit=max(prices[ind]+f(ind+1,1,k+1,n,prices,dp),f(ind+1,0,k,n,prices,dp));
        }
        return dp[ind][buy][k]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,0,n,prices,dp);
    }
};