class Solution {
public:
    int f(int i,int j,vector<int>&cuts,vector<vector<int>>&dp)
    {
        if(i>j)
            return 0;
        int mini=1e9;
        if(dp[i][j]!=-1)
            return dp[i][j];
        for(int k=i;k<=j;k++)
        {
            int cost=cuts[j+1]-cuts[i-1]+f(i,k-1,cuts,dp)+f(k+1,j,cuts,dp);
            mini=min(cost,mini);
        }
        return dp[i][j]=mini;
            
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        int x=cuts.size();
        vector<vector<int>>dp(x,vector<int>(x,-1));
        return f(1,x-2,cuts,dp);
    }
};