class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int diff = INT_MAX, curr_diff;
        
        for (int i = 0; i < arr.size()-1; i++) {
            curr_diff = arr[i+1] - arr[i];
            
            if (curr_diff == diff) {
                res.push_back({arr[i], arr[i+1]});
            }
            
            else if (curr_diff < diff) {
                res = {};
                res.push_back({arr[i], arr[i+1]});
                diff = curr_diff;
            }
        }
        
        return res;
    }
};