class Solution {
public:
    bool f(int ind,int n,vector<int>&arr,vector<int>&dp)
    {
        if(ind>=n||ind<0||arr[ind]==-1)
            return false;
      if(arr[ind]==0)
          return true;
        if(dp[ind]!=-1)
            return dp[ind];
        int t=arr[ind];
        arr[ind]=-1;
        return dp[ind]=f(ind+t,n,arr,dp)||f(ind-t,n,arr,dp);
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return f(start,n,arr,dp);
    }
};