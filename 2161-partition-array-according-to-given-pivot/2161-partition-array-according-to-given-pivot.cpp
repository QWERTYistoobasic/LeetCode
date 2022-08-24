class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
         vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]<pivot)
          {
              v1.push_back(nums[i]);
          }
            else if(nums[i]==pivot)
            {
                v2.push_back(nums[i]);
            }
            else{
                v3.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<v1.size();i++)
        {
            v.push_back(v1[i]);
        }
        
         for(int i=0;i<v2.size();i++)
        {
            v.push_back(v2[i]);
        }
        
         for(int i=0;i<v3.size();i++)
        {
            v.push_back(v3[i]);
        }
        
        return v;
    }
};