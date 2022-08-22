class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<n;j++)
                {
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            int count1=0;
            int count2=0;
            for(int j=0;j<m;j++)
                {
                    if(grid[j][i]==0)
                        count1++;
                    else
                        count2++;
                }
            if(count1>count2)
            {
                for(int j=0;j<m;j++)
                {
                   grid[j][i]=!grid[j][i];
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            int k=0;
            for(int j=n-1;j>=0;j--)
            {
              ans+=grid[i][j]*pow(2,k);
                k++;
            }
        }
        return ans;
    }
};