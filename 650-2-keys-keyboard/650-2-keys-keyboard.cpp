class Solution {
public:
    int f(int count,int screen,int copy,int n,vector<vector<int>>&dp)
    {
        if(screen>n||count>n)
            return 1e9;
        if(screen==n)
            return count;
        if(dp[count][screen]!=-1)
        return dp[count][screen];
        int paste=f(count+1,screen+copy,copy,n,dp);
        int cp=f(count+2,2*screen,screen,n,dp);
        return dp[count][screen]=min(cp,paste);
    }
    int minSteps(int n) {
        if(n==1)
            return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(1,1,1,n,dp);
    }
};
