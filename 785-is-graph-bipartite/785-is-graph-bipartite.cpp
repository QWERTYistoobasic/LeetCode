class Solution {
private:
    bool check(int i,vector<int> adj[],vector<int>&vis)
    {
        queue<int>q;
        q.push(i);
        vis[i]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
               if(vis[it]==-1)
               {
                   q.push(it);
                   vis[it]=!vis[node];
               }
                else if(vis[it]==vis[node])
                    return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<int>vis(n,-1);
      vector<int>adj[n];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<graph[i].size();j++)
          {
          adj[i].push_back(graph[i][j]);
          adj[graph[i][j]].push_back(i);
         }
      }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(check(i,adj,vis)==false)
                    return false;
            }
        }
        return true;
    }
};