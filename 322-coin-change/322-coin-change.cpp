class Solution {
public:
    int coinChange(vector<int>& nums, int amount) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++)
        {
            if(i%nums[0]==0)dp[0][i]=i/nums[0];
            else dp[0][i]=1e9;
        }
        for(int i=1;i<n;i++)
        {
            for(int target=0;target<=amount;target++)
            {
                int nottake=dp[i-1][target];
                int take=1e9;
                if(nums[i]<=target)
                     take=1+dp[i][target-nums[i]];
                dp[i][target]=min(nottake,take);
            }
        }
        
         if(dp[n-1][amount]>=1e9)
             return -1;
        return dp[n-1][amount];
    }
};