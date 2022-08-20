class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
    int ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    for(auto it: mp){
        if(it.second>n/4){
            ans=it.first;
        }
    }
    return ans;
    }
};