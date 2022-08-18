class Solution {
public:
    static bool comp(string &s1,string &s2)
    {
        return (s1.size()<s2.size());
    }
    bool possible(string &a,string &b)
    {
        if(a.size()-b.size()!=1)
            return false;
        int i=0;
        int j=0;
        while(i<a.size())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(i==a.size()&&j==b.size())
            return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(),words.end(),comp);
        vector<int>dp(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(possible(words[i],words[j]))
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};