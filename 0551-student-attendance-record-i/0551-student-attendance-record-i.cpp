class Solution {
public:
    bool checkRecord(string s) {
        int absent=0;
        int late=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='P'||s[i]=='A')
            {
                late=0;
            }
            if(s[i]=='L')
            {
                late++;
                if(late>=3)
                    return false;
            }
            if(s[i]=='A')
            {
                absent++;
                if(absent>=2)
                    return false; 
            }
        }
        return true;
    }
};