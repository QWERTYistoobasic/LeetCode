class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i>=0&&i<n&&j>=0&&j<m&&grid[i][j]==1)
        {
            grid[i][j]=0;
            return 1+dfs(i-1,j,grid)+dfs(i+1,j,grid)+dfs(i,j-1,grid)+dfs(i,j+1,grid);
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                 int temp=dfs(i,j,grid);
                 maxi=max(maxi,temp);
                }
            }
        }
        return maxi;
    }
};