class Solution {
public:
    int f(int ind,vector<int>&arr,int target,vector<int>&dp)
    {
        if(target==0)
        {
            return 0;
        }
        if(ind==arr.size()||target<0)
            return 1e9;
        if(dp[target]!=-1)
            return dp[target];
        int nottake=f(ind+1,arr,target,dp);
        int take=1e9;
        if(target>=arr[ind])
        {
            take=1+f(ind,arr,target-arr[ind],dp);
        }
        return dp[target]=min(take,nottake);
    }
    int numSquares(int n) {
        int num=1;
        vector<int>arr;
        while(num*num<=n)
        {
           arr.push_back(num*num);
            num++;
        }
        vector<int>dp(n+1,-1);
        return f(0,arr,n,dp);
    }
};