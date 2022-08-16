class Solution {
public:
     int f(int idx, int prev, string& s, vector<int>& time, vector<vector<int>>& dp) {
        if(idx == 0) {
            if(s[idx] - 'a' == prev) return time[idx];
            return 0;
        }
        
        if(dp[idx][prev]!=-1) return dp[idx][prev];
        
        int remove = 1e8, notRemove = 1e8;
        
        remove = time[idx] + f(idx - 1, prev, s, time, dp);
        if(s[idx] - 'a' != prev) notRemove = f(idx - 1, s[idx] - 'a', s, time ,dp); 
        
        return dp[idx][prev] = min(remove, notRemove);
    }
    int minCost(string colors, vector<int>& time) {
        int n = colors.size();
        vector<vector<int>>dp(n+1, vector<int>(27, -1));
        
        return f(n-1, 26, colors, time, dp);
        
    }
};