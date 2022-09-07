class Solution {
public:
    int digitsum(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int countBalls(int l, int h) {
       unordered_map<int,int>mp;
        int ans=0;
        for(int i=l;i<=h;i++)
        {
            int x=digitsum(i);
            mp[x]++;
            ans=max(ans,mp[x]);
        }
        return ans;
    }
};