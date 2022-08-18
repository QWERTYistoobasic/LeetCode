class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int c=0;
        if(cost.size()==0)
            return 0;
        if(cost.size()==1)
            return cost[0];
        if(cost.size()==2)
            return cost[0]+cost[1];
        for(int i=0;i<cost.size();i++)
        {
            if((i+1)%3==0)
            continue;
            c+=cost[i];
        }
        return c;
    }
};