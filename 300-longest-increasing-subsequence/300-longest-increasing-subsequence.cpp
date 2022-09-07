class Solution {
public:
    int f(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(ind==nums.size())
            return 0;
        if(dp[ind][prev+1]!=-1)
            return dp[ind][prev+1];
        int nottake=f(ind+1,prev,nums,dp);
        int take=0;
        if(prev==-1||nums[ind]>nums[prev])
        take=1+f(ind+1,ind,nums,dp);
        return dp[ind][prev+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};