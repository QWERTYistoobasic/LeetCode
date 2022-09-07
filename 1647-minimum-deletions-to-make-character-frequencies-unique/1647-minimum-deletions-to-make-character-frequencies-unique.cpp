class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<int>x;
        int ans=0;
        for(auto it:mp)
        {
            int temp=it.second;
            while(find(x.begin(),x.end(),temp)!=x.end())
            {
                temp--;
                ans++;
            }
            if(temp>0)
                x.push_back(temp);
        }
        return ans;
    }
};