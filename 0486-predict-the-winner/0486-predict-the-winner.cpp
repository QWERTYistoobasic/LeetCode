class Solution {
public:
    int f(int i,int j,bool select,vector<int>& nums,vector<vector<int>>&dp)
    {
       if(i>j)
           return 0;
        if(i==j)
            return nums[i];
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(select)
        {
          return dp[i][j]=max(nums[i]+f(i+1,j,false,nums,dp),nums[j]+f(i,j-1,false,nums,dp));
        }
        else
        {
        return dp[i][j]=min(-nums[i]+f(i+1,j,true,nums,dp),-nums[j]+f(i,j-1,true,nums,dp));
        }
    
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(0,n-1,true,nums,dp)>=0;
    }
};