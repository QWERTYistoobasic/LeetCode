class Solution {
public:
    int digitsum(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[digitsum(nums[i])].push_back(nums[i]);
        }
        int maxi=0;
        for(auto i:mp)
        {
            if(i.second.size()==1)
                continue;
            sort(i.second.rbegin(),i.second.rend());
            int sum=i.second[0]+i.second[1];
            maxi=max(maxi,sum);
        }
        if(maxi==0)
            return -1;
        else
            return maxi;
    }
};