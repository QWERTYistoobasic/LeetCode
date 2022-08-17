class Solution {
public:
    bool strongPasswordCheckerII(string s) {
        int lflag=0;
        int uflag=0;
        int dflag=0;
        int sflag=0;
        if(s.size()<8)
            return false;
        string str="!@#$%^&*()-+";
        for(int i=0;i<s.size();i++)
        {
            if(i!=s.size()-1 && s[i]==s[i+1])
                return false;
            if(islower(s[i]))
                lflag++;
            if(isupper(s[i]))
                uflag++;
            if(isdigit(s[i]))
                dflag++;
            size_t found=str.find(s[i]);
                if(found!=string::npos)
            {
                cout<<s[i];
                sflag++;
            }
        }
        if(lflag>0&&sflag>0&&uflag>0&&dflag>0)
            return true;
        return false;
    }
};