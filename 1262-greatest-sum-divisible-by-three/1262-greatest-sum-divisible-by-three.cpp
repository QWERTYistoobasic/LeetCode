class Solution {
public:
    int f(int i,int sum,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i==nums.size())
        {
            if(sum==0)
                return 0;
            return INT_MIN;
        }
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        return dp[i][sum]=max(nums[i]+f(i+1,(sum+nums[i])%3,nums,dp),f(i+1,sum,nums,dp));
    }
    int maxSumDivThree(vector<int>& nums) {
       int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return f(0,0,nums,dp);
    }
};