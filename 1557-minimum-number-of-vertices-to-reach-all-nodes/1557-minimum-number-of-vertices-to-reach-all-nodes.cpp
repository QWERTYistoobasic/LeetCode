class Solution {
private:
    void dfs(int i, vector<int>adj[],set<int>&s)
    {
        
        for(auto it:adj[i])
        {
            if(s.find(it)!=s.end())
            {
                s.erase(s.find(it));
             dfs(it,adj,s);
            }
        }
    }
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
        }
        set<int>s;
        for(int i=0;i<n;i++)
            s.insert(i);
        for(int i=0;i<n;i++)
        {
            if(s.find(i)!=s.end())
            {
              dfs(i,adj,s);
            }
        }
        vector<int>ans;
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};