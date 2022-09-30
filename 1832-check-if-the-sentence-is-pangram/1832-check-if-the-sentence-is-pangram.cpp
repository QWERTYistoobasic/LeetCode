class Solution {
public:
    bool checkIfPangram(string sentence) {
       if(sentence.size()<26)
           return false;
        else
        {
            unordered_map<char,int>mp;
            for(int i=0;i<sentence.size();i++)
            {
                mp[sentence[i]]++;
            }
            int count=0;
            for(auto x:mp)
            {
                count++;
            }
            return count==26;
        }
    }
};