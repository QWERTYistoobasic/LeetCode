class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        string temp;
        for(i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                temp=word.substr(0,i+1);
                break;
            }
        }
        if(i==word.size())
            return word;
        else
        {
            reverse(temp.begin(),temp.end());
            temp+=word.substr(i+1);
            return temp;
        }
    }
};