class Solution {
public:
    int f(int i,vector<int>&arr,int k,vector<int>&dp)
    {
        if(i==arr.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int len=0;
        int maxi=INT_MIN;
        int max_g=INT_MIN;
        int n=arr.size();
            for(int j=i;j<min(n,i+k);j++)
            {
              len++;
              maxi=max(maxi,arr[j]);
              int sum= len*maxi+f(j+1,arr,k,dp);
              max_g=max(max_g,sum);
            }
        return dp[i]=max_g;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return f(0,arr,k,dp);
    }
};