class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0)
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int ind=max_element(dp.begin(),dp.end())-dp.begin();
        vector<int>ans;
        int val=*max_element(dp.begin(),dp.end());
        ans.push_back(nums[ind]);
        int prev=ind;
        ind--;
        while(ind>=0&&prev>=0)
        {
            if(val-dp[ind]==1&&nums[prev]%nums[ind]==0)
            {
                ans.push_back(nums[ind]);
                val=dp[ind];
                prev=ind;
            }
            ind--;
        }
        return ans;
    }
};