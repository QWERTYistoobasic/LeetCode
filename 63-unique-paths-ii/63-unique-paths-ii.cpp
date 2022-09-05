class Solution {
public:
     int f(int i,int j,int m,int n,vector<vector<int>>&dp,vector<vector<int>>& arr)
    {
         if(i>=m||j>=n||arr[i][j]==1)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=f(i+1,j,m,n,dp,arr)+f(i,j+1,m,n,dp,arr);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(0,0,m,n,dp,arr);
    }
};