class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>count(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j]&&dp[i]<1+dp[j])
                {
                    dp[i]=1+dp[j];
                    count[i]=count[j];
                }
                else if(dp[i]==1+dp[j]&&nums[i]>nums[j])
                {
                    count[i]+=count[j];
                }
            }
        }
        int ans=0;
        int val=*max_element(dp.begin(),dp.end());
        for(int i=0;i<n;i++)
        {
            if(dp[i]==val)
                ans+=count[i];
        }
        return ans;
    }
};