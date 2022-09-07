class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])<=mini)
            {
                mini=abs(nums[i]);
                ans=nums[i];
            }
        }
        if(find(nums.begin(),nums.end(),abs(ans))!=nums.end())
            ans=abs(ans);
        return ans;
    }
};