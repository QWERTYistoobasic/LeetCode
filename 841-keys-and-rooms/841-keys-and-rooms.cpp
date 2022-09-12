class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
     int n=rooms.size();
     vector<int>adj[n];
     vector<int>vis(n,0);
     for(int i=0;i<n;i++)
     {
         int m=rooms[i].size();
         for(int j=0;j<m;j++)
         {
             adj[i].push_back(rooms[i][j]);
         }
     }
       queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                q.push(it);
                vis[it]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
                return false;
        }
        return true;
    }
};