class Solution {
public:
    int f(int ind,int n,vector<int>& nums,vector<int>&dp)
    {
        if(ind>=n-1)
            return 0;
        if(nums[ind]==0)
            return 1e9;
        if(dp[ind]!=-1)
            return dp[ind];
        int mini=INT_MAX;
        for(int i=1;i<=nums[ind];i++)
        {
            mini=min(mini,1+f(ind+i,n,nums,dp));
        }
        return dp[ind]=mini;
        
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,n,nums,dp);
    }
};