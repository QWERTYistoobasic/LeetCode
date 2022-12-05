class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double avg=0;
        int n=c.size();
        int end=0;
        for(int i=0;i<n;i++)
        {
            int a=c[i][0];
            int ct=c[i][1];
            if(end<a)
            {
                end=a+ct;
                avg+=end-a;
            }
            else
            {
                end=end+ct;
                avg+=end-a;
            }
        }
        avg=avg*1.0/n;
        return avg;
    }
};