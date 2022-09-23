class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int ans=-1;
        int maxi=INT_MIN;
        for(auto it:mp)
        {
            if(it.first==it.second&&it.first>maxi)
            {
                ans=it.first;
                maxi=it.first;
            }
        }
        return ans;
    }
};