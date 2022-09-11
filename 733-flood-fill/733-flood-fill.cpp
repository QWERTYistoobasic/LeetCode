class Solution {
public:
    void dfs(int sr,int sc,vector<vector<int>>& image,vector<vector<int>>& ans,int color,int colour)
    {
        ans[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        if(sr>0&&ans[sr-1][sc]!=color&&image[sr-1][sc]==colour)
        {
            dfs(sr-1,sc,image,ans,color,colour);
        }
         if(sr<n-1&&ans[sr+1][sc]!=color&&image[sr+1][sc]==colour)
        {
            dfs(sr+1,sc,image,ans,color,colour);
        }
         if(sc>0&&ans[sr][sc-1]!=color&&image[sr][sc-1]==colour)
        {
            dfs(sr,sc-1,image,ans,color,colour);
        }
         if(sc<m-1&&ans[sr][sc+1]!=color&&image[sr][sc+1]==colour)
        {
            dfs(sr,sc+1,image,ans,color,colour);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int colour=image[sr][sc];
        vector<vector<int>>ans=image;
        dfs(sr,sc,image,ans,color,colour);
        return ans;
    }
};