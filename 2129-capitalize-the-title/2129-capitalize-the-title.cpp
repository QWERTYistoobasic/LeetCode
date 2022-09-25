class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string>arr;
        string str="";
        for(int i=0;i<title.size();i++){
            if(title[i]==' '){
                arr.push_back(str);
                str="";
            }else{
                str+=tolower(title[i]);
            }
        }
        arr.push_back(str);
        string out="";
        int idx=0;
        for(string word:arr){
            if(word.size()<=2)  out+=word;
            else{
                out+=toupper(word[0]);
                out+=word.substr(1,word.size());
            }
            idx++;
            if(idx!=arr.size())   out+=" ";
        }
        return out;
    }
};