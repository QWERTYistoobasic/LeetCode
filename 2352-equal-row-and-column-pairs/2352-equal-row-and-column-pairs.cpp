class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j]=grid[j][i];
            }
        }

        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[0][i]==grid[0][j])
                {
                    int k=1;
                   for(;k<n;k++)
                   {
                       if(dp[k][i]!=grid[k][j])
                           break;
                   }
                    if(k==n)
                    ans++;
                }
            }
        }
        return ans;
    }
};