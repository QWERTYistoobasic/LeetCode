class Solution {
public:
    string sortSentence(string s) {
         map<int, string> mp;
      int ind = 0;
      s += ' ';
      for(int i = 0; i < s.length(); i++)
      {
        if(s[i] == ' ')
        {
          mp[(int)s[i - 1]] = s.substr(ind, i - ind - 1);
          ind = i + 1;
        }
      }
      string ans = "";
      for(auto it : mp)
      {
        ans += it.second;
        ans += ' ';
      }
      ans.pop_back();
      return ans;
    }
};