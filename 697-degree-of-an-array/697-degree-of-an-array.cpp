class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
         unordered_map<int,vector<int>>mp;
        int size=0;
        for(int i=0;i<nums.size();i++)
        {
               mp[nums[i]].push_back(i);
                if(mp[nums[i]].size()>size)
                {
                    size=mp[nums[i]].size();
                }
        }
        
        int ans=INT_MAX;
        
        for(auto x: mp)
        {
            if(x.second.size()==size)
            {
                  ans=min(ans,(x.second[x.second.size()-1]-x.second[0]+1));
            }
        }
     return ans;
    }
};