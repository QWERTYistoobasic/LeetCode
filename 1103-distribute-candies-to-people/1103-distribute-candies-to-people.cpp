class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int init=1;
        int ind=0;
        
        while(candies>0)
        {
            if(candies<=init)
            {
              ans[ind%num_people]+=candies;
                candies=0;
                break;
            }
            ans[ind%num_people]+=init;
            candies-=init;
            init++;
            ind++;
        }
        return ans;
    }
};