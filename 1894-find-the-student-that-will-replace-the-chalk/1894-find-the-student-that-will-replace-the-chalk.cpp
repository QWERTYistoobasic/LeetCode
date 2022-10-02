class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int sum=0;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
            if(sum>k)
                return i;
        }
        int rem=k%sum;
        if(rem==0)
            return 0;
        int ans=0;
        for(int i=0;i<chalk.size();i++)
        {
            rem-=chalk[i];
            if(rem<0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};