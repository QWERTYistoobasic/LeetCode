class Solution {
public:
    int f(int i,int j,vector<int>&piles,vector<vector<int>>&dp)
    {
        if(i>j)
            return 0;
        if(i==j)
            return dp[i][j]=piles[i];
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=max(f(i+1,j,piles,dp)+piles[i],f(i,j-1,piles,dp)+piles[j]);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
            int sum=0;
        for(int i=0;i<piles.size();i++)
        {
            sum+=piles[i];
        }
        return(f(0,n-1,piles,dp)>sum/2);
    }
};