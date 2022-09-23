class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
      unordered_map<int,int>mp;
      int mini=INT_MAX;
      for(int i=0;i<cards.size();i++)
      {
          if(mp.count(cards[i]))
          {
              mini=min(mini,i+1-mp[cards[i]]);
          }
          mp[cards[i]]=i;
      }
        if(mini==INT_MAX)
            return -1;
        return mini;
    }
};