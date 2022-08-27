class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      vector<vector<int>>dp(2);
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end()&&find(dp[0].begin(),dp[0].end(),nums1[i])==dp[0].end())
                dp[0].push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++)
        {
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end()&&find(dp[1].begin(),dp[1].end(),nums2[i])==dp[1].end())
                dp[1].push_back(nums2[i]);
        }
        return dp;
    }
};