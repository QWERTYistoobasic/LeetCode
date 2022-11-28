class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
         unordered_map<int, int> losers; // <player, no.of times he lost the game>
        set<int> players; // keeps track of players participated in Game, in ascending order
        
        for(vector<int> match: matches) {
            losers[match[1]]++;
            
            players.insert(match[0]);
            players.insert(match[1]);
        }
        
        vector<vector<int>> answer(2);
        for(int player: players) {
            if(!losers.count(player)) {  // if the plays hasn't lost any game
                answer[0].push_back(player);
            } else if(losers.count(player) && losers[player] == 1) { // if the player lost only one game
                answer[1].push_back(player);
            }
        }
        
        return answer;
    }
};