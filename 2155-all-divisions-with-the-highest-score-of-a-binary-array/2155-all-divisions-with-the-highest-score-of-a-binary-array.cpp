class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n+1,0),right(n+1,0);
        for(int i=1;i<n+1;i++){
            if(nums[i-1]==0)
                left[i]=left[i-1]+1;
            else 
                left[i]=left[i-1];
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1)
                right[i]=right[i+1]+1;
            else 
                right[i]=right[i+1];
        }
        vector<int>total(n+1,0);
         int max=0;
        for(int i=0;i<n+1;i++){
            total[i]=left[i]+right[i];
            if(total[i]>max)max=total[i];
        }
        
        vector<int> ans;
        for(int i=0;i<n+1;i++){
            if(total[i]==max)ans.push_back(i);
        }
        return ans;
    }
};