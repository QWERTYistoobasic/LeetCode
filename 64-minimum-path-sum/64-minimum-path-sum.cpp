class Solution {
public:
    int f(int i,int j,int m,int n,vector<vector<int>>&dp,vector<vector<int>>&arr)
    {
        if(i>=m||j>=n)
            return 1e9;
        if(i==m-1&&j==n-1)
            return arr[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=min(f(i+1,j,m,n,dp,arr),f(i,j+1,m,n,dp,arr))+arr[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(0,0,m,n,dp,grid);
    }
};