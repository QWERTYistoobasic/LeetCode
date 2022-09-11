class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                mp[nums[i]]++;
        }
        int maxi=INT_MIN;
        int ans=INT_MAX;
        for(auto x:mp)
        {
            if(x.second>maxi)
            {
                maxi=x.second;
                ans=x.first;
            }
            else if(x.second==maxi&&x.first<ans)
            {
                ans=x.first;
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};