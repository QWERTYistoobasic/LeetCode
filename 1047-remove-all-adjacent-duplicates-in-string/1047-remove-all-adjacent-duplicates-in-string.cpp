class Solution {
public:
    string removeDuplicates(string S) {
       string ans = "";
        for (char ch: S) {
            if ( ans.size() != 0 and ans.back() == ch )
                ans.pop_back();
            else
                ans.push_back(ch);
        }
        return ans;
    }
};