class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums[n-1]>=2*nums[n-2])
            return mp[nums[n-1]];
        return -1;
    }
};