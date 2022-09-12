class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     
    sort(nums.begin(), nums.end());
    
    if(nums[nums.size()-1] <= 0) return 1;
    
    int count = 1;
    
    for(auto itr : nums){
        if(itr < count) continue;
        else if(itr == count) count++;
        else if(itr > 0) return count;
    }
    return count;
    }
};