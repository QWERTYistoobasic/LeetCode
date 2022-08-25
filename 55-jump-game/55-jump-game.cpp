class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int r=0;
        int n=nums.size();
        for( ;i<=r;i++)
        {
            r=max(i+nums[i],r);
            if(r>=(n-1))
                return true;
        }
        return false;
    }
};