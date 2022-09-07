class Solution {
public:
    int countPoints(string rings) {
     unordered_map<int,set<int>>mp;
        for(int i=1;i<rings.size();i+=2)
        {
          mp[rings[i]-'0'].insert(rings[i-1]);
        }
        int ans=0;
        for(auto x:mp)
        {
            if(x.second.size()==3)
                ans++;
        }
        return ans;
    }
};