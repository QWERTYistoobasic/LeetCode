class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            unordered_map<char,char>mp;
            unordered_map<char,char>m;
            string s="";
            int j;
            for(j=0;j<words[i].size();j++)
            {
                if(mp.find(pattern[j])!=mp.end()||m.find(words[i][j])!=m.end())
                {
                    if(mp[pattern[j]]!=words[i][j]||m[words[i][j]]!=pattern[j])
                        break;
                    else
                        s+=words[i][j];
                }
                else
                {
                    mp[pattern[j]]=words[i][j];
                    m[words[i][j]]=pattern[j];
                    s+=words[i][j];
                }
            }
            if(j==words[i].size())
                ans.push_back(s);
            
        }
        return ans;
    }
};