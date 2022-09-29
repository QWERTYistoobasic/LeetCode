class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int n=nums.size();
        int maxi=max_element(nums.begin(),nums.end())-nums.begin();
        int mini=min_element(nums.begin(),nums.end())-nums.begin();
        if(maxi>mini) 
        swap(maxi,mini);
        return min(mini+1 , min(n-maxi , maxi+1+n-mini));
    }
};