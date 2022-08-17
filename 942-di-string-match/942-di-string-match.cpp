class Solution {
public:
    vector<int> diStringMatch(string s) {
         int min = 0, pos = 0;
    vector<int>v;
    if (s[0]=='I')
    {
        v.push_back(0);
        v.push_back(1);
        min = 2;
        pos = 1;
    }
    else
    {
        v.push_back(1);
        v.push_back(0);
        min = 2;
        pos = 0;
    }
    for (int i=1; i<s.size(); i++)
    {
        if (s[i]=='I')
        {
            v.push_back(min);
            min++;
            pos = i+1;
        }
        else
        {
            v.push_back(v[i]);
            for (int j=pos; j<=i; j++)
                v[j]++;
 
            min++;
        }
    }
    return v;
    }
};