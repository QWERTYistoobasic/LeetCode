class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> arr(10001, 0);
        vector<int> dp(10001, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]] += nums[i];
        }
        
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);
        
        for(int i = 2; i < 10001; i++)
        {
            dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
        }    
        return dp[10000];
    }
};