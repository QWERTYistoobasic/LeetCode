class Solution {
public:
    int change(int amount, vector<int>& nums) {
          int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++)
        {
            if(i%nums[0]==0)dp[0][i]=1;
            else dp[0][i]=0;
        }
        for(int i=1;i<n;i++)
        {
            for(int target=0;target<=amount;target++)
            {
                int nottake=dp[i-1][target];
                int take=0;
                if(nums[i]<=target)
                     take=dp[i][target-nums[i]];
                dp[i][target]=nottake+take;
            }
        }
        return dp[n-1][amount];
    }
};