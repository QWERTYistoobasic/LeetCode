class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
      unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
              mp[nums[i+1]]++;
            }
        }
        int ans=0;
        int count=INT_MIN;
        for(auto it:mp)
        {
            if(it.second>count)
            {
             count=it.second;
             ans=it.first;
            }
        }
        return ans;
    }
};