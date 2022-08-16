class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       unordered_map<int,int>mp;
           for(int i=0;i<nums.size();i++)
           {
               mp[nums[i]]++;
           }
        int pairs=0;
        for(auto it:mp)
        {
                pairs+=it.second/2;
        }
        vector<int>ans;
        int n=nums.size();
        ans.push_back(pairs);
        ans.push_back(n-2*pairs);
        return ans;
    }
};