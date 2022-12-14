class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans=0;
        if(rungs[0]>dist)
            ans+=(rungs[0]-1)/dist;
        for(int i=1;i<rungs.size();i++)
        {
            if(rungs[i]-rungs[i-1]>dist)
                ans+=(rungs[i]-1-rungs[i-1])/dist;
        }
        return ans;
    }
};