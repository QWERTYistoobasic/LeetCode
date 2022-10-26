class Solution {
public:
    int f(int ind,vector<int>&nums,int amount,vector<vector<int>>&dp)
    {
        if(amount<0)
            return 0;
        if (ind>=nums.size())
        {
            if(amount==0)
                return 1;
            return 0;
        }
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int a=0;
        a=f(0,nums,amount-nums[ind],dp);
        int b=f(ind+1,nums,amount,dp);
        return dp[ind][amount]=a+b;
    }
    int combinationSum4(vector<int>& nums, int amount) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
     return f(0,nums,amount,dp);
    }
};