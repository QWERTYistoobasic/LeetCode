class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        set<int>s1;
        for(auto x:mp)
        {
            s1.insert(x.second);
            if(s1.size()>1)
                return false;
        }
        return true;
    }
};