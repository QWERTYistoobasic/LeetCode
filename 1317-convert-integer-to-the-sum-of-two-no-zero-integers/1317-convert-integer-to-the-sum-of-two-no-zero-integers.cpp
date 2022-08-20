class Solution {
public:
    bool haszero(int i)
    {
        while(i>0)
        {
            if(i%10==0)
                return true;
            i/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i=1;i<n;i++)
        {
            if(!haszero(i)&&!haszero(n-i))
            {
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
        }
        return ans;
    }
};