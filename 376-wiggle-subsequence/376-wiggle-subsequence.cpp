class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        if(nums.size()==2)
        {
            if(nums[0]==nums[1])
                return 1;
            return 2;
        }
        set<int>s(nums.begin(),nums.end());
        if(s.size()==1)
            return 1;
        vector<int>w;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            w.push_back(nums[i]-nums[i-1]);
        }
        vector<int>dp(n-1,1);
        for(int i=0;i<n-1;i++)
        {
           for(int j=0;j<i;j++)
           {
               if(w[i]*w[j]<0)
                   dp[i]=max(dp[i],1+dp[j]);
           }
        }
        return *max_element(dp.begin(),dp.end())+1;
    }
};