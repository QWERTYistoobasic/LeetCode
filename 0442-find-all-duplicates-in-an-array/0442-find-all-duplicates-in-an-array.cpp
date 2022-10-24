class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>dup;
        for(int i=0; i<nums.size(); i++){
            int eleIndex = abs(nums[i]) - 1;
            nums[eleIndex] = -nums[eleIndex];
            if(nums[eleIndex]>0) dup.push_back(eleIndex+1); }
        return dup;
    }
};