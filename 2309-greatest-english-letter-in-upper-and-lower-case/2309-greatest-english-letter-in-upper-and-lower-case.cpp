class Solution {
public:
    string greatestLetter(string s) {
        unordered_map<char, int> mpp;
        for(auto it: s){
            mpp[it]++;
        }
        sort(s.begin(), s.end());   
        string str = "";
        for(int i=s.size()-1; i>=0; i--){
            char l = tolower(s[i]);
            char u = toupper(s[i]);
            if(mpp[l] && mpp[u]){   
                str = u;
                break;
            }     
        }
        
        return str;
    }
};