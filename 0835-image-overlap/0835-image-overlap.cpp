class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>>a;
        vector<pair<int,int>>b;
        for(int i=0;i<img1.size();i++)
        {
            for(int j=0;j<img1[0].size();j++)
            {
                if(img1[i][j]==1)
                    a.push_back({i,j});
                if(img2[i][j]==1)
                    b.push_back({i,j});
            }
        }
        map<pair<int,int>,int>mp;
        int ans=0;
        for(auto x:a)
        {
            for(auto y:b)
            {
               mp[{x.first-y.first,x.second-y.second}]++;
               ans=max(mp[{x.first-y.first,x.second-y.second}],ans);
            }
        }
        return ans;
    }
};