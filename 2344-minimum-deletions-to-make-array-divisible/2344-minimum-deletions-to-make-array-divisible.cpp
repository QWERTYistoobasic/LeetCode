class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int temp=numsDivide[0];
        int n=numsDivide.size();
        for(int i=1;i<n;i++)
        {
            temp=__gcd(temp,numsDivide[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>temp) 
                return -1;
            else if(temp%nums[i]==0) 
                return i;
        }
        return -1;
    }
};