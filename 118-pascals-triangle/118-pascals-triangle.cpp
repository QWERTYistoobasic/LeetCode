class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>dp;
        for(int i=0;i<n;i++)
        {
             vector<int>row;
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                    row.push_back(1);
                else
                    row.push_back(dp[i-1][j]+dp[i-1][j-1]);
            }
            dp.push_back(row);
        }
        return dp;
    }
};