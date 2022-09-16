class Solution {
public:
    int f(int i,int k,vector<int>& nums, vector<int>& multipliers,vector<vector<int>>&dp)
    {
        if(k>=multipliers.size())
            return 0;
        if(dp[i][k]!=INT_MIN)
            return dp[i][k];
        int j=nums.size()-1-(k-i);
        int front=nums[i]*multipliers[k]+f(i+1,k+1,nums,multipliers,dp);
        int back=nums[j]*multipliers[k]+f(i,k+1,nums,multipliers,dp);
        return dp[i][k]=max(front,back);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,INT_MIN));
        return f(0,0,nums,multipliers,dp);
    }
};