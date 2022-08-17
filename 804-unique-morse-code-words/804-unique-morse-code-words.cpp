class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....",
                  "..",".---","-.-",".-..","--","-.","---",".--.",
                  "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            string t="";
            for(int i=0;i<s.size();i++)
            {
                t+=a[s[i]-'a'];
            }
            if(find(ans.begin(),ans.end(),t)==ans.end())
                ans.push_back(t);
        }
        return ans.size();
    }
};