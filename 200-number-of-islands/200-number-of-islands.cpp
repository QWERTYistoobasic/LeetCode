class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>&grid,vector<vector<int>>&vis)
    {
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        if(row>0&&!vis[row-1][col]&&grid[row-1][col]=='1')
            dfs(row-1,col,grid,vis);
        if(row<n-1&&!vis[row+1][col]&&grid[row+1][col]=='1')
            dfs(row+1,col,grid,vis);
        if(col>0&&!vis[row][col-1]&&grid[row][col-1]=='1')
            dfs(row,col-1,grid,vis);
        if(col<m-1&&!vis[row][col+1]&&grid[row][col+1]=='1')
            dfs(row,col+1,grid,vis);
            }
   int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
       int  m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
            if(!vis[i][j]&&grid[i][j]=='1')
            {
                count++;
                dfs(i,j,grid,vis);
            }
            }
        }
        return count;
    }
};