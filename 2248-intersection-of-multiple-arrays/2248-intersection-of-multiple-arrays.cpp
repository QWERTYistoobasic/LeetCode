class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
        }
        vector<int>ans;
        for(auto x:mp)
        {
            if(x.second==nums.size())
            {
                ans.push_back(x.first);
            }
        }
        if(ans.size()>0)
        sort(ans.begin(),ans.end());
        return ans;
    }
};