class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
        int i=1;
        int time=1;
        while(true)
        {
            if(max(m1,m2)<i)
                break;
            if(m1>=m2)
                m1-=i;
            else if(m1<m2)
                m2-=i;
            i++;
        }
        vector<int>ans;
        ans.push_back(i);
        ans.push_back(m1);
        ans.push_back(m2);
        return ans;
    }
};