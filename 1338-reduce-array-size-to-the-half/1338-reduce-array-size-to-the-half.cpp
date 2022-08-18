class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
            for(int i=0;i<arr.size();i++)
            {
                mp[arr[i]]++;
            }
        vector<int>freq;
        for(auto x:mp)
        {
          freq.push_back(x.second);  
        }
        int ans=0;
        int i=freq.size()-1;
        sort(freq.begin(),freq.end());
        int val=0;
        while(val<arr.size()/2)
        {
            ans++;
            val+=freq[i];
            i--;
        }
        return ans;
    }
};