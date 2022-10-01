class Solution {
public:
    int f(string s, int pos, vector<int>&dp){
        if(pos==s.size())return 1;
        if(s[pos]=='0')return 0;
        if(pos==s.size()-1)return 1;
        if(dp[pos]!=-1)return dp[pos];
        string b = s.substr(pos,2);
        int way1 = f(s,pos+1,dp);
        int way2=0;
        if(stoi(b)<=26&&stoi(b)>0){
            way2 = f(s,pos+2,dp);
        }
        return dp[pos]= way1+way2;
    }
     int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        return f(s,0,dp);
     }
};