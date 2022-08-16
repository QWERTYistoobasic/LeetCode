class Solution {
public:
    bool f(int ind,int n,int k,int value,unordered_map<int,int>&mp,vector<int>&stones,vector<vector<int>> &dp)
    {
        if(ind>=n||value!=stones[ind])
            return false;
        if(ind==n-1)
            return true;
        if(dp[ind][k]!=-1)
            return dp[ind][k];
        bool back=false;
        bool same=false;
        bool front=false;
        if(k-1>0&&mp.find(value+k-1)!=mp.end())
            back=f(mp[value+k-1],n,k-1,value+k-1,mp,stones,dp);
        if(mp.find(value+k)!=mp.end())
            same=f(mp[value+k],n,k,value+k,mp,stones,dp);
        if(k+1<n&&mp.find(value+k+1)!=mp.end())
        front=f(mp[value+k+1],n,k+1,value+k+1,mp,stones,dp);
        return dp[ind][k]=back||same||front;
    }
    bool canCross(vector<int>& stones) {
        int n=stones.size();
         if(n < 2) 
         return false;
        if(1 + stones[0] < stones[1])   
            return false;
        unordered_map<int,int>mp;
        for(int i=0;i<stones.size();i++)
        {
            mp[stones[i]]=i;
        }
        vector<vector<int>> dp(n,vector<int>(1000,-1));
        return f(1,n,1,stones[1],mp,stones,dp);
    }
};