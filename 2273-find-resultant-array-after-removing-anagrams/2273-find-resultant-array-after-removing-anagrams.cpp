class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
    vector<string> output;
    output.push_back(words[0]);
    string temp_1,temp_2;
    
    for (int i = 1; i < words.size(); i++)
    {
        if (words[i].length() == words[i - 1].length())
        {
            temp_1 = words[i];
            temp_2 = words[i - 1];
            sort(temp_1.begin(),temp_1.end());
            sort(temp_2.begin(),temp_2.end());
            if (temp_1.find(temp_2) != string::npos)
            {
                words[i] = words[i - 1];
            }
            else
            {
                output.push_back(words[i]);
            }
        }
        else
        {
            output.push_back(words[i]);
        }
    }
    
    return output;  
    }
};