class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==0||n<0)
            return false;
        else
        {
        while(n>0)
        {
            if(n%3!=0&&n!=1)
            return false;
            n/=3;
        }
        return true;
        }
    }
};