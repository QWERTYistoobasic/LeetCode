class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        if(target.size()>s.size())
            return 0;
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<target.size();i++)
        {
            mp1[target[i]]++;
        }
        int count=INT_MAX;
        for(auto x:mp1)
        {
            if(mp[x.first]==0||mp[x.first]<x.second)
                return 0;
            if(mp[x.first]/x.second>0)
            {
            count=min(count,mp[x.first]/x.second);
            mp[x.first]-=x.second;
            }
        }
        if(count==INT_MAX)
            return 0;
        return count;
    }
};