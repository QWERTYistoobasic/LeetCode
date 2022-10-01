class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>adj[n+1];
        for(int i=0;i<p.size();i++)
        {
            adj[p[i][0]].push_back(p[i][1]);
        }
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        int count=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            count++;
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }
        return count==n;
    }
};