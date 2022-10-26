class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int cnt=0;
       
            for(int j=left;j<=right;j++)
            {
                 for(int i=0;i<ranges.size();i++)
                {
                if(j>=ranges[i][0]&&j<=ranges[i][1])
                {
                    cnt++;
                    break;
                }
            }                
        }
        
        return cnt==right-left+1;
    }
};