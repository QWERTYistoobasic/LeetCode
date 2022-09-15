class Solution {
public:
    bool checkString(string s) {
     int n=s.size();
     for(int i=n-1;i>=0;i--)
     {
         if(s[i]=='a')
         {
             for(int j=i;j>=0;j--)
             {
                 if(s[j]=='b')
                  return false;
             }
         }
     }
        return true;
    }
};