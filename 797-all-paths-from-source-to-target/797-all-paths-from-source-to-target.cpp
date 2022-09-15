class Solution {
public:
    void dfs(vector<vector<int>>& graph,int node,int target,vector<vector<int>>&ans,vector<int>&temp)
    {
        temp.push_back(node);
        if(node==target)
        {
        ans.push_back(temp);
        temp.pop_back();
        return;
        }
        else
        {
            for(auto it:graph[node])
            {
                dfs(graph,it,target,ans,temp);
            }
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>>ans;
      vector<int>temp;
        dfs(graph,0,graph.size()-1,ans,temp);
        return ans;
    }
};