class Solution {
public:
    int dp[601][101][101];
    void makepair(vector<string>&strs,vector<pair<int,int>>&p)
    {
        for(auto it:strs)
        {
            int one=0;
            int zero=0;
            for(int i=0;i<it.size();i++)
            {
                if(it[i]=='0')
                    zero++;
                else
                    one++;
            }
            p.push_back({zero,one});
        }
    }
    int f(int ind,int m,int n,vector<pair<int,int>> &p)
    {
        if(m<0||n<0)
            return INT_MIN;
        if(ind==p.size()||(m==0&&n==0))
            return 0;
        if(dp[ind][m][n]!=-1)
            return dp[ind][m][n];
        int nottake=f(ind+1,m,n,p);
        int take=INT_MIN;
        if(p[ind].first<=m&&p[ind].second<=n)
        take=1+f(ind+1,m-p[ind].first,n-p[ind].second,p);
        return dp[ind][m][n]=max(nottake,take);
    }
    int findMaxForm(vector<string>& strs, int m, int n) 
    {
        vector<pair<int,int>>p;
        memset(dp,-1,sizeof(dp));
        makepair(strs,p);
        return f(0,m,n,p);
    }
};