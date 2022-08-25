class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev1=0;
        for(int i=1;i<n;i++)
        {
            int l=nums[i];
            if(i>1)
                l+=prev1;
            int r=prev;
            int curr=max(l,r);
            prev1=prev;
            prev=curr;
        }

        return prev;
    }
};