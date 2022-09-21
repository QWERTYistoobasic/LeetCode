class Solution {
public:
    bool dfsCheck(int node,vector<int>&vis,vector<int>&pathvis,vector<int>&check,vector<vector<int>>& graph)
    {
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:graph[node])
        {
            if(!vis[it])
            {
            if(dfsCheck(it,vis,pathvis,check,graph)==true)
                return true;
            }
            else if(pathvis[it])
                return true;
            
        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();
        vector<int>vis(n,0);
        vector<int>pathvis(n,0);
        vector<int>check(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            dfsCheck(i,vis,pathvis,check,graph);
        }
        for(int i=0;i<n;i++)
        {
            if(check[i])
                ans.push_back(i);
        }
    return ans;
    }
};