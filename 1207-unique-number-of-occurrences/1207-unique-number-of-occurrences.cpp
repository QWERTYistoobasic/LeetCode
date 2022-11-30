class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        set<int>st;
        int count=0;
        for(auto x:mp)
        {
            count++;
            st.insert(x.second);
        }
        return st.size()==count;
    }
};