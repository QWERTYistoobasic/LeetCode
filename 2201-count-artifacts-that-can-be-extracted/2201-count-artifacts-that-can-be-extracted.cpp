class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
       vector<vector<int>>mp(n,vector<int>(n,0));
       for(int i=0;i<dig.size();i++)
       {
           mp[dig[i][0]][dig[i][1]]=1;
       }
        int count=0;
        for(int i=0;i<artifacts.size();i++)
        {
            int r1=artifacts[i][0];
            int c1=artifacts[i][1];
            int r2=artifacts[i][2];
            int c2=artifacts[i][3];
            bool flag=1;
            for(int i=r1;i<=r2;i++)
            {
                for(int j=c1;j<=c2;j++)
                {
                    if(mp[i][j]==0)
                        flag=0;
                }
            }
            count+=flag;
        }
        return count;
    }
};