class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char,int>a;
         for(int i=0;i<magazine.length();i++)
             a[magazine[i]]++;
        for(int i=0;i<ransomNote.length();i++)
        {
            a[ransomNote[i]]--;
            if(a[ransomNote[i]]<0)
                return false;
        }
        return true;
    }
};